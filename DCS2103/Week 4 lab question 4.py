speed = int(input("WHAT IS THE SPEED OF THE VEHICLE"))
hours = int(input("HOW MANY HOURS HAS IT TRAVELED"))

print("HOUR             SPEED")
for i in range(hours):
    print(i+1,"               ",(i*hours)*speed)