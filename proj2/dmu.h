//---------------------------------------------------------------------------

#ifndef dmuH
#define dmuH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Data.DB.hpp>
#include <FireDAC.Comp.Client.hpp>
#include <FireDAC.Comp.DataSet.hpp>
#include <FireDAC.DApt.hpp>
#include <FireDAC.DApt.Intf.hpp>
#include <FireDAC.DatS.hpp>
#include <FireDAC.FMXUI.Wait.hpp>
#include <FireDAC.Phys.FB.hpp>
#include <FireDAC.Phys.FBDef.hpp>
#include <FireDAC.Phys.hpp>
#include <FireDAC.Phys.IBBase.hpp>
#include <FireDAC.Phys.Intf.hpp>
#include <FireDAC.Stan.Async.hpp>
#include <FireDAC.Stan.Def.hpp>
#include <FireDAC.Stan.Error.hpp>
#include <FireDAC.Stan.Intf.hpp>
#include <FireDAC.Stan.Option.hpp>
#include <FireDAC.Stan.Param.hpp>
#include <FireDAC.Stan.Pool.hpp>
#include <FireDAC.UI.Intf.hpp>
#include <System.Hash.hpp>
//---------------------------------------------------------------------------
class Tdm : public TDataModule
{
__published:	// IDE-managed Components
	TFDPhysFBDriverLink *FBdriver;
	TFDConnection *FDConnection;
	TFDTable *FDTableMaster;
	TFDTable *FDTableFull;
	TFDTable *FDTableSub;
	TWideStringField *FDTableMasterTEST;
	TWideStringField *FDTableMasterDESCRIBTION;
	TWideStringField *FDTableMasterIDPREV;
	TWideStringField *FDTableMasterIDTE;
	TWideStringField *FDTableMasterSYSDESCRIB;
	TWideStringField *FDTableSubTEST;
	TWideStringField *FDTableSubDESCRIBTION;
	TWideStringField *FDTableSubIDPREV;
	TWideStringField *FDTableSubIDTE;
	TWideStringField *FDTableSubSYSDESCRIB;
	TWideStringField *FDTableFullIDFA;
	TWideStringField *FDTableFullANSVER;
	TWideStringField *FDTableFullIDQUESTION;
	TFDTable *FDTabTestsCh;
	TWideStringField *WideStringField1;
	TWideStringField *WideStringField2;
	TWideStringField *WideStringField3;
	TWideStringField *WideStringField4;
	TWideStringField *WideStringField5;
	TFDTable *FDTableAnsvCh;
	TWideStringField *WideStringField6;
	TWideStringField *WideStringField7;
	TWideStringField *WideStringField8;
	TFDTable *FDTableAdmin;
	TWideStringField *FDTableAdminLOGIN;
	TWideStringField *FDTableAdminPASS;
	TSmallintField *FDTableAdminID;
	void __fastcall DataModuleCreate(TObject *Sender);
private:	// User declarations


public:		// User declarations
	__fastcall Tdm(TComponent* Owner);
	void GoToZerQuestion();
	void GoToNextLvlQuestion();
	void GoBack1LvlQuestion();
	UnicodeString PreviousLvl;
	void FilterAnswers();

	bool AreYouAdmin(UnicodeString login, UnicodeString pass);
    void SetAdminPass(UnicodeString login, UnicodeString pass);
};
//---------------------------------------------------------------------------
extern PACKAGE Tdm *dm;
//---------------------------------------------------------------------------
#endif
