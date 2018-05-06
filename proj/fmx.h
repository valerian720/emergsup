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
	TMemo *me;
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
private:	// User declarations
public:		// User declarations
	__fastcall Tfm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tfm *fm;
//---------------------------------------------------------------------------
#endif
