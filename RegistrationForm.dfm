object RegistrationWindow: TRegistrationWindow
  Left = 242
  Top = 371
  Width = 871
  Height = 563
  Caption = #1056#1077#1075#1080#1089#1090#1088#1072#1094#1080#1103
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poScreenCenter
  OnClose = FormClose
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object UserPanel: TPanel
    Left = 0
    Top = 0
    Width = 377
    Height = 385
    TabOrder = 0
    object Label1: TLabel
      Left = 0
      Top = 8
      Width = 139
      Height = 13
      Caption = #1060#1072#1084#1080#1083#1080#1103'. '#1048#1084#1103'. '#1054#1090#1095#1077#1089#1090#1074#1086'.: '
    end
    object Label2: TLabel
      Left = 0
      Top = 32
      Width = 86
      Height = 13
      Caption = #1044#1077#1085#1100' '#1088#1086#1078#1076#1077#1085#1080#1103': '
    end
    object Label3: TLabel
      Left = 0
      Top = 56
      Width = 26
      Height = 13
      Caption = #1055#1086#1083': '
    end
    object Label4: TLabel
      Left = 0
      Top = 80
      Width = 74
      Height = 13
      Caption = #1054#1073#1088#1072#1079#1086#1074#1072#1085#1080#1077': '
    end
    object Label5: TLabel
      Left = 0
      Top = 104
      Width = 106
      Height = 13
      Caption = #1059#1095#1077#1073#1085#1086#1077' '#1079#1072#1074#1077#1076#1077#1085#1080#1077': '
    end
    object Label6: TLabel
      Left = 0
      Top = 160
      Width = 84
      Height = 13
      Caption = #1057#1087#1077#1094#1080#1072#1083#1100#1085#1086#1089#1090#1100': '
    end
    object Label7: TLabel
      Left = 0
      Top = 184
      Width = 72
      Height = 13
      Caption = #1057#1090#1072#1078' '#1088#1072#1073#1086#1090#1099': '
    end
    object Label8: TLabel
      Left = 0
      Top = 208
      Width = 175
      Height = 73
      AutoSize = False
      Caption = #1044#1086#1087#1086#1083#1085#1080#1090#1077#1083#1100#1085#1099#1077' '#1074#1086#1079#1084#1086#1078#1085#1086#1089#1090#1080'():  '
      WordWrap = True
    end
    object Label9: TLabel
      Left = 0
      Top = 312
      Width = 119
      Height = 13
      Caption = #1055#1088#1080#1095#1080#1085#1072' '#1073#1077#1079#1088#1072#1073#1086#1090#1080#1094#1099': '
    end
    object Label10: TLabel
      Left = 0
      Top = 336
      Width = 37
      Height = 13
      Caption = #1051#1086#1075#1080#1085': '
    end
    object Label11: TLabel
      Left = 0
      Top = 360
      Width = 44
      Height = 13
      Caption = #1055#1072#1088#1086#1083#1100': '
    end
    object ComboBox1: TComboBox
      Left = 32
      Top = 48
      Width = 145
      Height = 21
      Style = csDropDownList
      ItemHeight = 13
      TabOrder = 0
      OnClick = ComboBox1Click
      Items.Strings = (
        #1052#1091#1078#1089#1082#1086#1081
        #1046#1077#1085#1089#1082#1080#1081)
    end
    object ComboBox2: TComboBox
      Left = 80
      Top = 72
      Width = 145
      Height = 21
      Style = csDropDownList
      ItemHeight = 13
      TabOrder = 1
      OnClick = ComboBox2Click
      Items.Strings = (
        #1057#1088#1077#1076#1085#1077#1077' '#1086#1073#1097#1077#1077
        #1057#1088#1077#1076#1085#1077#1077' '#1087#1088#1086#1092'.'
        #1053#1077' '#1087#1086#1083#1085#1086#1077' '#1074#1099#1089#1096#1077#1077
        #1042#1099#1089#1096#1077#1077)
    end
    object ComboBox4: TComboBox
      Left = 72
      Top = 176
      Width = 145
      Height = 21
      Style = csDropDownList
      ItemHeight = 13
      TabOrder = 2
      OnClick = ComboBox4Click
      Items.Strings = (
        #1073#1077#1079' '#1086#1087#1099#1090#1072
        #1084#1077#1085#1077#1077' 1 '#1075#1086#1076#1072
        '1 '#1075#1086#1076
        #1073#1086#1083#1077#1077' 1 '#1075#1086#1076#1072
        '2 - 3 '#1075#1086#1076#1072
        '3 - 4 '#1075#1086#1076#1072
        #1073#1086#1083#1077#1077' 4 '#1075#1086#1076#1086#1074)
    end
    object ComboBox5: TComboBox
      Left = 120
      Top = 304
      Width = 145
      Height = 21
      Style = csDropDownList
      ItemHeight = 13
      TabOrder = 3
      OnClick = ComboBox5Click
      Items.Strings = (
        '')
    end
    object Edit5: TEdit
      Left = 240
      Top = 152
      Width = 121
      Height = 21
      TabOrder = 4
      OnClick = Edit5Click
      OnKeyPress = Edit5KeyPress
    end
    object Edit6: TEdit
      Left = 264
      Top = 304
      Width = 105
      Height = 21
      TabOrder = 5
      OnClick = Edit6Click
      OnKeyPress = Edit6KeyPress
    end
    object DBEdit1: TDBEdit
      Left = 144
      Top = 0
      Width = 121
      Height = 21
      DataField = 'FIO'
      DataSource = DataModule1.UserSource
      TabOrder = 6
      OnClick = DBEdit1Click
      OnKeyPress = DBEdit1KeyPress
    end
    object DBEdit2: TDBEdit
      Left = 88
      Top = 24
      Width = 121
      Height = 21
      DataField = 'BirthDate'
      DataSource = DataModule1.UserSource
      TabOrder = 7
      OnClick = DBEdit2Click
      OnKeyPress = DBEdit2KeyPress
    end
    object DBMemo1: TDBMemo
      Left = 104
      Top = 96
      Width = 185
      Height = 49
      DataField = 'EducationPlaces'
      DataSource = DataModule1.UserSource
      TabOrder = 8
    end
    object DBMemo2: TDBMemo
      Left = 176
      Top = 200
      Width = 185
      Height = 89
      DataField = 'AdditionalAbilities'
      DataSource = DataModule1.UserSource
      TabOrder = 9
    end
    object DBEdit3: TDBEdit
      Left = 40
      Top = 328
      Width = 121
      Height = 21
      DataField = 'Login'
      DataSource = DataModule1.UserSource
      TabOrder = 10
      OnClick = DBEdit3Click
      OnKeyPress = DBEdit3KeyPress
    end
    object DBEdit4: TDBEdit
      Left = 48
      Top = 352
      Width = 121
      Height = 21
      DataField = 'Password'
      DataSource = DataModule1.UserSource
      TabOrder = 11
      OnClick = DBEdit4Click
      OnKeyPress = DBEdit4KeyPress
    end
    object ComboBox3: TComboBox
      Left = 88
      Top = 152
      Width = 145
      Height = 21
      Style = csDropDownList
      ItemHeight = 13
      Sorted = True
      TabOrder = 12
      OnClick = ComboBox3Click
    end
  end
  object CompanyPanel: TPanel
    Left = 376
    Top = 0
    Width = 377
    Height = 353
    TabOrder = 1
    object Label12: TLabel
      Left = 0
      Top = 24
      Width = 124
      Height = 13
      Caption = #1053#1072#1079#1074#1072#1085#1080#1077' '#1087#1088#1077#1076#1087#1088#1080#1103#1090#1080#1103': '
    end
    object Label13: TLabel
      Left = 0
      Top = 48
      Width = 37
      Height = 13
      Caption = #1040#1076#1088#1077#1089': '
    end
    object Label14: TLabel
      Left = 0
      Top = 128
      Width = 113
      Height = 13
      Caption = #1058#1088#1077#1073#1091#1077#1084#1072#1103' '#1074#1072#1082#1072#1085#1089#1080#1103': '
    end
    object Label23: TLabel
      Left = 0
      Top = 72
      Width = 51
      Height = 13
      Caption = #1058#1077#1083#1077#1092#1086#1085': '
    end
    object Label24: TLabel
      Left = 0
      Top = 96
      Width = 103
      Height = 13
      Caption = #1069#1083#1077#1082#1090#1088#1086#1085#1085#1072#1103' '#1087#1086#1095#1090#1072': '
    end
    object ComboBox6: TComboBox
      Left = 120
      Top = 120
      Width = 121
      Height = 21
      Style = csDropDownList
      ItemHeight = 13
      Sorted = True
      TabOrder = 0
      OnClick = ComboBox6Click
    end
    object Edit9: TEdit
      Left = 248
      Top = 120
      Width = 97
      Height = 21
      TabOrder = 1
      OnClick = Edit9Click
      OnKeyPress = Edit9KeyPress
    end
    object RequestPanel: TPanel
      Left = 0
      Top = 152
      Width = 377
      Height = 201
      TabOrder = 2
      object Label15: TLabel
        Left = 0
        Top = 8
        Width = 74
        Height = 13
        Caption = #1054#1073#1088#1072#1079#1086#1074#1072#1085#1080#1077': '
      end
      object Label16: TLabel
        Left = 0
        Top = 32
        Width = 26
        Height = 13
        Caption = #1055#1086#1083': '
      end
      object Label17: TLabel
        Left = 0
        Top = 56
        Width = 48
        Height = 13
        Caption = #1042#1086#1079#1088#1072#1089#1090': '
      end
      object Label18: TLabel
        Left = 0
        Top = 80
        Width = 72
        Height = 13
        Caption = #1057#1090#1072#1078' '#1088#1072#1073#1086#1090#1099': '
      end
      object Label19: TLabel
        Left = 0
        Top = 104
        Width = 75
        Height = 13
        Caption = #1056#1072#1073#1086#1095#1080#1081' '#1076#1077#1085#1100': '
      end
      object Label20: TLabel
        Left = 0
        Top = 128
        Width = 79
        Height = 13
        Caption = #1042#1099#1093#1086#1076#1085#1099#1077' '#1076#1085#1080': '
      end
      object Label21: TLabel
        Left = 0
        Top = 152
        Width = 133
        Height = 13
        Caption = #1054#1090#1087#1091#1089#1082'('#1082#1086#1083#1080#1095#1077#1089#1090#1074#1072' '#1076#1085#1077#1081'): '
      end
      object Label22: TLabel
        Left = 0
        Top = 176
        Width = 98
        Height = 13
        Caption = #1047#1072#1088#1072#1073#1086#1090#1085#1072#1103' '#1087#1083#1072#1090#1072': '
      end
      object ComboBox7: TComboBox
        Left = 80
        Top = 0
        Width = 145
        Height = 21
        Style = csDropDownList
        ItemHeight = 13
        TabOrder = 0
        OnClick = ComboBox7Click
        Items.Strings = (
          #1057#1088#1077#1076#1085#1077#1077' '#1086#1073#1097#1077#1077
          #1057#1088#1077#1076#1085#1077#1077' '#1087#1088#1086#1092'.'
          #1053#1077' '#1087#1086#1083#1085#1086#1077' '#1074#1099#1089#1096#1077#1077
          #1042#1099#1089#1096#1077#1077)
      end
      object ComboBox8: TComboBox
        Left = 32
        Top = 24
        Width = 145
        Height = 21
        Style = csDropDownList
        ItemHeight = 13
        TabOrder = 1
        OnClick = ComboBox8Click
        Items.Strings = (
          #1052#1091#1078#1089#1082#1086#1081
          #1046#1077#1085#1089#1082#1080#1081)
      end
      object ComboBox9: TComboBox
        Left = 80
        Top = 72
        Width = 145
        Height = 21
        Style = csDropDownList
        ItemHeight = 13
        TabOrder = 2
        OnClick = ComboBox9Click
        Items.Strings = (
          #1073#1077#1079' '#1086#1087#1099#1090#1072
          #1084#1077#1085#1077#1077' 1 '#1075#1086#1076#1072
          '1 '#1075#1086#1076
          #1073#1086#1083#1077#1077' 1 '#1075#1086#1076#1072
          '2 - 3 '#1075#1086#1076#1072
          '3 - 4 '#1075#1086#1076#1072
          #1073#1086#1083#1077#1077' 4 '#1075#1086#1076#1086#1074)
      end
      object DBEdit7: TDBEdit
        Left = 48
        Top = 48
        Width = 121
        Height = 21
        DataField = 'Age'
        DataSource = DataModule1.CompanySource
        TabOrder = 3
        OnClick = DBEdit7Click
        OnKeyPress = DBEdit7KeyPress
      end
      object DBEdit8: TDBEdit
        Left = 80
        Top = 96
        Width = 121
        Height = 21
        DataField = 'WorkDay'
        DataSource = DataModule1.CompanySource
        TabOrder = 4
        OnClick = DBEdit8Click
        OnKeyPress = DBEdit8KeyPress
      end
      object DBEdit9: TDBEdit
        Left = 80
        Top = 120
        Width = 121
        Height = 21
        DataField = 'Weekend'
        DataSource = DataModule1.CompanySource
        TabOrder = 5
        OnClick = DBEdit9Click
        OnKeyPress = DBEdit9KeyPress
      end
      object DBEdit10: TDBEdit
        Left = 136
        Top = 144
        Width = 121
        Height = 21
        DataField = 'Vacation'
        DataSource = DataModule1.CompanySource
        TabOrder = 6
        OnClick = DBEdit10Click
        OnKeyPress = DBEdit10KeyPress
      end
      object DBEdit11: TDBEdit
        Left = 104
        Top = 168
        Width = 121
        Height = 21
        DataField = 'Salary'
        DataSource = DataModule1.CompanySource
        TabOrder = 7
        OnClick = DBEdit11Click
        OnKeyPress = DBEdit11KeyPress
      end
    end
    object DBEdit5: TDBEdit
      Left = 128
      Top = 16
      Width = 121
      Height = 21
      DataField = 'Name'
      DataSource = DataModule1.CompanySource
      TabOrder = 3
      OnClick = DBEdit5Click
      OnKeyPress = DBEdit5KeyPress
    end
    object DBEdit6: TDBEdit
      Left = 40
      Top = 40
      Width = 121
      Height = 21
      DataField = 'Address'
      DataSource = DataModule1.CompanySource
      TabOrder = 4
      OnClick = DBEdit6Click
      OnKeyPress = DBEdit6KeyPress
    end
    object DBEdit12: TDBEdit
      Left = 56
      Top = 64
      Width = 121
      Height = 21
      DataField = 'Telephone'
      DataSource = DataModule1.CompanySource
      TabOrder = 5
      OnClick = DBEdit12Click
      OnKeyPress = DBEdit12KeyPress
    end
    object DBEdit13: TDBEdit
      Left = 104
      Top = 88
      Width = 121
      Height = 21
      DataField = 'Email'
      DataSource = DataModule1.CompanySource
      TabOrder = 6
      OnClick = DBEdit13Click
      OnKeyPress = DBEdit13KeyPress
    end
  end
  object GoToMainFormButton: TButton
    Left = 0
    Top = 392
    Width = 75
    Height = 25
    Caption = 'GoToMainFormButton'
    TabOrder = 2
    OnClick = GoToMainFormButtonClick
  end
  object RegistrationButton: TButton
    Left = 272
    Top = 392
    Width = 107
    Height = 25
    Caption = 'RegistrationButton'
    TabOrder = 3
    OnClick = RegistrationButtonClick
  end
end
