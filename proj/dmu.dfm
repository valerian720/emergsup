object dm: Tdm
  OldCreateOrder = False
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
      'DriverID=FB')
    Connected = True
    Left = 216
    Top = 72
  end
  object spGetFaceTest: TFDStoredProc
    Connection = FDConnection
    Left = 96
    Top = 192
  end
  object spGetAnswers: TFDStoredProc
    Connection = FDConnection
    Left = 240
    Top = 200
  end
end
