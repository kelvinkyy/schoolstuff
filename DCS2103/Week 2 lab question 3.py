male = int(input("ENTER THE NUMBER OF MALES IN THE CLASS: "))
female = int(input("ENTER THE NUMBER OF FEMALES IN THE CLASS: "))

total = male + female
malep = (male/total)*100
femalep = (female/total)*100

print("PERCENTAGE OF MALE IN THE CLASS: ",format(malep,".2f"),"%")
print("PERCENTAGE OF FEMALE IN THE CLASS: ",format(femalep,".2f"), "%")