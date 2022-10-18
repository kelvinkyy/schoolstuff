def main():
    filename = input("ENTER FILE NAME: ")
    file = open(filename,"r")


    for i in range(5):
        line = file.readline()
        print(line)


main()