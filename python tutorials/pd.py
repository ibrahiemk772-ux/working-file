import pandas as pd
dataframe = {
    "name": ["dawood"] ,
    "age": [25],
    "city": ["New York"]
}
x = pd.DataFrame(dataframe)
print(x)

a = [1,2,3,4,5]
series = pd.Series(a, index = ["a", "b", "c", "d", "e"])
print(type(series))

calories = { "day1" : 420, "day2" : 500}
c = pd.Series(calories)
print(c)

data = {
    "calories" : [420, 350, 300],
    "duration" : [50, 40, 45]
}
s = pd.DataFrame(data, index = ["day1", "day2", "day3"])
print(s)



d2 = pd.read_csv('data.csv')
print(d2.head(10))
