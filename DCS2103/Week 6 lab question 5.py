def main():
    file = open("random_numbers.txt","r")
    line = file.readline()
    sum = 0
    while line != "":
        sum = sum + int(line)
        line = file.readline()

    print("THIS FILE COMBINED TOTAL IS {}".format(sum))

main()