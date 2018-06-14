//---------------------------------------------------------------------------

#ifndef fmxH
#define fmxH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Memo.hpp>
#include <FMX.ScrollBox.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.TabControl.hpp>
#include <FMX.Types.hpp>
#include <FMX.Layouts.hpp>
#include <FMX.Objects.hpp>
#include <FMX.ListBox.hpp>
#include <Data.Bind.Components.hpp>
#include <Data.Bind.DBScope.hpp>
#include <Data.Bind.EngExt.hpp>
#include <Fmx.Bind.DBEngExt.hpp>
#include <Fmx.Bind.Editors.hpp>
#include <System.Bindings.Outputs.hpp>
#include <System.Rtti.hpp>
#include <Data.Bind.Grid.hpp>
#include <Fmx.Bind.Grid.hpp>
#include <FMX.Grid.hpp>
#include <FMX.Grid.Style.hpp>
#include <Data.Bind.Controls.hpp>
#include <Fmx.Bind.Navigator.hpp>
#include <FMX.ListView.Adapters.Base.hpp>
#include <FMX.ListView.Appearances.hpp>
#include <FMX.ListView.hpp>
#include <FMX.ListView.Types.hpp>
#include <FMX.Edit.hpp>
//---------------------------------------------------------------------------
class Tfm : public TForm
{
__published:	// IDE-managed Components
	TTabControl *tc;
	TTabItem *tiMainMenu;
	TTabItem *tiTestWrap;
	TTabItem *tiSendQuestion;
	TTabItem *tiResive;
	TTabItem *tiCredits;
	TToolBar *ToolBar1;
	TToolBar *ToolBar2;
	TButton *buStartTest;
	TScrollBox *ScrollBox1;
	TButton *buInfo;
	TText *Text1;
	TButton *buMain;
	TButton *Button4;
	TButton *buBackFirstQ;
	TButton *buBackOneQ;
	TText *Text2;
	TButton *buSendQuest;
	TToolBar *ToolBar3;
	TButton *buMainM;
	TButton *buBackCurQ;
	TToolBar *ToolBar4;
	TButton *Button12;
	TButton *Button14;
	TButton *Button15;
	TScrollBox *ScrollBox2;
	TButton *buBackFirstqu;
	TListBox *lbTestWrap;
	TListBox *lbResive;
	TBindSourceDB *BindSourceDB1;
	TBindingsList *BindingsList1;
	TBindSourceDB *BindSourceDB2;
	TBindSourceDB *BindSourceDB3;
	TGridPanelLayout *GridPanelLayout1;
	TGrid *Grid1;
	TGrid *Grid2;
	TButton *buGoSendQ;
	TBindSourceDB *BindSourceDB4;
	TLinkGridToDataSource *LinkGridToDataSourceBindSourceDB4;
	TBindSourceDB *BindSourceDB5;
	TLinkGridToDataSource *LinkGridToDataSourceBindSourceDB5;
	TLabel *Label1;
	TBindNavigator *NavigatorBindSourceDB5;
	TBindNavigator *NavigatorBindSourceDB4;
	TListView *lvTestWrap;
	TLinkPropertyToField *LinkPropertyToFieldText;
	TLinkPropertyToField *LinkPropertyToFieldText2;
	TLinkListControlToField *LinkListControlToField1;
	TTabControl *tcMenu;
	TTabItem *tiAdmin;
	TTabItem *tiMainPart;
	TTabItem *tiLogin;
	TButton *buPass;
	TEdit *edLogin;
	TEdit *edPass;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TButton *Button1;
	TPasswordEditButton *PasswordEditButton1;
	TClearEditButton *ClearEditButton1;
	TClearEditButton *ClearEditButton2;
	TButton *buChange;
	TLayout *Layout1;
	TLabel *Label5;
	TEdit *edChConfirm;
	TEdit *edChPass;
	TLabel *Label6;
	TLabel *Label7;
	TClearEditButton *ClearEditButton3;
	TClearEditButton *ClearEditButton4;
	TButton *buSubmitChange;
	TLabel *Label8;
	TEdit *edChLogin;
	TClearEditButton *ClearEditButton5;
	TButton *buBack;
	TLinkListControlToField *LinkListControlToField2;
	TLayout *Layout2;
	TLabel *Label9;
	TLabel *Label10;
	TLabel *Label11;
	TLabel *Label12;
	TButton *Button2;
	TTabItem *tiInformation;
	TLabel *Label13;
	TButton *Button3;
	TLabel *Label14;
	TLabel *Label15;
	TLabel *Label16;
	TLabel *Label17;
	TLabel *Label18;
	TLabel *Label19;
	TLabel *Label20;
	TStyleBook *StyleBook1;
	TButton *Button5;
	TButton *Button6;
	TEdit *edWayToDB;
	TEdit *edLoginToDB;
	TEdit *edPassToDB;
	TLabel *Label23;
	TLabel *Label21;
	TLabel *Label22;
	TLayout *Layout3;
	TButton *Button7;
	TPasswordEditButton *PasswordEditButton2;
	void __fastcall buStartTestClick(TObject *Sender);
	void __fastcall buMainClick(TObject *Sender);
	void __fastcall buChangeClick(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall buSendQuestClick(TObject *Sender);
	void __fastcall buMainMClick(TObject *Sender);
	void __fastcall buBackCurQClick(TObject *Sender);
	void __fastcall buBackFirstQClick(TObject *Sender);
	void __fastcall buGoSendQClick(TObject *Sender);
	void __fastcall Button12Click(TObject *Sender);
	void __fastcall Button15Click(TObject *Sender);
	void __fastcall Button14Click(TObject *Sender);
	void __fastcall lbTestWrapChange(TObject *Sender);
	void __fastcall buBackFirstquClick(TObject *Sender);
	void __fastcall lvTestWrapDblClick(TObject *Sender);
	void __fastcall buBackOneQClick(TObject *Sender);
	void __fastcall buPassClick(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall buSubmitChangeClick(TObject *Sender);
	void __fastcall buBackClick(TObject *Sender);
	void __fastcall buInfoClick(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall Button7Click(TObject *Sender);
	void __fastcall FormActivate(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall Tfm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tfm *fm;
//---------------------------------------------------------------------------
#endif
