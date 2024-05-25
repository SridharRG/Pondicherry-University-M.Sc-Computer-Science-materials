import pandas as pd 
# import numpy as np
# data = np.array([1,2,3,4,5,6,7,8])
# myDat = pd.Series(data)
# myDat.head()
# print(myDat)

# #creating series with index
# s = pd.Series([1,2,3,4,5,6],index=[100,200,300,800,1000,1200],name='science')
# print(s)
# print(s[200])

#crud operations

#.iloc for the position of the location 
# for filtering, use slicing .iloc[0:3] #if index is unknown, it can be used as position
# for iterating through index, use .keys
#for id in phymarks.keys():
#    print(phymarks)

#for using descriptive statistics, we can use 
#phymarks.describe()


data_fr=pd.read_csv("dataframe.csv")
print(data_fr)

data_fr=pd.read_excel("dataframe.xlsx")
print(data_fr)

data_fr.to_csv("testee.csv")

#pandas can read from excel, csv, json and sql
# we can create a dataframe using dict, tuple

# data_share=[('21-02-2019',152,148),('21-02-2020',162,128)]


#data_dr.head
#data_fr.tail
# data

data_fr=pd.read_csv("dataframe.csv")
print(data_fr[2:4])

print(data_fr.columns)

print(data_fr[['High','Low']])

print(data_fr['High'].max())
print(data_fr['High'].min())

print(data_fr['High'].describe())

print(data_fr[data_fr.Low==data_fr.Low.max()])

data_fr_copy = data_fr
print(data_fr_copy.drop([2],axis=0))


data_fr['Total']=(data_fr['High'])+(data_fr['Low'])
print(data_fr)

newdf=data_fr.sort_values('High',ascending=False)
print(newdf)

# df=pd.concat([data_fr,data_fr1])

#merging dataframe
# df=pd.merge()

