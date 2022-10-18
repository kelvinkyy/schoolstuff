def main():
    file = open("random_numbers.txt","r")
    line = file.readline()
    count =0
    while line != "":
        count+=1
        line = line.rstrip("\n")
        line = file.readline()

    print("THIS FILE HAS {} LINES".format(count))

main()