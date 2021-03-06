object AdminWindow: TAdminWindow
  Left = 485
  Top = 275
  Width = 491
  Height = 403
  Caption = #1040#1076#1084#1080#1085
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  OnClose = FormClose
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object PageControl1: TPageControl
    Left = 8
    Top = 24
    Width = 449
    Height = 265
    ActivePage = UsersSheet
    TabIndex = 0
    TabOrder = 0
    OnChange = PageControl1Change
    object UsersSheet: TTabSheet
      Caption = #1056#1072#1073#1086#1095#1080#1077
      object DBGrid1: TDBGrid
        Left = 0
        Top = 0
        Width = 441
        Height = 233
        DataSource = DataModule1.UserSource
        TabOrder = 0
        TitleFont.Charset = DEFAULT_CHARSET
        TitleFont.Color = clWindowText
        TitleFont.Height = -11
        TitleFont.Name = 'MS Sans Serif'
        TitleFont.Style = []
        Columns = <
          item
            Expanded = False
            FieldName = 'FIO'
            Title.Caption = #1060#1072#1084#1080#1083#1080#1103' '#1048#1084#1103' '#1054#1090#1095#1077#1089#1090#1074#1086
            Width = 130
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'BirthDate'
            Title.Caption = #1044#1077#1085#1100' '#1088#1086#1078#1076#1077#1085#1080#1077
            Width = 85
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
            Width = 75
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'EducationPlaces'
            Title.Caption = #1059#1095#1077#1073#1085#1086#1077' '#1079#1072#1074#1077#1076#1077#1085#1080#1077
            Width = 105
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'Job'
            Title.Caption = #1057#1087#1077#1094#1080#1072#1083#1100#1085#1086#1089#1090#1100
            Width = 84
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'Experience'
            Title.Caption = #1057#1090#1072#1078' '#1088#1072#1073#1086#1090#1099
            Width = 71
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'AdditionalAbilities'
            Title.Caption = #1044#1086#1087#1086#1083#1085#1080#1090#1077#1083#1100#1085#1099#1077' '#1074#1086#1079#1084#1086#1078#1085#1086#1089#1090#1080
            Width = 165
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'ReasonOfBeingUnemployed'
            Title.Caption = #1055#1088#1080#1095#1080#1085#1072' '#1073#1077#1079#1088#1072#1073#1086#1090#1080#1094#1099
            Width = 120
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'Login'
            Title.Caption = #1051#1086#1075#1080#1085
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'Password'
            Title.Caption = #1055#1072#1088#1086#1083#1100
            Visible = True
          end>
      end
    end
    object CompaniesSheet: TTabSheet
      Caption = #1050#1086#1084#1087#1072#1085#1080#1080
      ImageIndex = 1
      object DBGrid2: TDBGrid
        Left = 0
        Top = 0
        Width = 441
        Height = 233
        DataSource = DataModule1.CompanySource
        TabOrder = 0
        TitleFont.Charset = DEFAULT_CHARSET
        TitleFont.Color = clWindowText
        TitleFont.Height = -11
        TitleFont.Name = 'MS Sans Serif'
        TitleFont.Style = []
        Columns = <
          item
            Expanded = False
            FieldName = 'Name'
            Title.Caption = #1053#1072#1079#1074#1072#1085#1080#1077' '#1087#1088#1077#1087#1088#1080#1103#1090#1080#1103
            Width = 120
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'Address'
            Title.Caption = #1040#1076#1088#1077#1089
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'Job'
            Title.Caption = #1058#1088#1077#1073#1091#1077#1084#1072#1103' '#1074#1072#1082#1072#1085#1089#1080#1103
            Width = 115
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'Education'
            Title.Caption = #1054#1073#1088#1072#1079#1086#1074#1072#1085#1080#1077
            Width = 75
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'Experience'
            Title.Caption = #1057#1090#1072#1078' '#1088#1072#1073#1086#1090#1099
            Width = 72
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
            FieldName = 'Age'
            Title.Caption = #1042#1086#1079#1088#1072#1089#1090
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'WorkDay'
            Title.Caption = #1056#1072#1073#1086#1095#1080#1081' '#1076#1077#1085#1100
            Width = 75
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'Weekend'
            Title.Caption = #1042#1099#1093#1086#1076#1085#1099#1077
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'Vacation'
            Title.Caption = #1054#1090#1087#1091#1089#1082#1085#1099#1077
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'Salary'
            Title.Caption = #1047#1072#1088#1087#1083#1072#1090#1072
            Visible = True
          end>
      end
    end
    object JobsSheet: TTabSheet
      Caption = #1056#1072#1073#1086#1090#1072
      ImageIndex = 2
      object DBGrid3: TDBGrid
        Left = 0
        Top = 8
        Width = 433
        Height = 217
        DataSource = DataModule1.JobsSource
        TabOrder = 0
        TitleFont.Charset = DEFAULT_CHARSET
        TitleFont.Color = clWindowText
        TitleFont.Height = -11
        TitleFont.Name = 'MS Sans Serif'
        TitleFont.Style = []
        Columns = <
          item
            Expanded = False
            FieldName = 'Job'
            Title.Caption = #1056#1072#1073#1086#1090#1072
            Visible = True
          end>
      end
    end
    object ReasonsSheet: TTabSheet
      Caption = #1055#1088#1080#1095#1080#1085#1099' '#1073#1077#1079#1088#1072#1073#1086#1090#1080#1094#1099
      ImageIndex = 3
      object DBGrid4: TDBGrid
        Left = 0
        Top = 8
        Width = 441
        Height = 225
        DataSource = DataModule1.ReasonsSource
        TabOrder = 0
        TitleFont.Charset = DEFAULT_CHARSET
        TitleFont.Color = clWindowText
        TitleFont.Height = -11
        TitleFont.Name = 'MS Sans Serif'
        TitleFont.Style = []
        Columns = <
          item
            Expanded = False
            FieldName = 'ReasonOfBeingSucked'
            Title.Caption = #1055#1088#1080#1095#1080#1085#1072
            Width = 150
            Visible = True
          end>
      end
    end
  end
  object GroupBox: TGroupBox
    Left = 8
    Top = 360
    Width = 233
    Height = 121
    Caption = 'GroupBox'
    TabOrder = 1
    object DBEdit1: TDBEdit
      Left = 8
      Top = 40
      Width = 121
      Height = 21
      DataField = 'Job'
      DataSource = DataModule1.JobsSource
      TabOrder = 0
      OnClick = DBEdit1Click
      OnKeyPress = DBEdit1KeyPress
    end
    object ConfirmButton: TButton
      Left = 152
      Top = 88
      Width = 75
      Height = 25
      Caption = 'ConfirmButton'
      TabOrder = 1
      OnClick = ConfirmButtonClick
    end
    object CancelButton: TButton
      Left = 8
      Top = 88
      Width = 75
      Height = 25
      Caption = #1054#1090#1084#1077#1085#1072
      TabOrder = 2
      OnClick = CancelButtonClick
    end
    object DBEdit2: TDBEdit
      Left = 8
      Top = 40
      Width = 121
      Height = 21
      DataField = 'ReasonOfBeingSucked'
      DataSource = DataModule1.ReasonsSource
      TabOrder = 3
      OnClick = DBEdit2Click
      OnKeyPress = DBEdit2KeyPress
    end
  end
  object AddButton: TButton
    Left = 8
    Top = 328
    Width = 75
    Height = 25
    Caption = #1044#1086#1073#1072#1074#1080#1090#1100
    TabOrder = 2
    OnClick = AddButtonClick
  end
  object EditButton: TButton
    Left = 88
    Top = 328
    Width = 97
    Height = 25
    Caption = #1056#1077#1076#1072#1082#1090#1080#1088#1086#1074#1072#1090#1100
    TabOrder = 3
    OnClick = EditButtonClick
  end
  object DeleteButton: TButton
    Left = 192
    Top = 328
    Width = 75
    Height = 25
    Caption = #1059#1076#1072#1083#1080#1090#1100
    TabOrder = 4
    OnClick = DeleteButtonClick
  end
  object GoBackButton: TButton
    Left = 8
    Top = 304
    Width = 75
    Height = 25
    Caption = #1053#1072#1079#1072#1076
    TabOrder = 5
    OnClick = GoBackButtonClick
  end
  object MainMenu1: TMainMenu
    Top = 65528
    object N1: TMenuItem
      Caption = #1060#1072#1081#1083
      object N2: TMenuItem
        Action = AOpen
      end
      object N3: TMenuItem
        Action = AExit
      end
    end
    object N4: TMenuItem
      Caption = #1054#1090#1095#1077#1090#1099
      object N5: TMenuItem
        Action = AReportOpen
      end
    end
  end
  object ActionList1: TActionList
    Left = 32
    Top = 65528
    object AExit: TAction
      Category = #1060#1072#1081#1083
      Caption = #1042#1099#1093#1086#1076
      OnExecute = AExitExecute
    end
    object AReportOpen: TAction
      Category = #1054#1090#1095#1077#1090
      Caption = #1054#1090#1082#1088#1099#1090#1100
      OnExecute = AReportOpenExecute
    end
    object AOpen: TAction
      Category = #1060#1072#1081#1083
      Caption = #1054#1090#1082#1088#1099#1090#1100
      OnExecute = AOpenExecute
    end
  end
end
