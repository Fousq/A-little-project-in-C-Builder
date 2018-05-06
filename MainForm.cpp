//---------------------------------------------------------------------------

#include <vcl.h>
#include <stdio.h>
#pragma hdrstop

#include "MainForm.h"
#include "AdminForm.h"
#include "RegistrationForm.h"
#include "UserForm.h"
#include "DataModel.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TMainWindow *MainWindow;
unsigned int encode(int code);
TBookmark user;
//---------------------------------------------------------------------------
__fastcall TMainWindow::TMainWindow(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
/*                         Buttons                                         */
//---------------------------------------------------------------------------
void __fastcall TMainWindow::EnterButtonClick(TObject *Sender)
{
        GoToUserForm->Caption = "Войти";
        GoToMainButton1->Caption = "Назад";
        EnterButton->Hide();
        RegistrationButton->Hide();
        AdminButton->Hide();
        MainWindow->Height = 291;
        MainWindow->Width = 320;
        EnterPanel->Top = 0;
        EnterPanel->Left = 0;
        EnterPanel->Show();
        LoginEdit->Clear();
        PasswordEdit->Clear();
        LoginEdit->SetFocus();
}
//---------------------------------------------------------------------------

void __fastcall TMainWindow::RegistrationButtonClick(TObject *Sender)
{
        RegistrateAsBox->Text = RegistrateAsBox->Items->Strings[RegistrateAsBox->ItemIndex];
        GoToMainButton2->Caption = "Назад";
        GoToRegistrationForm->Caption = "Зарегистрироваться";
        EnterButton->Hide();
        RegistrationButton->Hide();
        AdminButton->Hide();
        MainWindow->Height = 291;
        MainWindow->Width = 320;
        RegistrationPanel->Top = 0;
        RegistrationPanel->Left = 0;
        RegistrationPanel->Show();
        RegistrateAsBox->SetFocus();
}
//---------------------------------------------------------------------------

void __fastcall TMainWindow::AdminButtonClick(TObject *Sender)
{
        GoToMainButton3->Caption = "Назад";
        GoToAdminForm->Caption = "Войти";
        EnterButton->Hide();
        RegistrationButton->Hide();
        AdminButton->Hide();
        MainWindow->Height = 300;
        MainWindow->Width = 320;
        AdminPanel->Top = 0;
        AdminPanel->Left = 0;
        AdminPanel->Show();
        AdminPasswordEdit->Clear();
        AdminPasswordEdit->SetFocus();
}
//---------------------------------------------------------------------------

void __fastcall TMainWindow::GoToMainButton1Click(TObject *Sender)
{
        DataModule1->UserTable->Active = false;
        EnterPanel->Hide();
        EnterButton->Show();
        RegistrationButton->Show();
        AdminButton->Show();
        MainWindow->Height = 239;
        MainWindow->Width = 220;
}
//---------------------------------------------------------------------------

void __fastcall TMainWindow::GoToMainButton2Click(TObject *Sender)
{
        RegistrationPanel->Hide();
        EnterButton->Show();
        RegistrationButton->Show();
        AdminButton->Show();
        MainWindow->Height = 239;
        MainWindow->Width = 220;
}
//---------------------------------------------------------------------------

void __fastcall TMainWindow::GoToMainButton3Click(TObject *Sender)
{
        AdminPanel->Hide();
        EnterButton->Show();
        RegistrationButton->Show();
        AdminButton->Show();
        MainWindow->Height = 239;
        MainWindow->Width = 220;
}
//---------------------------------------------------------------------------

void __fastcall TMainWindow::GoToAdminFormClick(TObject *Sender)
{
        FILE *File;
        File = fopen("AdminPassword.dat", "r");
        fseek(File, 0, SEEK_END);
        int size = ftell(File);
        rewind(File);

        char *buffer = new char [size];
        fread(buffer, 1, size, File);

        fclose(File);

        int password = StrToInt(String(buffer));

        delete [] buffer;

        if (encode(password) == StrToInt(AdminPasswordEdit->Text))
        {
                AdminWindow->Height = 403;
                AdminWindow->Show();
                MainWindow->Hide();
        }
        else
        {
                Application->MessageBoxA("Вы ввели неправильный пароль.", "Warning", MB_ICONWARNING | MB_OK);
        }
}
//---------------------------------------------------------------------------

void __fastcall TMainWindow::GoToRegistrationFormClick(TObject *Sender)
{
        RegistrationWindow->Show();
        MainWindow->Hide();
}
//---------------------------------------------------------------------------

void __fastcall TMainWindow::GoToUserFormClick(TObject *Sender)
{
        DataModule1->UserTable->Active = true;
        Variant V;
        AnsiString Login, Password;
        V = DataModule1->UserTable->Lookup("Login;Password", VarArrayOf(OPENARRAY(Variant, (LoginEdit->Text, PasswordEdit->Text))), "Login;Password");
        if (!(VarType(V) == varNull))
        {
                DataModule1->UserTable->Active = false;
                UserWindow->Show();
                MainWindow->Hide();
        }
        else
        {
                Application->MessageBoxA("Вы не зарегистрированны", "Ошибка авторизации", MB_OK | MB_ICONERROR);
        }
}
//---------------------------------------------------------------------------
/*                           Forms                                         */
//---------------------------------------------------------------------------
void __fastcall TMainWindow::FormShow(TObject *Sender)
{
        MainWindow->Height = 239;
        MainWindow->Width = 220;
        AdminPanel->Hide();
        EnterPanel->Hide();
        RegistrationPanel->Hide();
        AdminButton->Show();
        EnterButton->Show();
        RegistrationButton->Show();
}
//---------------------------------------------------------------------------

void __fastcall TMainWindow::FormClose(TObject *Sender,
      TCloseAction &Action)
{
        DataModule1->UserTable->Active = false;
}
//---------------------------------------------------------------------------
/*                         Functions                                       */
//---------------------------------------------------------------------------
unsigned int encode(int code)
{
        union Encode
        {
                unsigned int number;
                char str[4];
        }a, b;

        a.number = code;

        b.str[0] = a.str[3];
        b.str[1] = a.str[2];
        b.str[2] = a.str[1];
        b.str[3] = a.str[0];

        return b.number;
}
//---------------------------------------------------------------------------
/*                         Edits                                           */
//---------------------------------------------------------------------------
void __fastcall TMainWindow::AdminPasswordEditKeyPress(TObject *Sender,
      char &Key)
{
        if (Key == VK_RETURN)
        {
                GoToAdminForm->SetFocus();
        }
}
//---------------------------------------------------------------------------

void __fastcall TMainWindow::LoginEditKeyPress(TObject *Sender, char &Key)
{
        if (Key == VK_RETURN)
        {
                PasswordEdit->SetFocus();
        }
}
//---------------------------------------------------------------------------

void __fastcall TMainWindow::PasswordEditKeyPress(TObject *Sender,
      char &Key)
{
        if (Key == VK_RETURN)
        {
                GoToUserForm->SetFocus();
        }
}
//---------------------------------------------------------------------------
/*                              ComboBox                                   */
//---------------------------------------------------------------------------
void __fastcall TMainWindow::RegistrateAsBoxClick(TObject *Sender)
{
        RegistrateAsBox->Text = RegistrateAsBox->Items->Strings[RegistrateAsBox->ItemIndex];
}
//---------------------------------------------------------------------------
void __fastcall TMainWindow::AOpenExecute(TObject *Sender)
{
        WinExec("hh.exe help.chm", SW_RESTORE);
}
//---------------------------------------------------------------------------

