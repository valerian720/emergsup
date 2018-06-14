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
   //	tc->GotoVisibleTab(tiChangeDB->Index);
   tcMenu->GotoVisibleTab(tiLogin->Index);
}
//---------------------------------------------------------------------------

void __fastcall Tfm::FormCreate(TObject *Sender)
{
	  tcMenu->GotoVisibleTab(tiMainPart->Index);
	  tc->GotoVisibleTab(tiMainMenu->Index);
}
//---------------------------------------------------------------------------


void __fastcall Tfm::buSendQuestClick(TObject *Sender)
{
	  dm->FilterAnswers();

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
    dm->GoBack1LvlQuestion();
	tc->GotoVisibleTab(tiTestWrap->Index);
}
//---------------------------------------------------------------------------

void __fastcall Tfm::buBackFirstQClick(TObject *Sender)
{
	  dm->GoToZerQuestion();
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
      dm->GoBack1LvlQuestion();
	  tc->GotoVisibleTab(tiTestWrap->Index);
}
//---------------------------------------------------------------------------

void __fastcall Tfm::Button14Click(TObject *Sender)
{
    dm->GoToZerQuestion();
	tc->GotoVisibleTab(tiTestWrap->Index);
}
//---------------------------------------------------------------------------

void __fastcall Tfm::lbTestWrapChange(TObject *Sender)
{
	dm->FDTableFull->Filter =  dm->FDTableFullIDFA->FieldName + " = " + dm->FDTableMasterIDTE->Value;


}
//---------------------------------------------------------------------------

void __fastcall Tfm::buBackFirstquClick(TObject *Sender)
{
	dm->GoToZerQuestion();
	tc->GotoVisibleTab(tiTestWrap->Index);
}
//---------------------------------------------------------------------------



void __fastcall Tfm::lvTestWrapDblClick(TObject *Sender)
{
    dm->GoToNextLvlQuestion();
}
//---------------------------------------------------------------------------

void __fastcall Tfm::buBackOneQClick(TObject *Sender)
{


	dm->GoBack1LvlQuestion();
     //ShowMessage(dm->PreviousLvl);
}
//---------------------------------------------------------------------------

void __fastcall Tfm::buPassClick(TObject *Sender)
{
	tcMenu->GotoVisibleTab(tiMainPart->Index);
}
//---------------------------------------------------------------------------

void __fastcall Tfm::Button1Click(TObject *Sender)
{

   if (	dm->AreYouAdmin(edLogin->Text, edPass->Text) ){

	tcMenu->GotoVisibleTab(tiAdmin->Index);

   }
   else{
    ShowMessage("неверный логин или пароль");
   }


}
//---------------------------------------------------------------------------

void __fastcall Tfm::buSubmitChangeClick(TObject *Sender)
{
	if (edChPass->Text == edChConfirm->Text) {
	  ShowMessage(  edChLogin->Text +" "+ edChPass->Text) ;
	   dm->SetAdminPass(edChLogin->Text, edChPass->Text);
	   ShowMessage("данные изменены");
	}
	else {
		ShowMessage("введнные данные не совпадают между собой");
		edChPass->Text = "";
		 edChConfirm->Text = "";
	}
}
//---------------------------------------------------------------------------

void __fastcall Tfm::buBackClick(TObject *Sender)
{
     tcMenu->GotoVisibleTab(tiMainPart->Index);
}
//---------------------------------------------------------------------------


void __fastcall Tfm::buInfoClick(TObject *Sender)
{
	tc->GotoVisibleTab(tiCredits->Index);
}
//---------------------------------------------------------------------------


void __fastcall Tfm::Button4Click(TObject *Sender)
{
    tc->GotoVisibleTab(tiInformation->Index);
}
//---------------------------------------------------------------------------

void __fastcall Tfm::Button7Click(TObject *Sender)
{
	dm->FDConnection->Params->Password = edPassToDB->Text;
	dm->FDConnection->Params->UserName = edLoginToDB->Text;
	dm->FDConnection->Params->Database = edWayToDB->Text;

	dm->DataModuleCreate(NULL);
}
//---------------------------------------------------------------------------

void __fastcall Tfm::FormActivate(TObject *Sender)
{
	 edPassToDB->Text = dm->FDConnection->Params->Password ;
	 edLoginToDB->Text = dm->FDConnection->Params->UserName ;
	 edWayToDB->Text = dm->FDConnection->Params->Database ;
}
//---------------------------------------------------------------------------

