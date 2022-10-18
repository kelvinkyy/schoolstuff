def menu():
    print("1.print class details")
    print("2.delete class details")
    print("3.exit")
    menuoption = int(input("ENTER MENU OPTION"))
    return menuoption

def printClassDetail():
    file = open("class.txt", "r")
    subject = []
    numberofpeople = []
    line = file.readline()
    count = 1
    while line != "":
        line = line.strip("\n")
        if count%2 == 0:
            numberofpeople.append(line)
        else:
            subject.append(line)
        count+=1
        line = file.readline()
    for i in range(len(subject)):
        print("SUBJECT: {}, NO: {}".format(subject[i], numberofpeople[i]))
    file.close()

def deleteClass():
    classCode = input("ENTER CLASS CODE")
    classnum = 0
    file = open("class.txt","r")
    filebin = open("trash.txt","w")
    line = file.readline()
    if line != "":
        line = line.strip("\n")
        if line == classCode:
            filebin.write(classCode + "\n")
            classnum = file.readline()
            classnum = classnum.strip("\n")
            filebin.write(classnum + "\n")
        else:
            print("Class does not exist")
def main():
    option = 0
    option = menu()
    if option == 1:
        printClassDetail()
    elif option ==2:
        deleteClass()
    else:
        exit()

main()