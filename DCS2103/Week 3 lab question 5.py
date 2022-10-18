day = int(input("ENTER THE DAY OF THE DATE"))
if day < 1 or day > 31:
    print("invalid day")
    exit()
month = int(input("ENTER THE MONTH OF THE DATE"))
if month < 1 or month > 12:
    print("invalid month")
    exit()
year = int(input("ENTER 2 DIGITS OF THE YEAR OF THE DATE"))
if year < 1 or year > 99:
    print("invalid year")
    exit()

temp = day*month

if(temp == year):
    print("THE DATE IS MAGIC")
else:
    print("THE DATE IS NOT MAGIC")