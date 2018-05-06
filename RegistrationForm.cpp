//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "RegistrationForm.h"
#include "MainForm.h"
#include "DataModel.h"
#include "UserForm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TRegistrationWindow *RegistrationWindow;
//---------------------------------------------------------------------------
__fastcall TRegistrationWindow::TRegistrationWindow(TComponent* Owner)
        : TForm(Owner)
{
        GoToMainFormButton->Caption = "Вернуться";
        RegistrationButton->Caption = "Зарегистрироваться";
}
//---------------------------------------------------------------------------
/*                        Forms                                            */
//---------------------------------------------------------------------------
void __fastcall TRegistrationWindow::FormShow(TObject *Sender)
{
        DataModule1->UserTable->Active = false;
        DataModule1->CompanyTable->Active = false;
        DataModule1->JobsTable->Active = true;
        DataModule1->JobsTable->Open();
        DataModule1->JobsTable->First();
        Edit5->Hide();
        Edit6->Hide();
        Edit9->Hide();
        UserPanel->Hide();
        CompanyPanel->Hide();
        RequestPanel->Hide();
        switch(MainWindow->RegistrateAsBox->ItemIndex)
        {
                case 0:
                        RegistrationWindow->Height = 466;
                        RegistrationWindow->Width = 404;
                        UserPanel->Show();
                        GoToMainFormButton->Top = 384;
                        RegistrationButton->Top = 384;
                        DataModule1->UserTable->Active = true;
                        DataModule1->ReasonsTable->Active = true;
                        DataModule1->UserTable->Append();
                        DataModule1->JobsTable->First();
                        for (int i = 1; i <= DataModule1->JobsTable->RecordCount; i++)
                        {
                                ComboBox3->Items->Add(DataModule1->JobsTable->FieldByName("Job")->AsString);
                                DataModule1->JobsTable->Next();
                        }
                        DataModule1->ReasonsTable->First();
                        for (int i = 1; i <= DataModule1->ReasonsTable->RecordCount; i++)
                        {
                                ComboBox5->Items->Add(DataModule1->ReasonsTable->FieldByName("ReasonOfBeingSucked")->AsString);
                                DataModule1->ReasonsTable->Next();
                        }
                        DBEdit1->SetFocus();
                        break;
                case 1:
                        RegistrationWindow->Height = 230;
                        RegistrationWindow->Width = 400;
                        CompanyPanel->Left = 0;
                        CompanyPanel->Height = 153;
                        CompanyPanel->Show();
                        GoToMainFormButton->Top = 163;
                        RegistrationButton->Top = 163;
                        DataModule1->CompanyTable->Active = true;
                        DataModule1->CompanyTable->Append();
                        for (int i = 1; i <= DataModule1->JobsTable->RecordCount; i++)
                        {
                                ComboBox6->Items->Add(DataModule1->JobsTable->FieldByName("Job")->AsString);
                                DataModule1->JobsTable->Next();
                        }
                        DBEdit5->SetFocus();
                        break;
        }
}
//---------------------------------------------------------------------------
void __fastcall TRegistrationWindow::FormClose(TObject *Sender,
      TCloseAction &Action)
{
        if (DataModule1->UserTable->Active)
        {
                DataModule1->UserTable->Active = false;
                DataModule1->ReasonsTable->Active = false;
        }

        if (DataModule1->CompanyTable->Active)
        {
                DataModule1->CompanyTable->Active = false;
        }
        DataModule1->JobsTable->Active = false;
        MainWindow->Close();
}
//---------------------------------------------------------------------------
/*                        Buttons                                          */
//---------------------------------------------------------------------------
void __fastcall TRegistrationWindow::GoToMainFormButtonClick(
      TObject *Sender)
{
        DataModule1->UserTable->Active = false;
        DataModule1->CompanyTable->Active = false;
        DataModule1->JobsTable->Active = false;
        DataModule1->ReasonsTable->Active = false;
        MainWindow->Show();
        RegistrationWindow->Hide();
}
//---------------------------------------------------------------------------

void __fastcall TRegistrationWindow::RegistrationButtonClick(
      TObject *Sender)
{
        AnsiString ErrorMessage = "";
        int countEmpty = 0;
        if (DataModule1->UserTable->Active)
        {
                if (DBEdit1->Text == "")
                {
                        ErrorMessage += " Фамилия Имя Отчество";
                        countEmpty++;
                        DBEdit1->Color = clRed;
                }

                if (DBEdit2->Text == "")
                {
                        ErrorMessage += " День рождение";
                        countEmpty++;
                        DBEdit2->Color = clRed;
                }

                if (DBEdit3->Text == "")
                {
                        ErrorMessage += " Логин";
                        countEmpty++;
                        DBEdit3->Color = clRed;
                }

                if (DBEdit4->Text == "")
                {
                        ErrorMessage += " Пароль";
                        countEmpty++;
                        DBEdit4->Color = clRed;
                }

                if (ComboBox1->Text == "")
                {
                        ErrorMessage += " Пол";
                        countEmpty++;
                        ComboBox1->Color = clRed;
                }

                if (ComboBox2->Text == "")
                {
                        ErrorMessage += " Образование";
                        countEmpty++;
                        ComboBox2->Color = clRed;
                }

                if (ComboBox3->Text == "Другое")
                {
                        if (Edit5->Text == "")
                        {
                                ErrorMessage += " Специальность";
                                countEmpty++;
                                Edit5->Color = clRed;
                        }
                }
                else
                {
                        if (ComboBox3->Text == "")
                        {
                                ErrorMessage += " Специальность";
                                countEmpty++;
                                ComboBox3->Color = clRed;
                        }
                }

                if (ComboBox4->Text == "")
                {
                        ErrorMessage += " Стаж работы";
                        countEmpty++;
                        ComboBox4->Color = clRed;
                }

                if (ComboBox5->Text == "Другое")
                {
                        if (Edit6->Text == "")
                        {
                                ErrorMessage += " Причина безработицы";
                                countEmpty++;
                                Edit6->Color = clRed;
                        }
                }
                else
                {
                        if (ComboBox5->Text == "")
                        {
                                ErrorMessage += " Причина безработицы";
                                countEmpty++;
                                ComboBox5->Color = clRed;
                        }
                }

                if (countEmpty != 0)
                {
                        Application->MessageBoxA(("Пожалуста заполните следущие поля:" + ErrorMessage + ".").c_str(), "Не заполнены нужные поля", NULL | MB_ICONERROR);
                        countEmpty = 0;
                        ErrorMessage = "";
                        Abort();
                }
                else
                {
                        DataModule1->UserTable->FieldByName("Sex")->AsString = ComboBox1->Text;
                        DataModule1->UserTable->FieldByName("Education")->AsString = ComboBox2->Text;
                        if (ComboBox3->Text == "Другое")
                        {
                                DataModule1->UserTable->FieldByName("Job")->AsString = Edit5->Text;
                        }
                        else
                        {
                                DataModule1->UserTable->FieldByName("Job")->AsString = ComboBox3->Text;
                        }
                        
                        DataModule1->UserTable->FieldByName("Experience")->AsString = ComboBox4->Text;
                        if (ComboBox5->Text == "Другое")
                        {
                                DataModule1->UserTable->FieldByName("ReasonOfBeingUnemployed")->AsString = Edit6->Text;
                        }
                        else
                        {
                                DataModule1->UserTable->FieldByName("ReasonOfBeingUnemployed")->AsString = ComboBox5->Text;
                        }

                        if (Application->MessageBoxA("Коректнно ли вы ввели все ваши данные?", "Потверждение", MB_YESNO) == IDYES)
                        {
                                unsigned short year, month, day;
                                Date().DecodeDate(&year, &month, &day);
                                DataModule1->UserTable->FieldByName("RegistrationDate")->Value = IntToStr(day) + '.' + IntToStr(month) + '.' + IntToStr(year);
                                DataModule1->UserTable->Post();

                                DataModule1->UserTable->Active = false;
                                DataModule1->JobsTable->Active = false;
                                DataModule1->ReasonsTable->Active = false;

                                UserWindow->Show();
                                RegistrationWindow->Hide();
                        }
                }
        }

        if (DataModule1->CompanyTable->Active)
        {
                if (DBEdit5->Text == "")
                {
                        ErrorMessage += "Название предприятия";
                        countEmpty++;
                        DBEdit5->Color = clRed;
                }

                if (DBEdit6->Text == "")
                {
                        ErrorMessage += "Адрес";
                        countEmpty++;
                        DBEdit6->Color = clRed;
                }

                if (ComboBox6->Text == "Другое")
                {
                        if (Edit9->Text == "")
                        {
                                ErrorMessage += "Требуемая вакансия";
                                countEmpty++;
                                Edit9->Color = clRed;
                        }
                }
                else if (ComboBox6->Text == "")
                {
                        ErrorMessage += "Требуемая вакансия";
                        countEmpty++;
                        ComboBox6->Color = clRed;
                }

                if (ComboBox7->Text == "")
                {
                        ErrorMessage += "Образование";
                        countEmpty++;
                        ComboBox7->Color = clRed;
                }

                if (ComboBox8->Text == "")
                {
                        ErrorMessage += "Пол";
                        countEmpty++;
                        ComboBox8->Color = clRed;
                }

                if (DBEdit7->Text == "")
                {
                        ErrorMessage += "Возраст";
                        countEmpty++;
                        DBEdit7->Color = clRed;
                }

                if (ComboBox9->Text == "")
                {
                        ErrorMessage += "Стаж работы";
                        countEmpty++;
                        ComboBox9->Color = clRed;
                }

                if (DBEdit8->Text == "")
                {
                        ErrorMessage += "Рабочий день";
                        countEmpty++;
                        DBEdit8->Color = clRed;
                }

                if (DBEdit9->Text == "")
                {
                        ErrorMessage += "Выходные дни";
                        countEmpty++;
                        DBEdit9->Color = clRed;
                }

                if (DBEdit10->Text == "")
                {
                        ErrorMessage += "Отпуск";
                        countEmpty++;
                        DBEdit10->Color = clRed;
                }

                if (DBEdit11->Text == "")
                {
                        ErrorMessage += "Заработная плата";
                        countEmpty++;
                        DBEdit11->Color = clRed;
                }

                if (DBEdit12->Text == "")
                {
                        ErrorMessage += " Телефон";
                        countEmpty++;
                        DBEdit12->Color = clRed;
                }

                if (DBEdit13->Text == "")
                {
                        ErrorMessage += " Электронная почта";
                        countEmpty++;
                        DBEdit13->Color = clRed;
                }

                if (countEmpty != 0)
                {
                        Application->MessageBoxA(("Пожалуста заполните следущие поля:" + ErrorMessage + ".").c_str(), "Не заполнены нужные поля", NULL | MB_ICONERROR);
                        countEmpty = 0;
                        ErrorMessage = "";
                        Abort();
                }
                else
                {
                        if (ComboBox6->Text != "Другое")
                        {
                                DataModule1->CompanyTable->FieldByName("Job")->AsString = ComboBox6->Text;
                        }
                        else
                        {
                                DataModule1->CompanyTable->FieldByName("Job")->AsString = Edit9->Text;
                        }

                        DataModule1->CompanyTable->FieldByName("Education")->AsString = ComboBox7->Text;
                        DataModule1->CompanyTable->FieldByName("Experience")->AsString = ComboBox9->Text;
                        DataModule1->CompanyTable->FieldByName("Sex")->AsString = ComboBox8->Text;

                        if (Application->MessageBoxA("Коректнно ли вы ввели все ваши данные?", "Потверждение", MB_YESNO) == IDYES)
                        {
                                DataModule1->CompanyTable->Post();

                                DataModule1->CompanyTable->Active = false;
                                DataModule1->JobsTable->Active = false;

                                RegistrationWindow->Hide();

                                Application->MessageBoxA("Успешное выполнение", "Данные о вашей компании были успешно записаны.", MB_OK);

                                MainWindow->Show();
                        }
                }
        }
}
//---------------------------------------------------------------------------
/*                ComboBoxes                                               */
//---------------------------------------------------------------------------
void __fastcall TRegistrationWindow::ComboBox1Click(TObject *Sender)
{
        ComboBox1->Color = clWindow;
        ComboBox1->Text = ComboBox1->Items->Strings[ComboBox1->ItemIndex];
        ComboBox2->SetFocus();
}
//---------------------------------------------------------------------------

void __fastcall TRegistrationWindow::ComboBox2Click(TObject *Sender)
{
        ComboBox2->Color = clWindow;
        ComboBox2->Text = ComboBox2->Items->Strings[ComboBox2->ItemIndex];
        DBMemo1->SetFocus();
}
//---------------------------------------------------------------------------

void __fastcall TRegistrationWindow::ComboBox4Click(TObject *Sender)
{
        ComboBox4->Color = clWindow;
        ComboBox4->Text = ComboBox4->Items->Strings[ComboBox4->ItemIndex];
        DBMemo2->SetFocus();
}
//---------------------------------------------------------------------------

void __fastcall TRegistrationWindow::ComboBox5Click(TObject *Sender)
{
        ComboBox5->Color = clWindow;
        ComboBox5->Text = ComboBox5->Items->Strings[ComboBox5->ItemIndex];
        if (ComboBox5->Text == "Другое")
        {
                Edit6->Show();
                Edit6->SetFocus();
        }
        else
        {
                Edit6->Hide();
                DBEdit3->SetFocus();
        }
}
//---------------------------------------------------------------------------

void __fastcall TRegistrationWindow::ComboBox6Click(TObject *Sender)
{
        RegistrationWindow->Height = 435;
        ComboBox6->Color = clWindow;
        ComboBox6->Text = ComboBox6->Items->Strings[ComboBox6->ItemIndex];
        CompanyPanel->Height = 353;
        RequestPanel->Show();
        GoToMainFormButton->Top = 360;
        RegistrationButton->Top = 360;
        if (ComboBox6->Text == "Другое")
        {
                Edit9->Show();
        }
        else
        {
                Edit9->Hide();
        }
}
//---------------------------------------------------------------------------

void __fastcall TRegistrationWindow::ComboBox7Click(TObject *Sender)
{
        ComboBox7->Color = clWindow;
        ComboBox7->Text = ComboBox7->Items->Strings[ComboBox7->ItemIndex];
}
//---------------------------------------------------------------------------

void __fastcall TRegistrationWindow::ComboBox8Click(TObject *Sender)
{
        ComboBox8->Color = clWindow;
        ComboBox8->Text = ComboBox8->Items->Strings[ComboBox8->ItemIndex];
}
//---------------------------------------------------------------------------

void __fastcall TRegistrationWindow::ComboBox9Click(TObject *Sender)
{
        ComboBox9->Color = clWindow;
        ComboBox9->Text = ComboBox9->Items->Strings[ComboBox9->ItemIndex];
}
//---------------------------------------------------------------------------

void __fastcall TRegistrationWindow::ComboBox3Click(TObject *Sender)
{
        ComboBox3->Text = ComboBox3->Items->Strings[ComboBox3->ItemIndex];
        if (ComboBox3->Text == "Другое")
        {
                Edit5->Show();
                Edit5->SetFocus();
        }
        else
        {
                Edit5->Hide();
                ComboBox4->SetFocus();
        }
}
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
/*                         Edits                                           */
//---------------------------------------------------------------------------

void __fastcall TRegistrationWindow::Edit5KeyPress(TObject *Sender,
      char &Key)
{
        if (Key == VK_RETURN)
        {
                ComboBox4->SetFocus();
        }
}
//---------------------------------------------------------------------------

void __fastcall TRegistrationWindow::Edit6KeyPress(TObject *Sender,
      char &Key)
{
        if (Key == VK_RETURN)
        {
                DBEdit3->SetFocus();
        }
}
//---------------------------------------------------------------------------

void __fastcall TRegistrationWindow::Edit9KeyPress(TObject *Sender,
      char &Key)
{
        if (Key == VK_RETURN)
        {
                ComboBox7->SetFocus();
        }
}
//---------------------------------------------------------------------------

void __fastcall TRegistrationWindow::Edit5Click(TObject *Sender)
{
        Edit5->Color = clWindow;
}
//---------------------------------------------------------------------------

void __fastcall TRegistrationWindow::Edit6Click(TObject *Sender)
{
        Edit6->Color = clWindow;
}
//---------------------------------------------------------------------------

void __fastcall TRegistrationWindow::Edit9Click(TObject *Sender)
{
        Edit9->Color = clWindow;
}
//---------------------------------------------------------------------------
/*                              DBEdits                                    */
//---------------------------------------------------------------------------
void __fastcall TRegistrationWindow::DBEdit1KeyPress(TObject *Sender,
      char &Key)
{
        if (Key == VK_RETURN)
        {
                DBEdit2->SetFocus();
        }
}
//---------------------------------------------------------------------------

void __fastcall TRegistrationWindow::DBEdit2KeyPress(TObject *Sender,
      char &Key)
{
        if (Key == VK_RETURN)
        {
                ComboBox1->SetFocus();
        }
}
//---------------------------------------------------------------------------

void __fastcall TRegistrationWindow::DBEdit3KeyPress(TObject *Sender,
      char &Key)
{
        if (Key == VK_RETURN)
        {
                DBEdit4->SetFocus();
        }
}
//---------------------------------------------------------------------------

void __fastcall TRegistrationWindow::DBEdit4KeyPress(TObject *Sender,
      char &Key)
{
        if (Key == VK_RETURN)
        {
                RegistrationButton->SetFocus();
        }
}
//---------------------------------------------------------------------------

void __fastcall TRegistrationWindow::DBEdit5KeyPress(TObject *Sender,
      char &Key)
{
        if (Key == VK_RETURN)
        {
                DBEdit6->SetFocus();
        }
}
//---------------------------------------------------------------------------

void __fastcall TRegistrationWindow::DBEdit6KeyPress(TObject *Sender,
      char &Key)
{
        if (Key == VK_RETURN)
        {
                DBEdit12->SetFocus();
        }
}
//---------------------------------------------------------------------------

void __fastcall TRegistrationWindow::DBEdit7KeyPress(TObject *Sender,
      char &Key)
{
        if (Key == VK_RETURN)
        {
                ComboBox9->SetFocus();
        }
}
//---------------------------------------------------------------------------

void __fastcall TRegistrationWindow::DBEdit8KeyPress(TObject *Sender,
      char &Key)
{
        if (Key == VK_RETURN)
        {
                DBEdit9->SetFocus();
        }
}
//---------------------------------------------------------------------------

void __fastcall TRegistrationWindow::DBEdit9KeyPress(TObject *Sender,
      char &Key)
{
        if (Key == VK_RETURN)
        {
                DBEdit10->SetFocus();
        }
}
//---------------------------------------------------------------------------

void __fastcall TRegistrationWindow::DBEdit10KeyPress(TObject *Sender,
      char &Key)
{
        if (Key == VK_RETURN)
        {
                DBEdit11->SetFocus();
        }
}
//---------------------------------------------------------------------------

void __fastcall TRegistrationWindow::DBEdit11KeyPress(TObject *Sender,
      char &Key)
{
        if (Key == VK_RETURN)
        {
                RegistrationButton->SetFocus();
        }
}
//---------------------------------------------------------------------------

void __fastcall TRegistrationWindow::DBEdit1Click(TObject *Sender)
{
        DBEdit1->Color = clWindow;
}
//---------------------------------------------------------------------------

void __fastcall TRegistrationWindow::DBEdit2Click(TObject *Sender)
{
        DBEdit2->Color = clWindow;
}
//---------------------------------------------------------------------------

void __fastcall TRegistrationWindow::DBEdit3Click(TObject *Sender)
{
        DBEdit3->Color = clWindow;
}
//---------------------------------------------------------------------------

void __fastcall TRegistrationWindow::DBEdit4Click(TObject *Sender)
{
        DBEdit4->Color = clWindow;
}
//---------------------------------------------------------------------------

void __fastcall TRegistrationWindow::DBEdit5Click(TObject *Sender)
{
        DBEdit5->Color = clWindow;
}
//---------------------------------------------------------------------------

void __fastcall TRegistrationWindow::DBEdit6Click(TObject *Sender)
{
        DBEdit6->Color = clWindow;
}
//---------------------------------------------------------------------------

void __fastcall TRegistrationWindow::DBEdit7Click(TObject *Sender)
{
        DBEdit7->Color = clWindow;
}
//---------------------------------------------------------------------------

void __fastcall TRegistrationWindow::DBEdit8Click(TObject *Sender)
{
        DBEdit8->Color = clWindow;
}
//---------------------------------------------------------------------------

void __fastcall TRegistrationWindow::DBEdit9Click(TObject *Sender)
{
        DBEdit9->Color = clWindow;
}
//---------------------------------------------------------------------------

void __fastcall TRegistrationWindow::DBEdit10Click(TObject *Sender)
{
        DBEdit10->Color = clWindow;
}
//---------------------------------------------------------------------------

void __fastcall TRegistrationWindow::DBEdit11Click(TObject *Sender)
{
        DBEdit11->Color = clWindow;
}
//---------------------------------------------------------------------------

void __fastcall TRegistrationWindow::DBEdit12Click(TObject *Sender)
{
        DBEdit12->Color = clWindow;
}
//---------------------------------------------------------------------------

void __fastcall TRegistrationWindow::DBEdit13Click(TObject *Sender)
{
        DBEdit13->Color = clWindow;
}
//---------------------------------------------------------------------------

void __fastcall TRegistrationWindow::DBEdit12KeyPress(TObject *Sender,
      char &Key)
{
        if (Key == VK_RETURN)
        {
                DBEdit13->SetFocus();
        }
}
//---------------------------------------------------------------------------

void __fastcall TRegistrationWindow::DBEdit13KeyPress(TObject *Sender,
      char &Key)
{
        if (Key == VK_RETURN)
        {
                ComboBox6->SetFocus();
        }
}
//---------------------------------------------------------------------------

