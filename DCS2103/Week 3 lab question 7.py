leap = False
year = 0
while leap == False:
    year = int(input("ENTER A YEAR"))
    if(year%100 == 0):
        if(year%400 == 0):
            print(year, "is a leap year")
            leap = True 
        else:
            print(year, "is no a leap year")
    if(year%100!=0 and year%4 == 0):
        print(year, "is a leap year")
        leap = True
    else:
        print(year, "is no a leap year")
