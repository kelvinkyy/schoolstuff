num_of_cookies = int(input("ENTER THE NUMBER OF COOKIES YOU WOULD LIKE TO MAKE: "))

sugar = 1.5/48
butter = 1/48
flour = 2.75/48

print("INGREDIENTS NEEDED: (",num_of_cookies,"COOKIES)")
print(format(sugar*num_of_cookies, ".2f"), "CUP OF SUGAR")
print(format(butter*num_of_cookies, ".2f"), "CUP OF BUTTER")
print(format(flour*num_of_cookies, ".2f"), "CUP OF FLOUR")


