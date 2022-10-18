#making classes
class Coursework:
  def __init__(self, w, s, b, t, p, c):
    self.weight = w
    self.score = s
    self.scoreshift = b
    self.shift = t
    self.points = p
    self.weightscore = c

class Homework:
  def __init__(self, w, n, b, t, y, r, o, v):
    self.weight = w
    self.noOfAssignment = n
    self.assignmentScore = b
    self.assignmentPoints = t
    self.section = y
    self.sectionPoints = r
    self.points = o
    self.weightscore = v

#function to ask user to input regarding the coursework part and calculation
def courseworkQuestion(object,weight):
    repeat = False
    temp = int(input("Weight (0-100)? "))
    if temp < 0 or temp>100 or weight+temp >100:
        repeat = True
        while repeat == True:
            #error messages
            if temp < 0:
                print("INVALID INPUT (NO NEGATIVE NUMBER")
            elif temp + weight > 100:
                print("INVALID WEIGHT (COMBINED WEIGHT OF ALL 3 MODULES CANNOT BE MORE THAN 100, current weight = {}".format(weight))
            elif temp > 100:
                print("INVALID INPUT (NUMBER CANNOT BE MORE THAN 100")
            temp = int(input("Weight (0-100)? "))
            if temp >= 0 and temp < 100 and weight + temp <=100:
                repeat = False
    object.weight = temp
    weight = weight + object.weight
    object.score = int(input("Score earned? "))
    #score shift
    object.scoreshift = int(input("Were scores shifted (1=yes, 2=no)? "))
    if object.scoreshift == 1:
        temp = int(input("Shift Amount? "))
        if temp <0:
            repeat = True
            print("INVALID INPUT (SHIFT AMOUNT CANNOT BE A NEGATIVE NUMBER")
            while repeat == True:
                temp = int(input("Shift Amount? "))
                if temp >=0:
                    repeat = False
        object.shift = temp
    object.points = object.score + object.shift
    if object.points > 100:
        object.points = 100
    print("Total points: {} / 100".format(object.points))
    object.weightscore = object.points * object.weight / 100
    print("Weighted score: {:.2f} / {}".format(object.weightscore, object.weight))

    return weight

#function to ask user to input regarding the homework/assignment part and calculation
def homeworkQuestion(object, weight):
    repeat = False
    object.assignmentPoints = 0
    object.points = 0
    object.assignmentScore = 0
    temp =0
    temp1 = 0
    temp = int(input("Weight (0-100)? "))
    if temp < 0 or temp > 100 or weight + temp != 100:
        repeat = True
        while repeat == True:
            #error messages
            if temp < 0:
                print("INVALID INPUT (NO NEGATIVE NUMBER")
            elif temp+weight >100:
                print("INVALID WEIGHT (COMBINED WEIGHT OF ALL 3 MODULES CANNOT BE MORE THAN 100, current weight = {}".format(weight))
            elif temp+weight != 100:
                print("COMBINED WEIGHT HAS TO BE 100, CURRENT WEIGHT = {}".format(weight))
            elif temp > 100:
                print("INVALID INPUT (NUMBER CANNOT BE MORE THAN 100")
            temp = int(input("Weight (0-100)? "))
            if temp >= 0 and temp < 100 and weight + temp <= 100:
                repeat = False
    object.weight = temp
    weight = weight + object.weight
    temp = int(input("Number of assignments? "))
    if temp <1:
        repeat = True
        while repeat == True:
            if temp <1:
                print("INVALID INPUT (CANNOT BE LESS THAN 0")
            temp = int(input("Number of assignments? "))
            if temp >=1:
                repeat = False
    object.noOfAssignment = temp
    #looping to ask for multiple inputs for multiple assignments
    for i in range(object.noOfAssignment):
        temp = int(input("Assignment {} score? ".format(i+1)))
        temp1 = int(input("Assignment {} max? ".format(i+1)))
        #Cumulative sum
        object.assignmentScore = object.assignmentScore + temp
        object.assignmentPoints = object.assignmentPoints + temp1
    if object.assignmentScore > object.assignmentPoints:
        object.assignmentScore = object.assignmentPoints
    object.section = int(input("How many sections did you attend? "))
    temp = object.section * 3
    #validation to make sure the sectionpoints does not go past the limit
    if temp > 34:
        object.sectionPoints = 34
    else:
        object.sectionPoints = temp
    print("Section Points = {} / 34".format(object.sectionPoints))
    object.points = object.sectionPoints + object.assignmentScore
    print("Total Points = {} / {}".format(object.points, object.assignmentPoints + 34))
    object.weightscore = (object.points / (object.assignmentPoints+34))*object.weight
    print("Weighted score: {:.2f} / {}".format(object.weightscore, object.weight))

    return weight

#this method gives a grade depending on the overallpercentage.
def grader(overallPercentage):
    if overallPercentage >=90:
        return "A"
    elif overallPercentage <90 and overallPercentage >=80:
        return "B"
    elif overallPercentage <80 and overallPercentage >=70:
        return "C"
    elif overallPercentage <70 and overallPercentage >=60:
        return "D"
    else:
        return "F"

#this method prints out lines for easier formating. the parameter determines the number of lines printed
def lineSpacer(count):
    for i in range(count):
        print("\n")

def main():
    #declaring objects and variable
    test = Coursework(0,0,0,0,0,0)
    final = Coursework(0,0,0,0,0,0)
    homew = Homework(0,0,0,0,0,0,0,0)
    weight = 0

    while True:
        weight = 0
        name = input("Enter Student Name: ")
        id = input("Enter Student ID: ")

        lineSpacer(1)
        print("TEST")
        weight = courseworkQuestion(test,weight)

        lineSpacer(1)
        print("FINAL")
        weight = courseworkQuestion(final,weight)

        lineSpacer(1)
        print("HOMEWORK")
        weight = homeworkQuestion(homew,weight)

        lineSpacer(1)
        overallPercentage = test.weightscore + final.weightscore + homew.weightscore
        print("Overall percentage: {:.2f}".format(overallPercentage))
        grade = grader(overallPercentage)
        print("Your grade will be at least: {}".format(grade))
        if grade == "A":
            print("VERY GOOD KEEP IT UP")
        elif grade == "B":
            print("NOT BAD KEEP IT UP")
        elif grade == "C":
            print("BETTER LUCK NEXT TIME")
        elif grade == "D":
            print("NOT THE WORSE, BUT YOU CAN DO BETTER")
        else:
            print("DO BETTER")

        while True:
            repeat = input("Next grading [Y/N]").lower()
            if repeat == "y" or repeat == "n":
                if repeat == "y":
                    break
                else:
                    exit()
            else:
                print("INVALID INPUT")
                continue




main()


