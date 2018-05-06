//---------------------------------------------------------------------------

#ifndef UserFormH
#define UserFormH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <DBCtrls.hpp>
#include <DBGrids.hpp>
#include <Grids.hpp>
#include <Mask.hpp>
//---------------------------------------------------------------------------
class TUserWindow : public TForm
{
__published:	// IDE-managed Components
        TPanel *UserPanel;
        TButton *GoToMainButton;
        TButton *SearchButton;
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label3;
        TLabel *Label4;
        TLabel *Label5;
        TLabel *Label6;
        TLabel *Label7;
        TLabel *Label8;
        TLabel *Label9;
        TDBText *DBText1;
        TDBText *DBText2;
        TDBText *DBText3;
        TDBText *DBText4;
        TDBText *DBText5;
        TDBText *DBText6;
        TDBText *DBText7;
        TDBText *DBText8;
        TDBText *DBText9;
        TButton *EditButton;
        TDBEdit *DBEdit1;
        TDBEdit *DBEdit2;
        TDBMemo *DBMemo1;
        TEdit *Edit1;
        TDBMemo *DBMemo2;
        TEdit *Edit2;
        TButton *ConfirmButton;
        TDBComboBox *DBComboBox1;
        TDBComboBox *DBComboBox2;
        TDBComboBox *DBComboBox3;
        TDBComboBox *DBComboBox4;
        TDBComboBox *DBComboBox5;
        TButton *EditCancelButton;
        TPanel *SearchPanel;
        TDBGrid *DBGrid1;
        TButton *StartSearchButton;
        TPanel *DisplaySearchPanel;
        TLabel *Label10;
        TLabel *Label11;
        TLabel *Label12;
        TLabel *Label13;
        TLabel *Label14;
        TLabel *Label15;
        TLabel *Label16;
        TLabel *Label17;
        TLabel *Label18;
        TLabel *Label19;
        TLabel *Label20;
        TLabel *Label21;
        TLabel *Label22;
        TDBText *DBText10;
        TDBText *DBText11;
        TDBText *DBText12;
        TDBText *DBText13;
        TDBText *DBText14;
        TDBText *DBText15;
        TDBText *DBText16;
        TDBText *DBText17;
        TDBText *DBText18;
        TDBText *DBText19;
        TDBText *DBText20;
        TDBText *DBText21;
        TDBText *DBText22;
        TButton *BackToUserButton;
        TCheckBox *CheckBox1;
        TCheckBox *CheckBox2;
        TCheckBox *CheckBox3;
        TCheckBox *CheckBox4;
        TCheckBox *CheckBox5;
        TDBComboBox *DBComboBox6;
        TDBComboBox *DBComboBox7;
        TDBComboBox *DBComboBox8;
        TDBComboBox *DBComboBox9;
        TCheckBox *CheckBox6;
        TEdit *Edit3;
        TCheckBox *CheckBox7;
        TEdit *Edit4;
        TEdit *Edit5;
        void __fastcall GoToMainButtonClick(TObject *Sender);
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
        void __fastcall FormShow(TObject *Sender);
        void __fastcall EditButtonClick(TObject *Sender);
        void __fastcall ConfirmButtonClick(TObject *Sender);
        void __fastcall EditCancelButtonClick(TObject *Sender);
        void __fastcall DBComboBox1Click(TObject *Sender);
        void __fastcall DBComboBox2Click(TObject *Sender);
        void __fastcall DBComboBox3Click(TObject *Sender);
        void __fastcall DBComboBox4Click(TObject *Sender);
        void __fastcall DBComboBox5Click(TObject *Sender);
        void __fastcall DBEdit1Click(TObject *Sender);
        void __fastcall DBEdit2Click(TObject *Sender);
        void __fastcall Edit1Click(TObject *Sender);
        void __fastcall Edit2Click(TObject *Sender);
        void __fastcall SearchButtonClick(TObject *Sender);
        void __fastcall StartSearchButtonClick(TObject *Sender);
        void __fastcall CheckBox7Click(TObject *Sender);
        void __fastcall CheckBox1Click(TObject *Sender);
        void __fastcall CheckBox2Click(TObject *Sender);
        void __fastcall CheckBox3Click(TObject *Sender);
        void __fastcall CheckBox4Click(TObject *Sender);
        void __fastcall CheckBox5Click(TObject *Sender);
        void __fastcall CheckBox6Click(TObject *Sender);
        void __fastcall DBComboBox8Click(TObject *Sender);
        void __fastcall BackToUserButtonClick(TObject *Sender);
        void __fastcall DBGrid1CellClick(TColumn *Column);
        void __fastcall DBGrid1DblClick(TObject *Sender);
        void __fastcall Edit3Click(TObject *Sender);
        void __fastcall Edit4Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TUserWindow(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TUserWindow *UserWindow;
//---------------------------------------------------------------------------
#endif
