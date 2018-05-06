object dm: Tdm
  OldCreateOrder = False
  Height = 283
  Width = 451
  object FBdriver: TFDPhysFBDriverLink
    Left = 400
    Top = 24
  end
  object FDConnection: TFDConnection
    Params.Strings = (
      'DriverID=FB'
      'User_Name=sysdba'
      'Password=masterkey')
    Left = 216
    Top = 72
  end
  object QgetQuestion: TFDQuery
    Connection = FDConnection
    Left = 112
    Top = 192
  end
  object QgetAnswers: TFDQuery
    Connection = FDConnection
    Left = 296
    Top = 200
  end
end
