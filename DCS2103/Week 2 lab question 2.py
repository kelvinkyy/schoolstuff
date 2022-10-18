import numpy as np

item = np.array([0,0,0,0,0])
subtotal = 0

for x in range (5):
    item[x] = float(input("ENTER PRICE OF THE ITEM: "))
    subtotal = item[x]+ subtotal

total = subtotal*1.07
tax = total - subtotal
print("THE SUBTOTAL: $",format(subtotal,'.2f'))
print("THE TAX: $",format(tax,'.2f'))
print("TOTAL: $",format(total,'.2f'))


