REPLACEMENT_COST = 0.8

def calculateInsurance(replacenent_cost):
    return replacenent_cost*REPLACEMENT_COST


def main():

    cost = int(input("ENTER THE REPLACEMENT COST OF THE BUILDING"))
    replacement = calculateInsurance(cost)
    print("REPLACEMENT COST: {}".format(cost))
    print("INSURANCE: {}".format(replacement))

main()