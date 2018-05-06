//---------------------------------------------------------------------------

#ifndef AdminFormH
#define AdminFormH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
#include <DBGrids.hpp>
#include <Grids.hpp>
#include <DBCtrls.hpp>
#include <Mask.hpp>
#include <ActnList.hpp>
#include <Menus.hpp>
//---------------------------------------------------------------------------
class TAdminWindow : public TForm
{
__published:	// IDE-managed Components
        TPageControl *PageControl1;
        TTabSheet *UsersSheet;
        TTabSheet *CompaniesSheet;
        TDBGrid *DBGrid1;
        TDBGrid *DBGrid2;
        TGroupBox *GroupBox;
        TTabSheet *JobsSheet;
        TTabSheet *ReasonsSheet;
        TDBGrid *DBGrid3;
        TDBGrid *DBGrid4;
        TButton *AddButton;
        TButton *EditButton;
        TButton *DeleteButton;
        TDBEdit *DBEdit1;
        TButton *ConfirmButton;
        TButton *CancelButton;
        TDBEdit *DBEdit2;
        TMainMenu *MainMenu1;
        TActionList *ActionList1;
        TAction *AExit;
        TAction *AReportOpen;
        TAction *AOpen;
        TMenuItem *N1;
        TMenuItem *N2;
        TMenuItem *N3;
        TMenuItem *N4;
        TMenuItem *N5;
        TButton *GoBackButton;
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
        void __fastcall FormShow(TObject *Sender);
        void __fastcall PageControl1Change(TObject *Sender);
        void __fastcall AddButtonClick(TObject *Sender);
        void __fastcall EditButtonClick(TObject *Sender);
        void __fastcall DeleteButtonClick(TObject *Sender);
        void __fastcall CancelButtonClick(TObject *Sender);
        void __fastcall ConfirmButtonClick(TObject *Sender);
        void __fastcall DBEdit1Click(TObject *Sender);
        void __fastcall DBEdit1KeyPress(TObject *Sender, char &Key);
        void __fastcall DBEdit2Click(TObject *Sender);
        void __fastcall DBEdit2KeyPress(TObject *Sender, char &Key);
        void __fastcall AExitExecute(TObject *Sender);
        void __fastcall AOpenExecute(TObject *Sender);
        void __fastcall AReportOpenExecute(TObject *Sender);
        void __fastcall GoBackButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TAdminWindow(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TAdminWindow *AdminWindow;
//---------------------------------------------------------------------------
#endif
