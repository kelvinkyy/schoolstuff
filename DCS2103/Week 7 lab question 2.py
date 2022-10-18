import random

def main():
    try:
        file = open("random_numbers.txt","r")
        count = 0
        total = 0
        for line in file:
            number = int(line.rstrip("\n"))
            total += number
            count +=1
        print("total: {}".format(total))
        print("number of numbers: {}".format(count))
    except ValueError:
        print("handling data problem")
    except IOError:
        print("Unable to read the file")
    except:
        print("Unhandled error")
main()