object MainWindow: TMainWindow
  Left = 434
  Top = 397
  Width = 600
  Height = 540
  VertScrollBar.Position = 11
  Caption = #1043#1083#1072#1074#1085#1086#1077' '#1084#1077#1085#1102
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  Position = poScreenCenter
  OnClose = FormClose
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object EnterPanel: TPanel
    Left = 56
    Top = 269
    Width = 289
    Height = 233
    TabOrder = 0
    object Label1: TLabel
      Left = 64
      Top = 80
      Width = 34
      Height = 13
      Caption = #1051#1086#1075#1080#1085':'
    end
    object Label4: TLabel
      Left = 56
      Top = 104
      Width = 44
      Height = 13
      Caption = #1055#1072#1088#1086#1083#1100': '
    end
    object LoginEdit: TEdit
      Left = 104
      Top = 72
      Width = 121
      Height = 21
      TabOrder = 0
      Text = 'LoginEdit'
      OnKeyPress = LoginEditKeyPress
    end
    object PasswordEdit: TEdit
      Left = 104
      Top = 96
      Width = 121
      Height = 21
      TabOrder = 1
      Text = 'PasswordEdit'
      OnKeyPress = PasswordEditKeyPress
    end
    object GoToUserForm: TButton
      Left = 208
      Top = 200
      Width = 75
      Height = 25
      Caption = 'GoToUserForm'
      TabOrder = 2
      OnClick = GoToUserFormClick
    end
    object GoToMainButton1: TBitBtn
      Left = 8
      Top = 200
      Width = 75
      Height = 25
      Caption = 'GoToMainButton1'
      TabOrder = 3
      OnClick = GoToMainButton1Click
      Glyph.Data = {
        76010000424D7601000000000000760000002800000020000000100000000100
        04000000000000010000120B0000120B00001000000000000000000000000000
        800000800000008080008000000080008000808000007F7F7F00BFBFBF000000
        FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF00333333333333
        3333333333333333333333333333333333333333333333333333333333333333
        3333333333333FF3333333333333003333333333333F77F33333333333009033
        333333333F7737F333333333009990333333333F773337FFFFFF330099999000
        00003F773333377777770099999999999990773FF33333FFFFF7330099999000
        000033773FF33777777733330099903333333333773FF7F33333333333009033
        33333333337737F3333333333333003333333333333377333333333333333333
        3333333333333333333333333333333333333333333333333333333333333333
        3333333333333333333333333333333333333333333333333333}
      NumGlyphs = 2
    end
  end
  object RegistrationPanel: TPanel
    Left = 464
    Top = 261
    Width = 289
    Height = 233
    TabOrder = 1
    object Label2: TLabel
      Left = 72
      Top = 80
      Width = 141
      Height = 13
      Caption = #1042#1099#1073#1077#1088#1080#1090#1077' '#1074#1080#1076' '#1088#1077#1075#1080#1089#1090#1088#1072#1094#1080#1080':'
    end
    object RegistrateAsBox: TComboBox
      Left = 64
      Top = 112
      Width = 161
      Height = 21
      Style = csDropDownList
      ItemHeight = 13
      TabOrder = 0
      OnClick = RegistrateAsBoxClick
      Items.Strings = (
        #1056#1072#1073#1086#1090#1085#1080#1082
        #1056#1072#1073#1086#1090#1072#1076#1072#1090#1077#1083#1100)
    end
    object GoToRegistrationForm: TButton
      Left = 160
      Top = 200
      Width = 123
      Height = 25
      Caption = 'GoToRegistrationForm'
      TabOrder = 1
      OnClick = GoToRegistrationFormClick
    end
    object GoToMainButton2: TBitBtn
      Left = 8
      Top = 200
      Width = 75
      Height = 25
      Caption = 'GoToMainButton2'
      TabOrder = 2
      OnClick = GoToMainButton2Click
      Glyph.Data = {
        76010000424D7601000000000000760000002800000020000000100000000100
        04000000000000010000120B0000120B00001000000000000000000000000000
        800000800000008080008000000080008000808000007F7F7F00BFBFBF000000
        FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF00333333333333
        3333333333333333333333333333333333333333333333333333333333333333
        3333333333333FF3333333333333003333333333333F77F33333333333009033
        333333333F7737F333333333009990333333333F773337FFFFFF330099999000
        00003F773333377777770099999999999990773FF33333FFFFF7330099999000
        000033773FF33777777733330099903333333333773FF7F33333333333009033
        33333333337737F3333333333333003333333333333377333333333333333333
        3333333333333333333333333333333333333333333333333333333333333333
        3333333333333333333333333333333333333333333333333333}
      NumGlyphs = 2
    end
  end
  object AdminPanel: TPanel
    Left = 0
    Top = -27
    Width = 289
    Height = 241
    TabOrder = 2
    object Label3: TLabel
      Left = 80
      Top = 104
      Width = 125
      Height = 13
      Caption = #1042#1074#1077#1076#1080#1090#1077' '#1087#1072#1088#1086#1083#1100' '#1072#1076#1084#1080#1085#1072':'
    end
    object AdminPasswordEdit: TEdit
      Left = 56
      Top = 128
      Width = 161
      Height = 21
      TabOrder = 0
      Text = 'AdminPasswordEdit'
      OnKeyPress = AdminPasswordEditKeyPress
    end
    object GoToAdminForm: TButton
      Left = 208
      Top = 208
      Width = 75
      Height = 25
      Caption = 'GoToAdminForm'
      TabOrder = 1
      OnClick = GoToAdminFormClick
    end
    object GoToMainButton3: TBitBtn
      Left = 8
      Top = 208
      Width = 75
      Height = 25
      Caption = 'GoToMainButton3'
      TabOrder = 2
      OnClick = GoToMainButton3Click
      Glyph.Data = {
        76010000424D7601000000000000760000002800000020000000100000000100
        04000000000000010000120B0000120B00001000000000000000000000000000
        800000800000008080008000000080008000808000007F7F7F00BFBFBF000000
        FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF00333333333333
        3333333333333333333333333333333333333333333333333333333333333333
        3333333333333FF3333333333333003333333333333F77F33333333333009033
        333333333F7737F333333333009990333333333F773337FFFFFF330099999000
        00003F773333377777770099999999999990773FF33333FFFFF7330099999000
        000033773FF33777777733330099903333333333773FF7F33333333333009033
        33333333337737F3333333333333003333333333333377333333333333333333
        3333333333333333333333333333333333333333333333333333333333333333
        3333333333333333333333333333333333333333333333333333}
      NumGlyphs = 2
    end
  end
  object EnterButton: TButton
    Left = 64
    Top = 29
    Width = 75
    Height = 25
    Caption = #1042#1086#1081#1090#1080
    TabOrder = 3
    OnClick = EnterButtonClick
  end
  object RegistrationButton: TButton
    Left = 32
    Top = 77
    Width = 137
    Height = 25
    Caption = #1047#1072#1088#1077#1075#1080#1089#1090#1088#1080#1088#1086#1074#1072#1090#1100#1089#1103
    TabOrder = 4
    OnClick = RegistrationButtonClick
  end
  object AdminButton: TButton
    Left = 64
    Top = 125
    Width = 75
    Height = 25
    Caption = #1040#1076#1084#1080#1085
    TabOrder = 5
    OnClick = AdminButtonClick
  end
  object MainMenu1: TMainMenu
    Left = 336
    Top = 72
    object N1: TMenuItem
      Caption = #1057#1087#1088#1072#1074#1082#1072
      object N2: TMenuItem
        Action = AOpen
      end
    end
  end
  object ActionList1: TActionList
    Left = 392
    Top = 72
    object AOpen: TAction
      Category = #1057#1087#1088#1072#1074#1082#1072
      Caption = #1054#1090#1082#1088#1099#1090#1100
      HelpType = htContext
      OnExecute = AOpenExecute
    end
  end
end
