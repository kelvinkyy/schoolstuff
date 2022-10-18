values= []
for i in range(20):
    values.append(i+1)

print(values)
newvalue=[]
for i in values:
    if i %2 ==0:
        pass
    else:
        newvalue.append(i)

newvalue1 = newvalue

newvalue1.remove(1)
print(newvalue1)
print(newvalue)