mass = int(input("ENTER THE MASS"))

weigh = mass*9.8

if weigh >500:
    print("TOO HEAVY")
elif weigh <100:
    print("TOO LIGHT")
else:
    print("THE OBJECT WEIGHS: ", weigh)