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
//---------------------------------------------------------------------------
class Tfm : public TForm
{
__published:	// IDE-managed Components
	TTabControl *tc;
	TTabItem *tiMainMenu;
	TTabItem *tiTestWrap;
	TTabItem *tiSendQuestion;
	TTabItem *tiResive;
	TTabItem *tiChangeDB;
	TToolBar *ToolBar1;
	TToolBar *ToolBar2;
	TToolBar *ToolBar5;
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
	TButton *Button9;
	TButton *buBackCurQ;
	TToolBar *ToolBar4;
	TButton *Button12;
	TButton *Button13;
	TButton *Button14;
	TButton *Button15;
	TScrollBox *ScrollBox2;
	TButton *buBackFirstqu;
	TListBox *lbTestWrap;
	TButton *buChange;
	TListBox *lbResive;
	TBindSourceDB *BindSourceDB1;
	TBindingsList *BindingsList1;
	TBindSourceDB *BindSourceDB2;
	TLinkPropertyToField *LinkPropertyToFieldText;
	TLinkPropertyToField *LinkPropertyToFieldText2;
	TBindSourceDB *BindSourceDB3;
	TLinkListControlToField *LinkListControlToField2;
	TGridPanelLayout *GridPanelLayout1;
	TGrid *Grid1;
	TGrid *Grid2;
	TButton *Button2;
	TButton *buGoSendQ;
	TBindSourceDB *BindSourceDB4;
	TLinkGridToDataSource *LinkGridToDataSourceBindSourceDB4;
	TBindSourceDB *BindSourceDB5;
	TLinkGridToDataSource *LinkGridToDataSourceBindSourceDB5;
	TLabel *Label1;
	TBindNavigator *NavigatorBindSourceDB5;
	TBindNavigator *NavigatorBindSourceDB4;
	TListView *lvTestWrap;
	TLinkFillControlToField *LinkFillControlToField;
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
private:	// User declarations
public:		// User declarations
	__fastcall Tfm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tfm *fm;
//---------------------------------------------------------------------------
#endif
