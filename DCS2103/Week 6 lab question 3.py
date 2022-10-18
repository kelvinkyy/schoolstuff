def main():
    filename = input("ENTER FILE NAME: ")
    file = open(filename,"r")
    line = file.readline()
    count = 1
    while line != "":
        line = line.rstrip("\n")
        print("line{}: {} ".format(count,line))
        count+=1
        line = file.readline()
    file.close()
main()