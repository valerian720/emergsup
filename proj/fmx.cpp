//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "fmx.h"
#include "dmu.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
Tfm *fm;
//---------------------------------------------------------------------------
__fastcall Tfm::Tfm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall Tfm::buStartTestClick(TObject *Sender)
{
	tc->GotoVisibleTab(tiTestWrap->Index);
}
//---------------------------------------------------------------------------


void __fastcall Tfm::buMainClick(TObject *Sender)
{
	tc->GotoVisibleTab(tiMainMenu->Index);
}
//---------------------------------------------------------------------------

void __fastcall Tfm::buChangeClick(TObject *Sender)
{
   	tc->GotoVisibleTab(tiChangeDB->Index);
}
//---------------------------------------------------------------------------

void __fastcall Tfm::FormCreate(TObject *Sender)
{
	  tc->GotoVisibleTab(tiMainMenu->Index);

}
//---------------------------------------------------------------------------


void __fastcall Tfm::buSendQuestClick(TObject *Sender)
{
      tc->GotoVisibleTab(tiResive->Index);
}
//---------------------------------------------------------------------------

void __fastcall Tfm::buMainMClick(TObject *Sender)
{
	tc->GotoVisibleTab(tiMainMenu->Index);
}
//---------------------------------------------------------------------------

void __fastcall Tfm::buBackCurQClick(TObject *Sender)
{
	tc->GotoVisibleTab(tiTestWrap->Index);
}
//---------------------------------------------------------------------------

void __fastcall Tfm::buBackFirstQClick(TObject *Sender)
{
      tc->GotoVisibleTab(tiTestWrap->Index);
}
//---------------------------------------------------------------------------

void __fastcall Tfm::buGoSendQClick(TObject *Sender)
{
	tc->GotoVisibleTab(tiSendQuestion->Index);
}
//---------------------------------------------------------------------------

void __fastcall Tfm::Button12Click(TObject *Sender)
{
    tc->GotoVisibleTab(tiMainMenu->Index);
}
//---------------------------------------------------------------------------

void __fastcall Tfm::Button15Click(TObject *Sender)
{
	  tc->GotoVisibleTab(tiTestWrap->Index);
}
//---------------------------------------------------------------------------

void __fastcall Tfm::Button14Click(TObject *Sender)
{
    tc->GotoVisibleTab(tiTestWrap->Index);
}
//---------------------------------------------------------------------------

void __fastcall Tfm::lbTestWrapChange(TObject *Sender)
{
	dm->FDTableFull->Filter =  dm->FDTableFullIDFA->FieldName + " = " + dm->FDTableMasterIDTE->Value;


}
//---------------------------------------------------------------------------

