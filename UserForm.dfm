object UserWindow: TUserWindow
  Left = 175
  Top = 167
  Width = 997
  Height = 817
  Caption = #1055#1086#1083#1100#1079#1086#1074#1072#1090#1100#1077#1083#1100
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnClose = FormClose
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object EditButton: TButton
    Left = 128
    Top = 232
    Width = 137
    Height = 25
    Caption = #1056#1077#1076#1072#1082#1090#1080#1088#1086#1074#1072#1090#1100
    TabOrder = 3
    OnClick = EditButtonClick
  end
  object SearchButton: TButton
    Left = 336
    Top = 384
    Width = 75
    Height = 25
    Caption = #1055#1086#1080#1089#1082
    TabOrder = 2
    OnClick = SearchButtonClick
  end
  object UserPanel: TPanel
    Left = 0
    Top = 0
    Width = 409
    Height = 385
    TabOrder = 0
    object Label1: TLabel
      Left = 8
      Top = 8
      Width = 130
      Height = 13
      Caption = #1060#1072#1084#1080#1083#1080#1103' '#1048#1084#1103' '#1054#1090#1095#1077#1089#1090#1074#1086': '
    end
    object Label2: TLabel
      Left = 8
      Top = 32
      Width = 86
      Height = 13
      Caption = #1044#1077#1085#1100' '#1088#1086#1078#1076#1077#1085#1080#1077': '
    end
    object Label3: TLabel
      Left = 8
      Top = 56
      Width = 26
      Height = 13
      Caption = #1055#1086#1083': '
    end
    object Label4: TLabel
      Left = 8
      Top = 80
      Width = 77
      Height = 13
      Caption = #1054#1073#1088#1072#1079#1086#1074#1072#1085#1080#1077':  '
    end
    object Label5: TLabel
      Left = 8
      Top = 104
      Width = 106
      Height = 13
      Caption = #1059#1095#1077#1073#1085#1086#1077' '#1079#1072#1074#1077#1076#1077#1085#1080#1077': '
    end
    object Label6: TLabel
      Left = 8
      Top = 200
      Width = 84
      Height = 13
      Caption = #1057#1087#1077#1094#1080#1072#1083#1100#1085#1086#1089#1090#1100': '
    end
    object Label7: TLabel
      Left = 8
      Top = 224
      Width = 72
      Height = 13
      Caption = #1057#1090#1072#1078' '#1088#1072#1073#1086#1090#1099': '
    end
    object Label8: TLabel
      Left = 8
      Top = 248
      Width = 160
      Height = 13
      Caption = #1044#1086#1087#1086#1083#1085#1080#1090#1077#1083#1100#1085#1099#1077' '#1074#1086#1079#1084#1086#1078#1085#1086#1090#1080': '
    end
    object Label9: TLabel
      Left = 8
      Top = 344
      Width = 119
      Height = 13
      Caption = #1055#1088#1080#1095#1080#1085#1072' '#1073#1077#1079#1088#1072#1073#1086#1090#1080#1094#1099': '
    end
    object DBText1: TDBText
      Left = 144
      Top = 8
      Width = 42
      Height = 13
      AutoSize = True
      DataField = 'FIO'
      DataSource = DataModule1.UserSource
    end
    object DBText2: TDBText
      Left = 96
      Top = 32
      Width = 42
      Height = 13
      AutoSize = True
      DataField = 'BirthDate'
      DataSource = DataModule1.UserSource
    end
    object DBText3: TDBText
      Left = 40
      Top = 56
      Width = 42
      Height = 13
      AutoSize = True
      DataField = 'Sex'
      DataSource = DataModule1.UserSource
    end
    object DBText4: TDBText
      Left = 88
      Top = 80
      Width = 42
      Height = 13
      AutoSize = True
      DataField = 'Education'
      DataSource = DataModule1.UserSource
    end
    object DBText5: TDBText
      Left = 120
      Top = 104
      Width = 42
      Height = 13
      AutoSize = True
      DataField = 'EducationPlaces'
      DataSource = DataModule1.UserSource
    end
    object DBText6: TDBText
      Left = 96
      Top = 128
      Width = 42
      Height = 13
      AutoSize = True
      DataField = 'Job'
      DataSource = DataModule1.UserSource
    end
    object DBText7: TDBText
      Left = 80
      Top = 152
      Width = 42
      Height = 13
      AutoSize = True
      DataField = 'Experience'
      DataSource = DataModule1.UserSource
    end
    object DBText8: TDBText
      Left = 168
      Top = 176
      Width = 42
      Height = 13
      AutoSize = True
      DataField = 'AdditionalAbilities'
      DataSource = DataModule1.UserSource
    end
    object DBText9: TDBText
      Left = 128
      Top = 344
      Width = 42
      Height = 13
      AutoSize = True
      DataField = 'ReasonOfBeingUnemployed'
      DataSource = DataModule1.UserSource
    end
    object DBEdit1: TDBEdit
      Left = 144
      Top = 0
      Width = 121
      Height = 21
      DataField = 'FIO'
      DataSource = DataModule1.UserSource
      TabOrder = 0
      OnClick = DBEdit1Click
    end
    object DBEdit2: TDBEdit
      Left = 96
      Top = 24
      Width = 121
      Height = 21
      DataField = 'BirthDate'
      DataSource = DataModule1.UserSource
      TabOrder = 1
      OnClick = DBEdit2Click
    end
    object DBMemo1: TDBMemo
      Left = 112
      Top = 96
      Width = 185
      Height = 89
      DataField = 'EducationPlaces'
      DataSource = DataModule1.UserSource
      TabOrder = 2
    end
    object Edit1: TEdit
      Left = 248
      Top = 192
      Width = 121
      Height = 21
      TabOrder = 3
      Text = 'Edit1'
      OnClick = Edit1Click
    end
    object DBMemo2: TDBMemo
      Left = 168
      Top = 240
      Width = 185
      Height = 89
      DataField = 'AdditionalAbilities'
      DataSource = DataModule1.UserSource
      TabOrder = 4
    end
    object Edit2: TEdit
      Left = 280
      Top = 336
      Width = 121
      Height = 21
      TabOrder = 5
      Text = 'Edit2'
      OnClick = Edit2Click
    end
    object DBComboBox1: TDBComboBox
      Left = 40
      Top = 48
      Width = 145
      Height = 21
      DataField = 'Sex'
      DataSource = DataModule1.UserSource
      ItemHeight = 13
      Items.Strings = (
        #1052#1091#1078#1089#1082#1086#1081
        #1046#1077#1085#1089#1082#1080#1081)
      TabOrder = 6
      OnClick = DBComboBox1Click
    end
    object DBComboBox2: TDBComboBox
      Left = 88
      Top = 72
      Width = 145
      Height = 21
      DataField = 'Education'
      DataSource = DataModule1.UserSource
      ItemHeight = 13
      Items.Strings = (
        #1057#1088#1077#1076#1085#1077#1077
        #1053#1077' '#1087#1086#1083#1085#1086#1077' '#1074#1099#1089#1096#1077#1077
        #1042#1099#1089#1096#1077#1077)
      TabOrder = 7
      OnClick = DBComboBox2Click
    end
    object DBComboBox3: TDBComboBox
      Left = 96
      Top = 192
      Width = 145
      Height = 21
      DataField = 'Job'
      DataSource = DataModule1.UserSource
      ItemHeight = 13
      TabOrder = 8
      OnClick = DBComboBox3Click
    end
    object DBComboBox4: TDBComboBox
      Left = 88
      Top = 216
      Width = 145
      Height = 21
      DataField = 'Experience'
      DataSource = DataModule1.UserSource
      ItemHeight = 13
      Items.Strings = (
        #1084#1077#1085#1077#1077' 1 '#1075#1086#1076#1072
        '1 '#1075#1086#1076
        #1073#1086#1083#1077#1077' 1 '#1075#1086#1076#1072
        '2 - 3 '#1075#1086#1076#1072
        '3 - 4 '#1075#1086#1076#1072
        #1073#1086#1083#1077#1077' 4 '#1075#1086#1076#1086#1074)
      TabOrder = 9
      OnClick = DBComboBox4Click
    end
    object DBComboBox5: TDBComboBox
      Left = 128
      Top = 336
      Width = 145
      Height = 21
      DataField = 'ReasonOfBeingUnemployed'
      DataSource = DataModule1.UserSource
      ItemHeight = 13
      TabOrder = 10
      OnClick = DBComboBox5Click
    end
  end
  object ConfirmButton: TButton
    Left = 272
    Top = 384
    Width = 137
    Height = 25
    Caption = #1055#1086#1090#1074#1077#1088#1076#1080#1090#1100
    TabOrder = 4
    OnClick = ConfirmButtonClick
  end
  object GoToMainButton: TButton
    Left = 0
    Top = 384
    Width = 75
    Height = 25
    Caption = #1053#1072#1079#1072#1076
    TabOrder = 1
    OnClick = GoToMainButtonClick
  end
  object EditCancelButton: TButton
    Left = 0
    Top = 384
    Width = 75
    Height = 25
    Caption = #1054#1090#1084#1077#1085#1080#1090#1100
    TabOrder = 5
    OnClick = EditCancelButtonClick
  end
  object SearchPanel: TPanel
    Left = 464
    Top = 0
    Width = 457
    Height = 729
    TabOrder = 6
    object StartSearchButton: TButton
      Left = 80
      Top = 168
      Width = 75
      Height = 25
      Caption = #1053#1072#1095#1072#1090#1100' '#1087#1086#1080#1089#1082
      TabOrder = 0
      OnClick = StartSearchButtonClick
    end
    object DisplaySearchPanel: TPanel
      Left = 0
      Top = 208
      Width = 457
      Height = 529
      TabOrder = 1
      object Label10: TLabel
        Left = 8
        Top = 208
        Width = 109
        Height = 13
        Caption = #1053#1072#1079#1074#1072#1085#1080#1077' '#1082#1086#1084#1087#1072#1085#1080#1080': '
      end
      object Label11: TLabel
        Left = 8
        Top = 232
        Width = 37
        Height = 13
        Caption = #1040#1076#1088#1077#1089': '
      end
      object Label12: TLabel
        Left = 8
        Top = 256
        Width = 51
        Height = 13
        Caption = #1058#1077#1083#1077#1092#1086#1085': '
      end
      object Label13: TLabel
        Left = 8
        Top = 280
        Width = 103
        Height = 13
        Caption = #1069#1083#1077#1082#1090#1088#1086#1085#1085#1072#1103' '#1087#1086#1095#1090#1072': '
      end
      object Label14: TLabel
        Left = 8
        Top = 304
        Width = 113
        Height = 13
        Caption = #1058#1088#1077#1073#1091#1077#1084#1072#1103' '#1074#1072#1082#1072#1085#1089#1080#1103': '
      end
      object Label15: TLabel
        Left = 8
        Top = 328
        Width = 48
        Height = 13
        Caption = #1042#1086#1079#1088#1072#1089#1090': '
      end
      object Label16: TLabel
        Left = 8
        Top = 352
        Width = 26
        Height = 13
        Caption = #1055#1086#1083': '
      end
      object Label17: TLabel
        Left = 8
        Top = 376
        Width = 74
        Height = 13
        Caption = #1054#1073#1088#1072#1079#1086#1074#1072#1085#1080#1077': '
      end
      object Label18: TLabel
        Left = 8
        Top = 400
        Width = 72
        Height = 13
        Caption = #1057#1090#1072#1078' '#1088#1072#1073#1086#1090#1099': '
      end
      object Label19: TLabel
        Left = 8
        Top = 424
        Width = 75
        Height = 13
        Caption = #1056#1072#1073#1086#1095#1080#1081' '#1076#1077#1085#1100': '
      end
      object Label20: TLabel
        Left = 8
        Top = 448
        Width = 56
        Height = 13
        Caption = #1042#1099#1093#1086#1076#1085#1086#1081': '
      end
      object Label21: TLabel
        Left = 8
        Top = 472
        Width = 42
        Height = 13
        Caption = #1054#1090#1087#1091#1089#1082': '
      end
      object Label22: TLabel
        Left = 8
        Top = 496
        Width = 98
        Height = 13
        Caption = #1047#1072#1088#1072#1073#1086#1090#1085#1072#1103' '#1087#1083#1072#1090#1072': '
      end
      object DBText10: TDBText
        Left = 120
        Top = 208
        Width = 48
        Height = 13
        AutoSize = True
        DataField = 'Name'
        DataSource = DataModule1.CompanySource
      end
      object DBText11: TDBText
        Left = 48
        Top = 232
        Width = 48
        Height = 13
        AutoSize = True
        DataField = 'Address'
        DataSource = DataModule1.CompanySource
      end
      object DBText12: TDBText
        Left = 64
        Top = 256
        Width = 48
        Height = 13
        AutoSize = True
        DataField = 'Telephone'
        DataSource = DataModule1.CompanySource
      end
      object DBText13: TDBText
        Left = 120
        Top = 280
        Width = 48
        Height = 13
        AutoSize = True
        DataField = 'Email'
        DataSource = DataModule1.CompanySource
      end
      object DBText14: TDBText
        Left = 128
        Top = 304
        Width = 48
        Height = 13
        AutoSize = True
        DataField = 'Job'
        DataSource = DataModule1.CompanySource
      end
      object DBText15: TDBText
        Left = 40
        Top = 352
        Width = 48
        Height = 13
        AutoSize = True
        DataField = 'Sex'
        DataSource = DataModule1.CompanySource
      end
      object DBText16: TDBText
        Left = 88
        Top = 376
        Width = 48
        Height = 13
        AutoSize = True
        DataField = 'Education'
        DataSource = DataModule1.CompanySource
      end
      object DBText17: TDBText
        Left = 88
        Top = 400
        Width = 48
        Height = 13
        AutoSize = True
        DataField = 'Experience'
        DataSource = DataModule1.CompanySource
      end
      object DBText18: TDBText
        Left = 64
        Top = 328
        Width = 48
        Height = 13
        AutoSize = True
        DataField = 'Age'
        DataSource = DataModule1.CompanySource
      end
      object DBText19: TDBText
        Left = 88
        Top = 424
        Width = 48
        Height = 13
        AutoSize = True
        DataField = 'WorkDay'
        DataSource = DataModule1.CompanySource
      end
      object DBText20: TDBText
        Left = 72
        Top = 448
        Width = 48
        Height = 13
        AutoSize = True
        DataField = 'Weekend'
        DataSource = DataModule1.CompanySource
      end
      object DBText21: TDBText
        Left = 56
        Top = 472
        Width = 48
        Height = 13
        AutoSize = True
        DataField = 'Vacation'
        DataSource = DataModule1.CompanySource
      end
      object DBText22: TDBText
        Left = 112
        Top = 496
        Width = 48
        Height = 13
        AutoSize = True
        DataField = 'Salary'
        DataSource = DataModule1.CompanySource
      end
      object DBGrid1: TDBGrid
        Left = 0
        Top = 0
        Width = 449
        Height = 201
        DataSource = DataModule1.CompanySource
        TabOrder = 0
        TitleFont.Charset = DEFAULT_CHARSET
        TitleFont.Color = clWindowText
        TitleFont.Height = -11
        TitleFont.Name = 'MS Sans Serif'
        TitleFont.Style = []
        OnCellClick = DBGrid1CellClick
        OnDblClick = DBGrid1DblClick
        Columns = <
          item
            Expanded = False
            FieldName = 'Name'
            Title.Caption = #1053#1072#1079#1074#1072#1085#1080#1077' '#1082#1086#1084#1087#1072#1085#1080#1080
            Width = 110
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'Address'
            Title.Caption = #1040#1076#1088#1077#1089
            Width = 100
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'Telephone'
            Title.Caption = #1058#1077#1083#1077#1092#1086#1085
            Width = 80
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'Email'
            Title.Caption = #1069#1083#1077#1082#1090#1088#1086#1085#1085#1072#1103' '#1087#1086#1095#1090#1072
            Width = 110
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'Job'
            Title.Caption = #1058#1088#1077#1073#1091#1077#1084#1072#1103' '#1074#1072#1082#1072#1085#1089#1080#1103
            Width = 120
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'Age'
            Title.Caption = #1042#1086#1079#1088#1072#1089#1090
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'Sex'
            Title.Caption = #1055#1086#1083
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'Education'
            Title.Caption = #1054#1073#1088#1072#1079#1086#1074#1072#1085#1080#1077
            Width = 80
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'Experience'
            Title.Caption = #1057#1090#1072#1078' '#1088#1072#1073#1086#1090#1099
            Width = 80
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'WorkDay'
            Title.Caption = #1056#1072#1073#1086#1095#1080#1081' '#1076#1077#1085#1100
            Width = 90
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'Weekend'
            Title.Caption = #1042#1099#1093#1086#1076#1085#1086#1081
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'Vacation'
            Title.Caption = #1054#1090#1087#1091#1089#1082
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'Salary'
            Title.Caption = #1047#1072#1088#1072#1073#1086#1090#1085#1072#1103' '#1087#1083#1072#1090#1072
            Width = 100
            Visible = True
          end>
      end
    end
    object BackToUserButton: TButton
      Left = 0
      Top = 168
      Width = 75
      Height = 25
      Caption = #1053#1072#1079#1072#1076
      TabOrder = 2
      OnClick = BackToUserButtonClick
    end
    object CheckBox1: TCheckBox
      Left = 0
      Top = 8
      Width = 97
      Height = 17
      Caption = #1042#1086#1079#1088#1072#1089#1090
      TabOrder = 3
      OnClick = CheckBox1Click
    end
    object CheckBox2: TCheckBox
      Left = 136
      Top = 8
      Width = 97
      Height = 17
      Caption = #1055#1086#1083
      TabOrder = 4
      OnClick = CheckBox2Click
    end
    object CheckBox3: TCheckBox
      Left = 296
      Top = 8
      Width = 97
      Height = 17
      Caption = #1054#1073#1088#1072#1079#1086#1074#1072#1085#1080#1077
      TabOrder = 5
      OnClick = CheckBox3Click
    end
    object CheckBox4: TCheckBox
      Left = 0
      Top = 56
      Width = 97
      Height = 17
      Caption = #1042#1072#1082#1072#1085#1089#1080#1103
      TabOrder = 6
      OnClick = CheckBox4Click
    end
    object CheckBox5: TCheckBox
      Left = 160
      Top = 56
      Width = 97
      Height = 17
      Caption = #1057#1090#1072#1078' '#1088#1072#1073#1086#1090#1099
      TabOrder = 7
      OnClick = CheckBox5Click
    end
    object DBComboBox6: TDBComboBox
      Left = 136
      Top = 32
      Width = 145
      Height = 21
      Style = csDropDownList
      DataField = 'Sex'
      DataSource = DataModule1.UserSource
      ItemHeight = 13
      Items.Strings = (
        #1052#1091#1078#1089#1082#1086#1081
        #1046#1077#1085#1089#1082#1080#1081)
      TabOrder = 8
    end
    object DBComboBox7: TDBComboBox
      Left = 296
      Top = 32
      Width = 145
      Height = 21
      Style = csDropDownList
      DataField = 'Education'
      DataSource = DataModule1.UserSource
      ItemHeight = 13
      Items.Strings = (
        #1057#1088#1077#1076#1085#1077#1077
        #1053#1077' '#1087#1086#1083#1085#1086#1077' '#1074#1099#1089#1096#1077#1077
        #1042#1099#1089#1096#1077#1077)
      TabOrder = 9
    end
    object DBComboBox8: TDBComboBox
      Left = 0
      Top = 80
      Width = 145
      Height = 21
      Style = csDropDownList
      DataField = 'Job'
      DataSource = DataModule1.UserSource
      ItemHeight = 13
      TabOrder = 10
      OnClick = DBComboBox8Click
    end
    object DBComboBox9: TDBComboBox
      Left = 160
      Top = 80
      Width = 145
      Height = 21
      Style = csDropDownList
      DataField = 'Experience'
      DataSource = DataModule1.UserSource
      ItemHeight = 13
      Items.Strings = (
        #1073#1077#1079' '#1086#1087#1099#1090#1072
        #1084#1077#1085#1077#1077' 1 '#1075#1086#1076#1072
        '1 '#1075#1086#1076
        #1073#1086#1083#1077#1077' 1 '#1075#1086#1076#1072
        '2 - 3 '#1075#1086#1076#1086#1074
        '3 - 4 '#1075#1086#1076#1086#1074
        #1073#1086#1083#1077#1077' 4 '#1075#1086#1076#1086#1074)
      TabOrder = 11
    end
    object CheckBox6: TCheckBox
      Left = 320
      Top = 56
      Width = 121
      Height = 17
      Caption = #1047#1072#1088#1072#1073#1086#1090#1085#1072#1103' '#1087#1083#1072#1090#1072
      TabOrder = 12
      OnClick = CheckBox6Click
    end
    object Edit3: TEdit
      Left = 320
      Top = 80
      Width = 121
      Height = 21
      TabOrder = 13
      Text = 'Edit3'
      OnClick = Edit3Click
    end
    object CheckBox7: TCheckBox
      Left = 0
      Top = 136
      Width = 97
      Height = 17
      Caption = #1041#1077#1079' '#1092#1080#1083#1100#1090#1088#1072
      TabOrder = 14
      OnClick = CheckBox7Click
    end
    object Edit4: TEdit
      Left = 0
      Top = 104
      Width = 121
      Height = 21
      TabOrder = 15
      Text = 'Edit4'
      OnClick = Edit4Click
    end
    object Edit5: TEdit
      Left = 0
      Top = 32
      Width = 121
      Height = 21
      TabOrder = 16
      Text = 'Edit5'
    end
  end
end
