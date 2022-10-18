sentinel = -1
temp = 0
total = 0
budget = int(input("ENTER YOU BUDGET FOR A MONTH"))
while temp != -1:
    temp = int(input("ENTER YOUR EXPENSES FOR THIS MONTH (-1 to exit)"))
    total = total +temp

if total > budget:
    print("YOU ARE OVER BUDGET")
else:
    print("YOU ARE UNDER BUDGET")