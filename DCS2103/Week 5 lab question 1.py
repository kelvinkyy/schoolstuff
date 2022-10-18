def getMiles(km):
    return km*0.6214
def showresult(km,miles):
    print("{} km to {} miles".format(km,miles))
def main():
    km = int(input("ENTER THE DISTANCE IN KILOMETER"))
    miles = getMiles(km)
    showresult(km,miles)

main()

