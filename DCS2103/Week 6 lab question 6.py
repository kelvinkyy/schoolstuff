def main():
    file = open("random_numbers.txt","r")
    line = file.readline()
    sum = 0
    count =0
    while line != "":
        line = line.strip("\n")
        print(line)
        sum = sum + int(line)
        count+=1
        line = file.readline()

    print("TOTAL: {}".format(sum))
    print("NO of lines: {}".format(count))

main()