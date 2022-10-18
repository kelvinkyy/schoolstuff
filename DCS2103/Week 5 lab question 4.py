import random
class Question:
    def __init__(self,n1,n2):
        self.number1 =n1
        self.number2 =n2
        self.answer = n1 +n2

def getRandomNumber(size):
    return random.randrange(10**(size-1),(10**size)-1)

def questionGenerator():
    num1 = getRandomNumber(3)
    num2 = getRandomNumber(3)
    q1 = Question(num1,num2)

    return q1

def checkAnswer(answer):
    temp = int(input("WHAT IS THE ANSWER:"))
    if temp == answer:
        return True
    else:
        return False

def main():
    while True:
        answer = questionGenerator()
        while True:
            print("         {}".format(answer.number1))
            print("+        {}".format(answer.number2))

            if checkAnswer(answer.answer) == True:
                print("CORRECT")
                break
            else:
                print("WRONG ")
                continue
        repeat = input("Next question [Y/N]").lower()
        if repeat == "y":
            continue
        else:
            break




main()