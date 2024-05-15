# Tuples are ordered collection of data items. They store multiple items in a single variable.
# Tuple items are separated by commas and enclosed within round brackets (). 
# Tuples are unchangeable meaning we can not alter them after creation.
#Tuple[start : end : jumpIndex]


tup=(1,2,76,342,32)
print(len(tup))
# tup[0]=90 #you can not change value in tuple
print(type(tup),tup)

print(tup[0])
print(tup[-1])
print(tup[2])

if 3231 in tup:
    print("present")
else:
    print("Npt parsent")
    
tup2=tup[1:4]
print(tup2)