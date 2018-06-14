//---------------------------------------------------------------------------


#pragma hdrstop

#include "dmu.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma classgroup "FMX.Controls.TControl"
#pragma resource "*.dfm"
Tdm *dm;
//---------------------------------------------------------------------------
__fastcall Tdm::Tdm(TComponent* Owner)
	: TDataModule(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Tdm::DataModuleCreate(TObject *Sender)
{
	FDConnection->Connected = true;

	FDTableMaster->Open();
	FDTableFull->Open();
	FDTableSub->Open();

	FDTableAdmin->Open();
	FDTabTestsCh->Open();
	FDTableAnsvCh->Open();
	//
	FDTableMaster->Filtered = true;
	FDTableFull->Filtered = true;
	FDTableSub->Filtered = true;
	//
	GoToZerQuestion();

}
//---------------------------------------------------------------------------
void Tdm::GoToZerQuestion()
{


   FDTableSub->Filter = FDTableSubIDPREV->FieldName + " = " + 1;
   FDTableMaster->Locate(FDTableSubIDTE->FieldName,FDTableSubIDPREV->Value);


   FDTableSub->Filtered = true;
   FDTableMaster->Filtered = true;
}
//---------------------------------------------------------------------------
void Tdm::GoToNextLvlQuestion()
{
	 // если есть следующий уровень, то переходить

	 try {

       FDTableSub->Filter = FDTableSubIDPREV->FieldName + " = " + FDTableSubIDTE->Value;
	   FDTableMaster->Locate(FDTableSubIDTE->FieldName,FDTableSubIDPREV->Value);

          FDTableMaster->Filtered = true;
		  FDTableSub->Filtered = true;

	 } catch (...) {}




   /*
   if ( ! FDTableSub->Eof ) {
   FDTableSub->Filter = FDTableSubIDPREV->FieldName + " = " + FDTableSubIDTE->Value;
   FDTableMaster->Locate(FDTableSubIDTE->FieldName,FDTableSubIDPREV->Value);
   }

	*/
	if ( FDTableSub->Eof ) {
	 GoBack1LvlQuestion();
   }


   //FDTableMaster->Filtered = true;
  //FDTableSub->Filtered = true;
   /*
   if ( FDTableSub->Eof ) {
	 GoBack1LvlQuestion();
   }
   */
	
}
//---------------------------------------------------------------------------
void Tdm::GoBack1LvlQuestion()
{


	//PreviousLvl = FDTableSub->Lookup(FDTableSubIDTE->FieldName,FDTableSubIDPREV->Value,FDTableSubIDPREV->FieldName);
	if (  FDTableSubIDPREV->Value != "1")
	FDTableMaster->Locate(FDTableSubIDTE->FieldName,FDTableSubIDPREV->Value);
	PreviousLvl = FDTableMasterIDPREV->Value;
	if (  FDTableSubIDPREV->Value != "1" ) {
   		FDTableSub->Filter = FDTableSubIDPREV->FieldName + " = " + PreviousLvl;
	}
	FDTableMaster->Locate(FDTableSubIDTE->FieldName,FDTableSubIDPREV->Value);

    FDTableMaster->Filtered = true;
   FDTableSub->Filtered = true;
}
//---------------------------------------------------------------------------

void Tdm::FilterAnswers()
{

   FDTableFull->Filter = FDTableFullIDQUESTION->FieldName + " = " + FDTableSubIDTE->Value;
   FDTableFull->Filtered = true;
}
//---------------------------------------------------------------------------
bool Tdm::AreYouAdmin(UnicodeString login, UnicodeString pass) {

	 if (FDTableAdmin->Eof) {
        return true;
	 }

	THashMD5 sigma;
	  return ( FDTableAdminLOGIN->Value == sigma.GetHashString(login) )&&(FDTableAdminPASS->Value == sigma.GetHashString(pass));


	// return ( FDTableAdminLOGIN == Hash.THashMD5.GetHashString(login) )&&(FDTableAdminPASS == Hash.THashMD5.GetHashString(pass));

}
//---------------------------------------------------------------------------
void Tdm::SetAdminPass(UnicodeString login, UnicodeString pass) {

   if (FDTableAdmin->Eof) {FDTableAdmin->Append();  } else  { FDTableAdmin->Edit();}



	THashMD5 sigma;

	FDTableAdminLOGIN->Value = sigma.GetHashString(login);
	FDTableAdminPASS->Value = sigma.GetHashString(pass);
	FDTableAdminID->Value = NULL;
    FDTableAdmin->Post();
}
//---------------------------------------------------------------------------

