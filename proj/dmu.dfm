object dm: Tdm
  OldCreateOrder = False
  OnCreate = DataModuleCreate
  Height = 283
  Width = 451
  object FBdriver: TFDPhysFBDriverLink
    Left = 392
    Top = 16
  end
  object FDConnection: TFDConnection
    Params.Strings = (
      'User_Name=sysdba'
      'Password=masterkey'
      'Database=C:\Users\VD\Documents\emergsup\proj\DB\DB.FDB'
      'CharacterSet=UTF8'
      'DriverID=FB')
    Connected = True
    Left = 376
    Top = 104
  end
  object FDTableMaster: TFDTable
    Active = True
    IndexFieldNames = 'IDTE'
    Connection = FDConnection
    UpdateOptions.UpdateTableName = 'TESTS'
    TableName = 'TESTS'
    Left = 104
    Top = 208
    object FDTableMasterTEST: TWideStringField
      FieldName = 'TEST'
      Origin = 'TEST'
      Required = True
      Size = 2048
    end
    object FDTableMasterDESCRIBTION: TWideStringField
      FieldName = 'DESCRIBTION'
      Origin = 'DESCRIBTION'
      Required = True
      Size = 2048
    end
    object FDTableMasterIDPREV: TWideStringField
      FieldName = 'IDPREV'
      Origin = 'IDPREV'
      Size = 31
    end
    object FDTableMasterIDTE: TWideStringField
      FieldName = 'IDTE'
      Origin = 'IDTE'
      ProviderFlags = [pfInUpdate, pfInWhere, pfInKey]
      Required = True
      Size = 31
    end
    object FDTableMasterSYSDESCRIB: TWideStringField
      FieldName = 'SYSDESCRIB'
      Origin = 'SYSDESCRIB'
      Size = 2040
    end
  end
  object FDTableFull: TFDTable
    Active = True
    IndexFieldNames = 'IDFA'
    Connection = FDConnection
    UpdateOptions.UpdateTableName = 'FULLANSWERS'
    TableName = 'FULLANSWERS'
    Left = 240
    Top = 208
    object FDTableFullIDFA: TWideStringField
      FieldName = 'IDFA'
      Origin = 'IDFA'
      ProviderFlags = [pfInUpdate, pfInWhere, pfInKey]
      Required = True
      Size = 31
    end
    object FDTableFullANSVER: TWideStringField
      FieldName = 'ANSVER'
      Origin = 'ANSVER'
      Required = True
      Size = 2048
    end
    object FDTableFullIDQUESTION: TWideStringField
      FieldName = 'IDQUESTION'
      Origin = 'IDQUESTION'
      Required = True
      Size = 31
    end
  end
  object FDTableSub: TFDTable
    Active = True
    IndexFieldNames = 'IDTE'
    Connection = FDConnection
    UpdateOptions.UpdateTableName = 'TESTS'
    TableName = 'TESTS'
    Left = 168
    Top = 208
    object FDTableSubTEST: TWideStringField
      FieldName = 'TEST'
      Origin = 'TEST'
      Required = True
      Size = 2048
    end
    object FDTableSubDESCRIBTION: TWideStringField
      FieldName = 'DESCRIBTION'
      Origin = 'DESCRIBTION'
      Required = True
      Size = 2048
    end
    object FDTableSubIDPREV: TWideStringField
      FieldName = 'IDPREV'
      Origin = 'IDPREV'
      Size = 31
    end
    object FDTableSubIDTE: TWideStringField
      FieldName = 'IDTE'
      Origin = 'IDTE'
      ProviderFlags = [pfInUpdate, pfInWhere, pfInKey]
      Required = True
      Size = 31
    end
    object FDTableSubSYSDESCRIB: TWideStringField
      FieldName = 'SYSDESCRIB'
      Origin = 'SYSDESCRIB'
      Size = 2040
    end
  end
  object FDTabTestsCh: TFDTable
    Active = True
    IndexFieldNames = 'IDTE'
    Connection = FDConnection
    UpdateOptions.UpdateTableName = 'TESTS'
    TableName = 'TESTS'
    Left = 168
    Top = 80
    object WideStringField1: TWideStringField
      FieldName = 'TEST'
      Origin = 'TEST'
      Required = True
      Size = 2048
    end
    object WideStringField2: TWideStringField
      FieldName = 'DESCRIBTION'
      Origin = 'DESCRIBTION'
      Required = True
      Size = 2048
    end
    object WideStringField3: TWideStringField
      FieldName = 'IDPREV'
      Origin = 'IDPREV'
      Size = 31
    end
    object WideStringField4: TWideStringField
      FieldName = 'IDTE'
      Origin = 'IDTE'
      ProviderFlags = [pfInUpdate, pfInWhere, pfInKey]
      Required = True
      Size = 31
    end
    object WideStringField5: TWideStringField
      FieldName = 'SYSDESCRIB'
      Origin = 'SYSDESCRIB'
      Size = 2040
    end
  end
  object FDTableAnsvCh: TFDTable
    Active = True
    IndexFieldNames = 'IDFA'
    Connection = FDConnection
    UpdateOptions.UpdateTableName = 'FULLANSWERS'
    TableName = 'FULLANSWERS'
    Left = 40
    Top = 80
    object WideStringField6: TWideStringField
      FieldName = 'IDFA'
      Origin = 'IDFA'
      ProviderFlags = [pfInUpdate, pfInWhere, pfInKey]
      Required = True
      Size = 31
    end
    object WideStringField7: TWideStringField
      FieldName = 'ANSVER'
      Origin = 'ANSVER'
      Required = True
      Size = 2048
    end
    object WideStringField8: TWideStringField
      FieldName = 'IDQUESTION'
      Origin = 'IDQUESTION'
      Required = True
      Size = 31
    end
  end
end
