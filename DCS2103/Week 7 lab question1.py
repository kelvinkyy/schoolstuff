import random


def main():
    try:
        times = int(input("ENTER THE NUMBER OF NUMBERS"))
        print("ENTER A NUMBER!")
        file = open("randomno.txt", "w")
        for i in range(times):
            num = random.randint(1,500)
            file.write(str(num) + "\n")
            int(num)
        file.close()
    except ValueError:
        print("Invalid input, enter a number")
    except:
        print("UNHANDLED ERROR")

if __name__ == "__main__":
    main()