//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "ReportForm.h"
#include "RegistrationForm.h"
#include "DataModel.h"
#include "MainForm.h"
#include "AdminForm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TReportWindow *ReportWindow;
int DayCount(int month);
//---------------------------------------------------------------------------
__fastcall TReportWindow::TReportWindow(TComponent* Owner)
        : TForm(Owner)
{
        unsigned short year, month, day;
        Date().DecodeDate(&year, &month, &day);

        QRLabel7->Caption = (IntToStr(day) + '.' + IntToStr(month) + '.' + IntToStr(year));
}
//---------------------------------------------------------------------------
void __fastcall TReportWindow::FormShow(TObject *Sender)
{
        DataModule1->UserTable->Active = true;

        unsigned short year, month, day;
        Word Year, Month, Day;

        Date().DecodeDate(&year, &month, &day);
        DataModule1->UserTable->Filtered = true;
        DataModule1->UserTable->Filter = "RegistrationDate='" + (IntToStr(day-1) + '.' + IntToStr(month) + '.' + IntToStr(year)) + "'";
        int yesterdayRec = DataModule1->UserTable->RecordCount;
        DataModule1->UserTable->Filtered = false;
        DataModule1->UserTable->Filtered = true;
        DataModule1->UserTable->Filter = "RegistrationDate='" + (IntToStr(day-2) + '.' + IntToStr(month) + '.' + IntToStr(year)) + "'";
        int dayBeforYesterdayRec = DataModule1->UserTable->RecordCount;
        DataModule1->UserTable->Filtered = false;
        if (dayBeforYesterdayRec > yesterdayRec)
        {
                QRLabel1->Caption = "Есть тенденция к снижению.";
        }
        else if (dayBeforYesterdayRec == yesterdayRec)
        {
                QRLabel1->Caption = "Нету тенденций к росту или снижению.";
        }
        else
        {
                QRLabel1->Caption = "Есть тенденция к росту";
        }
        int xSize;
        DataModule1->UserTable->First();
        DecodeDate(DataModule1->UserTable->FieldByName("RegistrationDate")->Value, Year, Month, Day);
        if (month != Month)
        {
                xSize = DayCount(Month) - Day;
                Month++;
                while (Month != month)
                {
                        xSize += DayCount(Month);
                        Month++;
                }
                xSize += day;
        }
        else
        {
                if (day < Day)
                {
                        xSize = Day - day;
                }
                else if (Day < day)
                {
                        xSize = day - Day;
                }
        }
        DecodeDate(DataModule1->UserTable->FieldByName("RegistrationDate")->Value, Year, Month, Day);
        for (int i = 1; i <= xSize; i++)
        {
                DataModule1->UserTable->Filtered = true;
                DataModule1->UserTable->Filter = "RegistrationDate='" + (IntToStr(Day) + '.' + IntToStr(Month) + '.' + IntToStr(Year)) + "'";
                int PerDayCount = DataModule1->UserTable->RecordCount;
                DataModule1->UserTable->Filtered = false;

                QRChart1->Chart->Series[0]->AddXY(i, PerDayCount);

                Day++;
                if (Day > DayCount(Month))
                {
                        Day = 1;
                        Month++;
                }

        }
        float temp = (float)DataModule1->UserTable->RecordCount / xSize;
        int average = DataModule1->UserTable->RecordCount / xSize;
        temp -= average;
        if (temp >= 0.5)
        {
                average += 1;
        }
        QRLabel2->Caption = IntToStr(average) + " людей за день";
        QRLabel3->Caption = IntToStr(average * DayCount(Month+1));

        int since18 = 0;
        int since25 = 0;
        int since40 = 0;
        DataModule1->UserTable->First();
        for (int i = 1; i <= DataModule1->UserTable->RecordCount; i++)
        {
                DecodeDate(DataModule1->UserTable->FieldByName("BirthDate")->Value, Year, Month, Day);
                int age = year - Year;
                if (age >= 18 && age < 25)
                {
                        since18++;
                }

                if (age >= 25 && age < 40)
                {
                        since25++;
                }

                if (age >= 40)
                {
                        since40++;
                }
                DataModule1->UserTable->Next();
        }
        if (since18 > since25 && since18 > since40)
        {
                QRMemo1->Lines->Add("Наибольшее количество безработных в группе возраст: 18 - 25");
        }
        else if (since18 == since25 && since18 > since40)
        {
                QRMemo1->Lines->Add("Наибольшее количество безработных в группе возраст: 18 - 25, 25 - 40");
        }
        else if (since18 > since25 && since18 == since40)
        {
                QRMemo1->Lines->Add("Наибольшее количество безработных в группе возраст: 18 - 25, 40 и более");
        }
        else if (since18 < since25 && since25 > since40)
        {
                QRMemo1->Lines->Add("Наибольшее количество безработных в группе возраст: 25 - 40");
        }
        else if (since25 > since18 && since25 == since40)
        {
                QRMemo1->Lines->Add("Наибольшее количество безработных в группе возраст: 25 - 40, 40 и более");
        }
        else if (since40 > since18 && since40 > since25)
        {
                QRMemo1->Lines->Add("Наибольшее количество безработных в группе возраст: 40 и более");
        }
        else if (since40 == since18 && since40 == since25)
        {
                QRMemo1->Lines->Add("В группе возраст одинаковое количество");
        }

        DataModule1->UserTable->Filtered = true;
        DataModule1->UserTable->Filter = "Sex='" + RegistrationWindow->ComboBox1->Items->Strings[0] + "'";
        int q1 = DataModule1->UserTable->RecordCount;//Men
        DataModule1->UserTable->Filtered = false;
        DataModule1->UserTable->Filtered = true;
        DataModule1->UserTable->Filter = "Sex='" + RegistrationWindow->ComboBox1->Items->Strings[1] + "'";
        int q2 = DataModule1->UserTable->RecordCount;//Women
        DataModule1->UserTable->Filtered = false;

        if (q1 > q2)
        {
                QRMemo1->Lines->Add("Наибольшее количество безработных в группе пол: мужской");
        }
        else if (q1 == q2)
        {
                QRMemo1->Lines->Add("В группе пол одинаковое количество");
        }
        else
        {
                QRMemo1->Lines->Add("Наибольшее количество безработных в группе пол: женский");
        }

        DataModule1->UserTable->Filtered = true;
        DataModule1->UserTable->Filter = "Education='" + RegistrationWindow->ComboBox2->Items->Strings[0] + "'";
        q1 = DataModule1->UserTable->RecordCount;//School
        DataModule1->UserTable->Filtered = false;
        DataModule1->UserTable->Filtered = true;
        DataModule1->UserTable->Filter = "Education='" + RegistrationWindow->ComboBox2->Items->Strings[1] + "'";
        q2 = DataModule1->UserTable->RecordCount;//College
        DataModule1->UserTable->Filtered = false;
        DataModule1->UserTable->Filtered = true;
        DataModule1->UserTable->Filter = "Education='" + RegistrationWindow->ComboBox2->Items->Strings[2] + "'";
        int q3 = DataModule1->UserTable->RecordCount;//Bacheler
        DataModule1->UserTable->Filtered = false;
        DataModule1->UserTable->Filtered = true;
        DataModule1->UserTable->Filter = "Education='" + RegistrationWindow->ComboBox2->Items->Strings[3] + "'";
        int q4 = DataModule1->UserTable->RecordCount;//Master
        DataModule1->UserTable->Filtered = false;

        if (q1 > q2 && q1 > q3 && q1 > q4)
        {
                QRMemo1->Lines->Add("Наибольшее количество безработных в группе образование: среднее общее");
        }
        else if (q1 == q2 && q1 > q3 && q1 > q4)
        {
                QRMemo1->Lines->Add("Наибольшее количество безработных в группе образование: среднее общее, среднее профессиональное");
        }
        else if (q1 == q2 && q1 == q3 && q1 > q4)
        {
                QRMemo1->Lines->Add("Наибольшее количество безработных в группе образование: среднее общее, среднее профессиональное, не полное высшее");
        }
        else if (q1 == q2 && q1 > q3 && q1 == q4)
        {
                QRMemo1->Lines->Add("Наибольшее количество безработных в группе образование: среднее общее, среднее профессиональное, высшее");
        }
        else if (q1 > q2 && q1 == q3 && q1 > q4)
        {
                QRMemo1->Lines->Add("Наибольшее количество безработных в группе образование: среднее общее, не полное высшее");
        }
        else if (q1 > q2 && q1 == q3 && q1 == q4)
        {
                QRMemo1->Lines->Add("Наибольшее количество безработных в группе образование: среднее общее, не полное высшее, высшее");
        }
        else if (q2 < q1 && q1 > q3 && q1 == q4)
        {
                QRMemo1->Lines->Add("Наибольшее количество безработных в группе образование: среднее общее, высшее");
        }
        else if (q2 > q1 && q2 > q3 && q2 > q4)
        {
                QRMemo1->Lines->Add("Наибольшее количество безработных в группе образование: среднее профессиональное");
        }
        else if (q2 > q1 && q2 == q3 && q2 > q4)
        {
                QRMemo1->Lines->Add("Наибольшее количество безработных в группе образование: среднее профессиональное, не полное высшее");
        }
        else if (q2 > q1 && q2 == q3 && q2 == q4)
        {
                QRMemo1->Lines->Add("Наибольшее количество безработных в группе образование: среднее профессиональное, не полное высшее, высшее");
        }
        else if (q2 > q1 && q2 > q3 && q2 == q4)
        {
                QRMemo1->Lines->Add("Наибольшее количество безработных в группе образование: среднее профессиональное, высшее");
        }
        else if (q3 > q1 && q3 > q2 && q3 > q4)
        {
                QRMemo1->Lines->Add("Наибольшее количество безработных в группе образование: не полное высшее");
        }
        else if (q3 > q1 && q3 > q2 && q3 == q4)
        {
                QRMemo1->Lines->Add("Наибольшее количество безработных в группе образование: не полное высшее, высшее");
        }
        else if (q4 > q1 && q4 > q2 && q4 > q3)
        {
                QRMemo1->Lines->Add("Наибольшее количество безработных в группе образование: высшее");
        }

        DataModule1->JobsTable->Active = true;
        int *jobs = new int [DataModule1->JobsTable->RecordCount];
        int index;
        DataModule1->JobsTable->First();
        for (int i = 1; i <= DataModule1->JobsTable->RecordCount; i++)
        {
                DataModule1->UserTable->Filtered = true;
                if (DataModule1->JobsTable->FieldByName("Job")->AsString == "Другое")
                {
                        DataModule1->UserTable->Filtered = false;
                        index = i - 1;
                        jobs[index] = DataModule1->UserTable->RecordCount;
                }
                else
                {
                        DataModule1->UserTable->Filter = "Job='" + DataModule1->JobsTable->FieldByName("Job")->AsString + "'";
                        jobs[i-1] = DataModule1->UserTable->RecordCount;
                        DataModule1->UserTable->Filtered = false;
                }
                DataModule1->JobsTable->Next();
        }

        for (int i = 0; i < DataModule1->JobsTable->RecordCount; i++)
        {
                if (i != index)
                {
                        jobs[index] -= jobs[i];
                }
        }
        int max;
        for (int i = 0; i < DataModule1->JobsTable->RecordCount - 1; i++)
        {
                if (jobs[i] > jobs[i+1])
                {
                        max = jobs[i];
                }
        }
        AnsiString Str = "";
        DataModule1->JobsTable->First();
        for (int i = 1; i <= DataModule1->JobsTable->RecordCount; i++)
        {
                if (jobs[i-1] == max)
                {
                        Str += DataModule1->JobsTable->FieldByName("Job")->AsString + ";";
                }
                DataModule1->JobsTable->Next();
        }
        delete [] jobs;
        QRMemo1->Lines->Add("Наибольшее количество безработных в группе специальности: " + Str);
        DataModule1->JobsTable->Active = false;
        int *exp = new int [RegistrationWindow->ComboBox4->Items->Count];
        max = 0;
        Str = "";
        for (int i = 0; i < RegistrationWindow->ComboBox4->Items->Count; i++)
        {
                DataModule1->UserTable->Filtered = true;
                DataModule1->UserTable->Filter = "Experience='" + RegistrationWindow->ComboBox4->Items->Strings[i] + "'";
                exp[i] = DataModule1->UserTable->RecordCount;
                DataModule1->UserTable->Filtered = false;
                if (max < exp[i])
                {
                        max = exp[i];
                }
        }
        for (int i = 0; i < RegistrationWindow->ComboBox4->Items->Count; i++)
        {
                if (max == exp[i])
                {
                        Str += RegistrationWindow->ComboBox4->Items->Strings[i] + ';';
                }
        }
        delete [] exp;
        QRMemo1->Lines->Add("Наибольшее количество безработных в группе стаж работы: " + Str);

        int n;
        DataModule1->ReasonsTable->Active = true;
        int *reasons = new int [DataModule1->ReasonsTable->RecordCount];
        DataModule1->ReasonsTable->First();
        for (int i = 1; i <= DataModule1->ReasonsTable->RecordCount; i++)
        {
                DataModule1->UserTable->Filtered = true;
                if (DataModule1->ReasonsTable->FieldByName("ReasonOfBeingSucked")->AsString == "Другое")
                {
                        DataModule1->UserTable->Filtered = false;
                        n = i - 1;
                        reasons[n] = DataModule1->UserTable->RecordCount;
                }
                else
                {
                        DataModule1->UserTable->Filter = "ReasonOfBeingUnemployed='" + DataModule1->ReasonsTable->FieldByName("ReasonOfBeingSucked")->AsString + "'";
                        reasons[i-1] = DataModule1->UserTable->RecordCount;
                        DataModule1->UserTable->Filtered = false;
                }
                DataModule1->ReasonsTable->Next();
        }

        for (int i = 0; i < DataModule1->ReasonsTable->RecordCount; i++)
        {
                if (i != n)
                {
                        reasons[n] -= reasons[i];
                }
        }
        for (int i = 0; i < DataModule1->ReasonsTable->RecordCount - 1; i++)
        {
                if (reasons[i] > reasons[i+1])
                {
                        max = reasons[i];
                }
        }
        Str = "";
        DataModule1->ReasonsTable->First();
        for (int i = 1; i <= DataModule1->ReasonsTable->RecordCount; i++)
        {
                if (reasons[i-1] == max)
                {
                        Str += DataModule1->ReasonsTable->FieldByName("ReasonOfBeingSucked")->AsString + ";";
                }
                DataModule1->ReasonsTable->Next();
        }
        delete [] reasons;
        QRLabel4->Caption = Str;
        DataModule1->ReasonsTable->Active = false;
        QuickRep1->Preview();
}
//---------------------------------------------------------------------------
void __fastcall TReportWindow::FormClose(TObject *Sender,
      TCloseAction &Action)
{
        DataModule1->UserTable->Active = false;
        ReportWindow->Hide();
        AdminWindow->Show();
}
//---------------------------------------------------------------------------
/*                              Functions                                  */
//---------------------------------------------------------------------------
int DayCount(int month)
{
        switch(month)
        {
                case 1:
                        return 31;
                break;

                case 2:
                        return 28;
                break;

                case 3:
                        return 31;
                break;

                case 4:
                        return 30;
                break;

                case 5:
                        return 31;
                break;

                case 6:
                        return 30;
                break;

                case 7:
                        return 31;
                break;

                case 8:
                        return 31;
                break;

                case 9:
                        return 30;
                break;

                case 10:
                        return 31;
                break;

                case 11:
                        return 30;
                break;

                case 12:
                        return 31;
                break;
        }
}
//---------------------------------------------------------------------------
