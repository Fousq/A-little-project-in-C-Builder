//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
//---------------------------------------------------------------------------
USEFORM("MainForm.cpp", MainWindow);
USEFORM("AdminForm.cpp", AdminWindow);
USEFORM("RegistrationForm.cpp", RegistrationWindow);
USEFORM("DataModel.cpp", DataModule1); /* TDataModule: File Type */
USEFORM("UserForm.cpp", UserWindow);
USEFORM("ReportForm.cpp", ReportWindow);
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
        try
        {
                 Application->Initialize();
                 Application->CreateForm(__classid(TMainWindow), &MainWindow);
                 Application->CreateForm(__classid(TAdminWindow), &AdminWindow);
                 Application->CreateForm(__classid(TRegistrationWindow), &RegistrationWindow);
                 Application->CreateForm(__classid(TDataModule1), &DataModule1);
                 Application->CreateForm(__classid(TUserWindow), &UserWindow);
                 Application->CreateForm(__classid(TReportWindow), &ReportWindow);
                 Application->Run();
        }
        catch (Exception &exception)
        {
                 Application->ShowException(&exception);
        }
        catch (...)
        {
                 try
                 {
                         throw Exception("");
                 }
                 catch (Exception &exception)
                 {
                         Application->ShowException(&exception);
                 }
        }
        return 0;
}
//---------------------------------------------------------------------------
