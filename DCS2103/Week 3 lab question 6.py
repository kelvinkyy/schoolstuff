color1= input("ENTER THE FIRST PRIMARY COLOUR").lower()
color2= input("ENTER THE SECOND PRIMARY COLOUR").lower()

if color1 or color2 == "red" or "blue" or "yellow":

    if (color1 == "red" or color2 == "red") and (color1 == "blue" or color2 == "blue"):
        print("YELLOW")
    elif (color1 == "red" or color2 == "red") and (color1 == "yellow" or color2 == "yellow"):
        print("ORANGE")
    elif (color1 == "yellow" or color2 == "yellow") and (color1 == "blue" or color2 == "blue"):
        print("GREEN")
    else:
        print(color1)
else:
    print("INVALID COLOUR")
    exit()