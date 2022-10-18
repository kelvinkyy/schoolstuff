year =0
rainfall = 0
month=0
year = int(input("HOW MANY YEARS:"))
for i in range(year):
    for m in range(12):
        temp = int(input("ENTER THE AVERAGE RAINFALL FOR THIS MONTH: "))
        month = month +1
        rainfall = temp + rainfall

print("THE AVERAGE RAINFALL FOR", month ,"months is ", (rainfall/month))