def printout(loan,insurance,gas,oil,tires,maintenance):
    print("loan: {}".format(loan))
    print("insurance: {}".format(insurance))
    print("gas: {}".format(gas))
    print("oil: {}".format(oil))
    print("tires: {}".format(tires))
    print("maintenance: {}".format(maintenance))

def inputCost(prompt):
    temp = int(input(prompt))
    return temp
def main():
    loan = inputCost("LOAN COST: ")
    insurance = inputCost("INSURANCE COST: ")
    gas = inputCost("GAS COST: ")
    oil = inputCost("OIL COST: ")
    tires = inputCost("TIRES COST: ")
    maintenance = inputCost("MAINTENANCE COST: ")

    printout(loan, insurance, gas, oil, tires, maintenance)


