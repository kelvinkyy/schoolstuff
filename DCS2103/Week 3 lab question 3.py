age = int(input("ENTER YOUR AGE"))

if age <= 1:
    print("infant")
elif age > 1 and age < 13:
    print("child")
elif age > 13 and age < 20:
    print("teenager")
else:
    print("adult")
