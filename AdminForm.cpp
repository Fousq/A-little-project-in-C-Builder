//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "AdminForm.h"
#include "DataModel.h"
#include "MainForm.h"
#include "ReportForm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TAdminWindow *AdminWindow;
//---------------------------------------------------------------------------
__fastcall TAdminWindow::TAdminWindow(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
/*                              Forms                                      */
//---------------------------------------------------------------------------
void __fastcall TAdminWindow::FormClose(TObject *Sender,
      TCloseAction &Action)
{
        DataModule1->UserTable->Active = false;
        DataModule1->CompanyTable->Active = false;
        DataModule1->JobsTable->Active = false;
        DataModule1->ReasonsTable->Active = false;
        MainWindow->Close();
}
//---------------------------------------------------------------------------

void __fastcall TAdminWindow::FormShow(TObject *Sender)
{
        AddButton->Hide();
        EditButton->Hide();
        DeleteButton->Hide();
        GroupBox->Hide();
        GroupBox->Caption = "";
        PageControl1->ActivePage = UsersSheet;
        DataModule1->UserTable->Active = true;
        DataModule1->CompanyTable->Active = true;
}
//---------------------------------------------------------------------------
/*                      PageControl                                        */
//---------------------------------------------------------------------------
void __fastcall TAdminWindow::PageControl1Change(TObject *Sender)
{
        GroupBox->Hide();
        if ((PageControl1->ActivePage == JobsSheet) || (PageControl1->ActivePage == ReasonsSheet))
        {
                GoBackButton->Hide();
                AdminWindow->Height = 430;
                AddButton->Show();
                EditButton->Show();
                DeleteButton->Show();
                if (PageControl1->ActivePage == JobsSheet)
                {
                        DataModule1->JobsTable->Active = true;
                        DBEdit2->Hide();
                }
                else
                {
                        DataModule1->JobsTable->Active = false;
                }

                if (PageControl1->ActivePage == ReasonsSheet)
                {
                        DBEdit1->Hide();
                        DataModule1->ReasonsTable->Active = true;
                }
                else
                {
                        DataModule1->ReasonsTable->Active = false;
                }
        }
        else
        {
                AdminWindow->Height = 403;
                AddButton->Hide();
                EditButton->Hide();
                DeleteButton->Hide();
                DataModule1->JobsTable->Active = false;
                DataModule1->ReasonsTable->Active = false;
                GoBackButton->Show();
        }
}
//---------------------------------------------------------------------------
/*                      Buttons                                            */
//---------------------------------------------------------------------------
void __fastcall TAdminWindow::AddButtonClick(TObject *Sender)
{
        AdminWindow->Height = 570;
        GroupBox->Caption = "Добавить запись";
        ConfirmButton->Caption = "Добавить";
        GroupBox->Show();
        if (DataModule1->JobsTable->Active)
        {
                DBEdit1->Show();
                DataModule1->JobsTable->Insert();
        }

        if (DataModule1->ReasonsTable->Active)
        {
                DBEdit2->Show();
                DataModule1->ReasonsTable->Insert();
        }
}
//---------------------------------------------------------------------------

void __fastcall TAdminWindow::EditButtonClick(TObject *Sender)
{
        AdminWindow->Height = 570;
        GroupBox->Caption = "Редактировать запись";
        ConfirmButton->Caption = "Подтвердить";
        GroupBox->Show();
        if (DataModule1->JobsTable->Active)
        {
                DBEdit1->Show();
                DataModule1->JobsTable->Edit();
        }

        if (DataModule1->ReasonsTable->Active)
        {
                DBEdit2->Show();
                DataModule1->ReasonsTable->Edit();
        }
}
//---------------------------------------------------------------------------

void __fastcall TAdminWindow::DeleteButtonClick(TObject *Sender)
{
        if (DataModule1->JobsTable->Active)
        {
                if (Application->MessageBoxA("Действительно ли вы хотите удалить запись?", "Потверждение", MB_YESNO) == IDYES)
                {
                        DataModule1->JobsTable->Delete();
                }
        }

        if (DataModule1->ReasonsTable->Active)
        {
                if (Application->MessageBoxA("Действительно ли вы хотите удалить запись?", "Потверждение", MB_YESNO) == IDYES)
                {
                        DataModule1->ReasonsTable->Delete();
                }
        }
}
//---------------------------------------------------------------------------

void __fastcall TAdminWindow::CancelButtonClick(TObject *Sender)
{
        if (DataModule1->JobsTable->Active)
        {
                DataModule1->JobsTable->Cancel();
        }

        if (DataModule1->ReasonsTable->Active)
        {
                DataModule1->ReasonsTable->Cancel();
        }

        GroupBox->Hide();
        AdminWindow->Height = 430;
}
//---------------------------------------------------------------------------

void __fastcall TAdminWindow::ConfirmButtonClick(TObject *Sender)
{
        if (DataModule1->JobsTable->Active)
        {
                bool Empty = false;
                if (DBEdit1->Text == "")
                {
                        Empty = true;
                        DBEdit1->Color = clRed;
                }

                if (Empty)
                {
                        Application->MessageBoxA("Поле пустое", "Ошибка", MB_OK | MB_ICONERROR);
                        Abort();
                }
                else
                {
                        if (Application->MessageBoxA("Хотите ли вы внести изменение в таблицу 'Работа'?", "Потверждение", MB_YESNO) == IDYES)
                        {
                                DataModule1->JobsTable->Post();
                        }
                }
        }

        if (DataModule1->ReasonsTable->Active)
        {
                bool Empty = false;
                if (DBEdit2->Text == "")
                {
                        Empty = true;
                        DBEdit2->Color = clRed;
                }

                if (Empty)
                {
                        Application->MessageBoxA("Поле пустое", "Ошибка", MB_OK | MB_ICONERROR);
                        Abort();
                }
                else
                {
                        if (Application->MessageBoxA("Хотите ли вы внести изменение в таблицу 'Причина безработицы'?", "Потверждение", MB_YESNO) == IDYES)
                        {
                                DataModule1->ReasonsTable->Post();
                                GroupBox->Hide();
                        }
                }
        }
}
//---------------------------------------------------------------------------

void __fastcall TAdminWindow::GoBackButtonClick(TObject *Sender)
{
        DataModule1->UserTable->Active = false;
        DataModule1->CompanyTable->Active = false;
        DataModule1->JobsTable->Active = false;
        DataModule1->ReasonsTable->Active = false;
        AdminWindow->Hide();
        MainWindow->Show();
}
//---------------------------------------------------------------------------
/*                              DBEdits                                    */
//---------------------------------------------------------------------------

void __fastcall TAdminWindow::DBEdit1Click(TObject *Sender)
{
        DBEdit1->Color = clWindow;
}
//---------------------------------------------------------------------------

void __fastcall TAdminWindow::DBEdit1KeyPress(TObject *Sender, char &Key)
{
        if (Key == VK_RETURN)
        {
                ConfirmButton->SetFocus();
        }
}
//---------------------------------------------------------------------------

void __fastcall TAdminWindow::DBEdit2Click(TObject *Sender)
{
        DBEdit2->Color = clWindow;
}
//---------------------------------------------------------------------------

void __fastcall TAdminWindow::DBEdit2KeyPress(TObject *Sender, char &Key)
{
        if (Key == VK_RETURN)
        {
                ConfirmButton->SetFocus();
        }
}
//---------------------------------------------------------------------------
/*                              ActionList                                 */
//---------------------------------------------------------------------------
void __fastcall TAdminWindow::AExitExecute(TObject *Sender)
{
        if (DataModule1->UserTable->Active)
        {
                DataModule1->UserTable->Active = false;
        }

        if (DataModule1->CompanyTable->Active)
        {
                DataModule1->CompanyTable->Active = false;
        }

        if (DataModule1->JobsTable->Active)
        {
                DataModule1->JobsTable->Active = false;
        }

        if (DataModule1->ReasonsTable->Active)
        {
                DataModule1->ReasonsTable->Active = false;
        }

}
//---------------------------------------------------------------------------

void __fastcall TAdminWindow::AOpenExecute(TObject *Sender)
{
        DataModule1->UserTable->Active = true;
        DataModule1->CompanyTable->Active = true;
        DataModule1->JobsTable->Active = true;
        DataModule1->ReasonsTable->Active = true;
}
//---------------------------------------------------------------------------

void __fastcall TAdminWindow::AReportOpenExecute(TObject *Sender)
{
        AdminWindow->Hide();
        ReportWindow->Show();
}
//---------------------------------------------------------------------------
