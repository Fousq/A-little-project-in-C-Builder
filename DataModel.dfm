object DataModule1: TDataModule1
  OldCreateOrder = False
  Left = 259
  Top = 463
  Height = 306
  Width = 325
  object UserSource: TDataSource
    DataSet = UserTable
    Left = 24
    Top = 56
  end
  object UserTable: TTable
    DatabaseName = 'Registrated'
    SessionName = 'S1'
    TableName = 'InformationAboutUsers.DB'
    Left = 24
    Top = 8
  end
  object CompanyTable: TTable
    DatabaseName = 'Registrated'
    SessionName = 'S1'
    TableName = 'InformationAboutCompanies.db'
    Left = 96
    Top = 8
  end
  object CompanySource: TDataSource
    DataSet = CompanyTable
    Left = 96
    Top = 56
  end
  object JobsTable: TTable
    DatabaseName = 'Registrated'
    SessionName = 'S1'
    TableName = 'Jobs.db'
    Left = 176
    Top = 8
  end
  object JobsSource: TDataSource
    DataSet = JobsTable
    Left = 176
    Top = 56
  end
  object ReasonsTable: TTable
    DatabaseName = 'Registrated'
    SessionName = 'S1'
    TableName = 'ReasonsOfBeingUnemployed.db'
    Left = 248
    Top = 8
  end
  object ReasonsSource: TDataSource
    DataSet = ReasonsTable
    Left = 248
    Top = 56
  end
  object Session1: TSession
    Active = True
    SessionName = 'S1'
    Left = 24
    Top = 120
  end
end
