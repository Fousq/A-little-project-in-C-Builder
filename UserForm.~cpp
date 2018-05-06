//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UserForm.h"
#include "MainForm.h"
#include "DataModel.h"
#include "RegistrationForm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TUserWindow *UserWindow;
//---------------------------------------------------------------------------
__fastcall TUserWindow::TUserWindow(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
/*                      Forms                                             */
//--------------------------------------------------------------------------- __fastcall TUserWindow::FormClose(TObject *Sender,
void __fastcall TUserWindow::FormClose(TObject *Sender,
      TCloseAction &Action)
{
        DataModule1->UserTable->Active = false;
        DataModule1->JobsTable->Active = false;
        DataModule1->ReasonsTable->Active = false;
        DataModule1->CompanyTable->Active = false;
        MainWindow->Close();
}
//---------------------------------------------------------------------------
void __fastcall TUserWindow::FormShow(TObject *Sender)
{
        UserWindow->Height = 320;
        UserWindow->Width = 430;
        SearchPanel->Hide();
        UserPanel->Height = 225;
        Label6->Top = 128;
        DBText6->Top = 128;
        Label7->Top = 152;
        DBText7->Top = 152;
        Label8->Top = 176;
        DBText8->Top = 176;
        Label9->Top = 200;
        DBText9->Top = 200;
        GoToMainButton->Top = 232;
        EditButton->Top = 232;
        SearchButton->Top = 232;
        DBEdit1->Hide();
        DBEdit2->Hide();
        Edit1->Hide();
        Edit2->Hide();
        DBComboBox1->Hide();
        DBComboBox2->Hide();
        DBComboBox3->Hide();
        DBComboBox4->Hide();
        DBComboBox5->Hide();
        DBMemo1->Hide();
        DBMemo2->Hide();
        EditCancelButton->Hide();
        ConfirmButton->Hide();
        DataModule1->UserTable->Active = true;
        DataModule1->UserTable->First();
        for (int i = 1; i <= DataModule1->UserTable->RecordCount; i++)
        {
                if ((MainWindow->LoginEdit->Text == DataModule1->UserTable->FieldByName("Login")->AsString) && (MainWindow->PasswordEdit->Text == DataModule1->UserTable->FieldByName("Password")->AsString))
                {
                        break;
                }
                DataModule1->UserTable->Next();
        }
}
//---------------------------------------------------------------------------
/*                      Buttons                                            */
//---------------------------------------------------------------------------
void __fastcall TUserWindow::GoToMainButtonClick(TObject *Sender)
{
        DataModule1->UserTable->Active = false;
        DataModule1->JobsTable->Active = false;
        DataModule1->ReasonsTable->Active = false;
        UserWindow->Hide();
        MainWindow->Show();
}
//---------------------------------------------------------------------------

void __fastcall TUserWindow::EditButtonClick(TObject *Sender)
{
        UserWindow->Height = 465;
        UserWindow->Width = 430;
        SearchButton->Hide();
        Edit1->Clear();
        Edit2->Clear();
        DataModule1->ReasonsTable->Active = true;
        DataModule1->JobsTable->Active = true;
        DBText1->Hide();
        DBText2->Hide();
        DBText3->Hide();
        DBText4->Hide();
        DBText5->Hide();
        DBText6->Hide();
        DBText7->Hide();
        DBText8->Hide();
        DBText9->Hide();
        EditButton->Hide();
        EditCancelButton->Show();
        ConfirmButton->Show();
        UserPanel->Height = 377;
        UserPanel->Width = 409;
        GoToMainButton->Top = 384;
        SearchButton->Top = 384;
        Label6->Top = 200;
        Label7->Top = 224;
        Label8->Top = 248;
        Label9->Top = 344;
        DBEdit1->Show();
        DBEdit2->Show();
        DBComboBox1->Show();
        DBComboBox2->Show();
        DataModule1->JobsTable->First();
        for (int i = 1; i <= DataModule1->JobsTable->RecordCount; i++)
        {
                DBComboBox3->Items->Add(DataModule1->JobsTable->FieldByName("Job")->AsString);
                DataModule1->JobsTable->Next();
        }
        DBComboBox3->Show();
        DBComboBox4->Show();
        DataModule1->ReasonsTable->First();
        for (int i = 1; i <= DataModule1->ReasonsTable->RecordCount; i++)
        {
                DBComboBox5->Items->Add(DataModule1->ReasonsTable->FieldByName("ReasonOfBeingSucked")->AsString);
                DataModule1->ReasonsTable->Next();
        }
        DBComboBox5->Show();
        DBMemo1->Show();
        DBMemo2->Show();
        ConfirmButton->Show();
}
//---------------------------------------------------------------------------

void __fastcall TUserWindow::ConfirmButtonClick(TObject *Sender)
{
        DataModule1->UserTable->Edit();
        AnsiString ErrorMessage = "";
        int countEmpty = 0;

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

        if (DBComboBox1->Text == "")
        {
                ErrorMessage += " Пол";
                countEmpty++;
                DBComboBox1->Color = clRed;
        }

        if (DBComboBox2->Text == "")
        {
                ErrorMessage += " Образование";
                countEmpty++;
                DBComboBox2->Color = clRed;
        }

        if (DBComboBox3->Text == "Другое")
        {
                if (Edit1->Text == "")
                {
                        ErrorMessage += " Специальность";
                        countEmpty++;
                        Edit1->Color = clRed;
                }
        }
        else
        {
                if (DBComboBox3->Text == "")
                {
                        ErrorMessage += " Специальность";
                        countEmpty++;
                        DBComboBox3->Color = clRed;
                }
        }

        if (DBComboBox4->Text == "")
        {
                ErrorMessage += " Стаж работы";
                countEmpty++;
                DBComboBox4->Color = clRed;
        }

        if (DBComboBox5->Text == "Другое")
        {
                if (Edit2->Text == "")
                {
                        ErrorMessage += " Причина безработицы";
                        countEmpty++;
                        Edit2->Color = clRed;
                }
        }
        else
        {
                if (DBComboBox5->Text == "")
                {
                        ErrorMessage += " Причина безработицы";
                        countEmpty++;
                        DBComboBox5->Color = clRed;
                }
        }

        if (countEmpty != 0)
        {
                Application->MessageBoxA(("Запольните следующие поля " + ErrorMessage + ".").c_str(), "Не запольнены обязательные поля", MB_OK | MB_ICONERROR);
                countEmpty = 0;
                Abort();
        }
        else
        {
                if (Application->MessageBoxA("Вы верно ли заполнены все поля?", "Потверждение", MB_YESNO) == IDYES)
                {
                        if (DBComboBox3->Text == "Другое")
                        {
                                DataModule1->UserTable->FieldByName("Job")->AsString = Edit1->Text;
                        }

                        if (DBComboBox5->Text == "Другое")
                        {
                                DataModule1->UserTable->FieldByName("ReasonOfBeingUnemployed")->AsString = Edit2->Text;
                        }

                        DataModule1->UserTable->Post();

                        DataModule1->JobsTable->Active = false;
                        DataModule1->ReasonsTable->Active = false;

                        UserPanel->Height = 225;
                        UserWindow->Height = 320;
                        UserWindow->Width = 430;
                        Label6->Top = 128;
                        DBText6->Top = 128;
                        Label7->Top = 152;
                        DBText7->Top = 152;
                        Label8->Top = 176;
                        DBText8->Top = 176;
                        Label9->Top = 200;
                        DBText9->Top = 200;
                        GoToMainButton->Top = 232;
                        EditButton->Top = 232;
                        SearchButton->Top = 232;
                        DBEdit1->Hide();
                        DBEdit2->Hide();
                        Edit1->Hide();
                        Edit2->Hide();
                        DBComboBox1->Hide();
                        DBComboBox2->Hide();
                        DBComboBox3->Hide();
                        DBComboBox4->Hide();
                        DBComboBox5->Hide();
                        DBMemo1->Hide();
                        DBMemo2->Hide();
                        ConfirmButton->Hide();
                        EditCancelButton->Hide();
                        DBText1->Show();
                        DBText2->Show();
                        DBText3->Show();
                        DBText4->Show();
                        DBText5->Show();
                        DBText6->Show();
                        DBText7->Show();
                        DBText8->Show();
                        DBText9->Show();
                        EditButton->Show();
                        SearchButton->Show();
                }
        }
}
//---------------------------------------------------------------------------

void __fastcall TUserWindow::EditCancelButtonClick(TObject *Sender)
{
        DataModule1->UserTable->Cancel();
        DataModule1->JobsTable->Active = false;
        DataModule1->ReasonsTable->Active = false;

        UserWindow->Height = 320;
        UserWindow->Width = 430;
        UserPanel->Height = 225;
        Label6->Top = 128;
        DBText6->Top = 128;
        Label7->Top = 152;
        DBText7->Top = 152;
        Label8->Top = 176;
        DBText8->Top = 176;
        Label9->Top = 200;
        DBText9->Top = 200;
        GoToMainButton->Top = 232;
        EditButton->Top = 232;
        SearchButton->Top = 232;
        DBEdit1->Hide();
        DBEdit2->Hide();
        Edit1->Hide();
        Edit2->Hide();
        DBComboBox1->Hide();
        DBComboBox2->Hide();
        DBComboBox3->Hide();
        DBComboBox4->Hide();
        DBComboBox5->Hide();
        DBMemo1->Hide();
        DBMemo2->Hide();
        ConfirmButton->Hide();
        EditCancelButton->Hide();
        DBText1->Show();
        DBText2->Show();
        DBText3->Show();
        DBText4->Show();
        DBText5->Show();
        DBText6->Show();
        DBText7->Show();
        DBText8->Show();
        DBText9->Show();
        SearchButton->Show();
        EditButton->Show();
}
//---------------------------------------------------------------------------

void __fastcall TUserWindow::SearchButtonClick(TObject *Sender)
{
        SearchPanel->Left = 0;
        SearchPanel->Top = 0;
        SearchPanel->Height = 209;
        DBComboBox6->Hide();
        DBComboBox7->Hide();
        DBComboBox8->Hide();
        DBComboBox9->Hide();
        Edit3->Hide();
        Edit4->Hide();
        Edit5->Hide();
        CheckBox7->Checked = true;

        unsigned short year, month, day;
        Word Year, Month, Day;

        Date().DecodeDate(&year, &month, &day);
        DecodeDate(DataModule1->UserTable->FieldByName("BirthDate")->Value, Year, Month, Day);
        int age = year - Year;

        Edit4->Clear();
        Edit3->Clear();
        Edit5->Text = IntToStr(age);
        ConfirmButton->Hide();
        EditCancelButton->Hide();
        SearchButton->Hide();
        EditButton->Hide();
        GoToMainButton->Hide();
        UserWindow->Height = 250;
        UserWindow->Width = 480;
        SearchPanel->Show();
        UserPanel->Hide();
        DataModule1->CompanyTable->Active = true;
        DataModule1->JobsTable->Active = true;
        DataModule1->JobsTable->First();
        for (int i = 1; i <= DataModule1->JobsTable->RecordCount; i++)
        {
                DBComboBox8->Items->Add(DataModule1->JobsTable->FieldByName("Job")->AsString);
                DataModule1->JobsTable->Next();
        }
        DataModule1->JobsTable->Active = false;
}
//---------------------------------------------------------------------------

void __fastcall TUserWindow::StartSearchButtonClick(TObject *Sender)
{
        DataModule1->CompanyTable->Open();

        AnsiString ErrorStr = "";
        bool Empty = false;

        if (CheckBox7->Checked)
        {
                DataModule1->CompanyTable->Filtered = false;
        }
        else
        {
                DataModule1->CompanyTable->Filtered = true;
        }

        if (CheckBox1->Checked)
        {
                DataModule1->CompanyTable->Filter = "Age='" + Edit5->Text + "'";
        }

        if (CheckBox2->Checked)
        {
                DataModule1->CompanyTable->Filter = "Sex='" + DBComboBox6->Text + "'";
        }

        if (CheckBox3->Checked)
        {
                DataModule1->CompanyTable->Filter = "Education='" + DBComboBox7->Text + "'";
        }

        if (CheckBox4->Checked)
        {
                if (DBComboBox8->Text != "Другое")
                {
                        DataModule1->CompanyTable->Filter = "Job='" + DBComboBox8->Text + "'";
                }
                else
                {
                        if (Edit4->Text == "")
                        {
                                Edit4->Color = clRed;
                                ErrorStr += " Вакансия";
                                Empty = true;
                        }
                        else
                        {
                                DataModule1->CompanyTable->Filter = "Job='" + Edit4->Text + "'";
                        }
                }
        }

        if (CheckBox5->Checked)
        {
                DataModule1->CompanyTable->Filter = "Experience='" + DBComboBox9->Text + "'";
        }

        if (CheckBox6->Checked)
        {
                if (Edit3->Text == "")
                {
                        Edit3->Color = clRed;
                        ErrorStr += " Заработная плата";
                        Empty = true;
                }
                else
                {
                        DataModule1->CompanyTable->Filter = "Salary>='" + Edit3->Text + "'";
                }
        }

        if (Empty)
        {
                Application->MessageBoxA(("Не заполнены следующие поля: " + ErrorStr + '.').c_str(), "Не заполненые поля", MB_OK | MB_ICONERROR);
                Empty = false;
                Abort();
        }

        UserWindow->Height = 460;
        UserWindow->Width = 488;
        SearchPanel->Height = 417;
}
//---------------------------------------------------------------------------

void __fastcall TUserWindow::BackToUserButtonClick(TObject *Sender)
{
        SearchPanel->Hide();
        CheckBox1->Checked = false;
        CheckBox2->Checked = false;
        CheckBox3->Checked = false;
        CheckBox4->Checked = false;
        CheckBox5->Checked = false;
        CheckBox6->Checked = false;
        CheckBox7->Checked = false;
        UserWindow->Height = 320;
        UserWindow->Width = 430;
        EditButton->Show();
        GoToMainButton->Show();
        SearchButton->Show();
        UserPanel->Show();
        DataModule1->CompanyTable->Active = false;
}
//---------------------------------------------------------------------------
/*                      DBComboBoxes                                       */
//---------------------------------------------------------------------------

void __fastcall TUserWindow::DBComboBox1Click(TObject *Sender)
{
        DBComboBox1->Color = clWindow;
}
//---------------------------------------------------------------------------

void __fastcall TUserWindow::DBComboBox2Click(TObject *Sender)
{
        DBComboBox2->Color = clWindow;
}
//---------------------------------------------------------------------------

void __fastcall TUserWindow::DBComboBox3Click(TObject *Sender)
{
        DBComboBox3->Color = clWindow;
        if (DBComboBox3->Text == "Другое")
        {
                Edit1->Show();
        }
        else
        {
                Edit1->Hide();
        }
}
//---------------------------------------------------------------------------

void __fastcall TUserWindow::DBComboBox4Click(TObject *Sender)
{
        DBComboBox4->Color = clWindow;
}
//---------------------------------------------------------------------------

void __fastcall TUserWindow::DBComboBox5Click(TObject *Sender)
{
        DBComboBox5->Color = clWindow;
        if (DBComboBox5->Text == "Другое")
        {
                Edit2->Show();
        }
        else
        {
                Edit2->Hide();
        }
}
//---------------------------------------------------------------------------

void __fastcall TUserWindow::DBComboBox8Click(TObject *Sender)
{
        if (DBComboBox8->Text == "Другое")
        {
                Edit4->Show();
        }
        else
        {
                Edit4->Hide();
                DBComboBox8->Text = DBComboBox8->Items->Strings[DBComboBox8->ItemIndex];
        }
}
//---------------------------------------------------------------------------
/*                              DBEdits                                    */
//---------------------------------------------------------------------------
void __fastcall TUserWindow::DBEdit1Click(TObject *Sender)
{
        DBEdit1->Color = clWindow;
}
//---------------------------------------------------------------------------

void __fastcall TUserWindow::DBEdit2Click(TObject *Sender)
{
        DBEdit2->Color = clWindow;
}
//---------------------------------------------------------------------------
/*                              Edits                                      */
//---------------------------------------------------------------------------
void __fastcall TUserWindow::Edit1Click(TObject *Sender)
{
        Edit1->Color = clWindow;
}
//---------------------------------------------------------------------------

void __fastcall TUserWindow::Edit2Click(TObject *Sender)
{
        Edit2->Color = clWindow;
}
//---------------------------------------------------------------------------

void __fastcall TUserWindow::Edit3Click(TObject *Sender)
{
        Edit3->Color = clWindow;
}
//---------------------------------------------------------------------------

void __fastcall TUserWindow::Edit4Click(TObject *Sender)
{
        Edit4->Color = clWindow;
}
//---------------------------------------------------------------------------
/*                              CheckBoxes                                 */
//---------------------------------------------------------------------------
void __fastcall TUserWindow::CheckBox7Click(TObject *Sender)
{
        if (!CheckBox7->Checked)
        {
                DataModule1->CompanyTable->Filtered = true;
        }
        else
        {
                DataModule1->CompanyTable->Filtered = false;
                CheckBox1->Checked = false;
                Edit5->Hide();
                CheckBox2->Checked = false;
                DBComboBox6->Hide();
                CheckBox3->Checked = false;
                DBComboBox7->Hide();
                CheckBox4->Checked = false;
                DBComboBox8->Hide();
                Edit4->Hide();
                CheckBox5->Checked = false;
                DBComboBox9->Hide();
                CheckBox6->Checked = false;
                Edit3->Hide();
        }
}
//---------------------------------------------------------------------------

void __fastcall TUserWindow::CheckBox1Click(TObject *Sender)
{
        if (CheckBox1->Checked)
        {
                CheckBox7->Checked = false;
                Edit5->Show();
        }
        else
        {
                Edit5->Hide();
        }
}
//---------------------------------------------------------------------------

void __fastcall TUserWindow::CheckBox2Click(TObject *Sender)
{
        if (CheckBox2->Checked)
        {
                CheckBox7->Checked = false;
                DBComboBox6->Show();
        }
        else
        {
                DBComboBox6->Hide();
        }
}
//---------------------------------------------------------------------------

void __fastcall TUserWindow::CheckBox3Click(TObject *Sender)
{
        if (CheckBox3->Checked)
        {
                CheckBox7->Checked = false;
                DBComboBox7->Show();
        }
        else
        {
                DBComboBox7->Hide();
        }
}
//---------------------------------------------------------------------------

void __fastcall TUserWindow::CheckBox4Click(TObject *Sender)
{
        if (CheckBox4->Checked)
        {
                CheckBox7->Checked = false;
                DBComboBox8->Show();
        }
        else
        {
                DBComboBox8->Hide();
        }
}
//---------------------------------------------------------------------------

void __fastcall TUserWindow::CheckBox5Click(TObject *Sender)
{
        if (CheckBox5->Checked)
        {
                CheckBox7->Checked = false;
                DBComboBox9->Show();
        }
        else
        {
                DBComboBox9->Hide();
        }
}
//---------------------------------------------------------------------------

void __fastcall TUserWindow::CheckBox6Click(TObject *Sender)
{
        if (CheckBox6->Checked)
        {
                CheckBox7->Checked = false;
                Edit3->Show();
        }
        else
        {
                Edit3->Hide();
        }
}
//---------------------------------------------------------------------------
/*                              DBGrid                                     */
//---------------------------------------------------------------------------
void __fastcall TUserWindow::DBGrid1CellClick(TColumn *Column)
{
        SearchPanel->Height = 729;
        UserWindow->Height = 769;
        UserWindow->Width = 488;
}
//---------------------------------------------------------------------------

void __fastcall TUserWindow::DBGrid1DblClick(TObject *Sender)
{
        SearchPanel->Height = 729;
        UserWindow->Height = 769;
        UserWindow->Width = 488;
}
//---------------------------------------------------------------------------
