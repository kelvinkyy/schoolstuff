num = int(input("ENTER A NUMBER BETWEEN 1 AND 7"))

if num < 1 or num > 7:
    print("NUMBER NOT ALLOWED")
    exit()

if num == 1:
    print("monday")
elif num == 2:
    print("tuesday")
elif num == 3:
    print("wednesday")
elif num == 4:
    print("thursday")
elif num == 5:
    print("friday")
elif num == 6:
    print("saturday")
elif num == 7:
    print("sunday")
