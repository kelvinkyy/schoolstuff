for i in range(7,0,-1):
    for o in range(i):
        print("*", end="")
    print("\n")

for n in range(6):
    print("#", end="")
    for m in range(n):
        print(" ", end="")
    print("#")

for p in range(5):
    print("*",end="")
    if p == 0 or p == 4:
        for u in range(3):
            print("*", end="")

    print("\n")
