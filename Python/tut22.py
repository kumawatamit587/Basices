
# Lists are ordered collection of data items.
# They store multiple items in a single variable.
# List items are separated by commas and enclosed within square brackets [].
# Lists are changeable meaning we can alter them after creation.
#listName[start : end : jumpIndex]

marks=[3,5,6,"Harry",True,34,35,63,476]
# print(marks)
# print(len(marks))
# print(type(marks))
# print(marks[0])
# print(marks[1])
# print(marks[2])
# print(marks[3])
# print(marks[4])

# print(marks[-3])#negative index
# print(marks[len(marks)-3])#Positive index
# print(marks[5-3])#positve index
# print(marks[2])#positive index


#Same thing apply in string
# if 7 in marks:
#     print("yes")
# else:
#     print("no")


# if "Ha" in "Harry":
#     print("yes")

# print(marks)
# print(marks[1:-1])
print(marks[1:8])
# print(marks[1:8:2])

# lst=[i*i for i in range(4)]
# print((lst))

lst=[i*i for i in range(10) if i%2==0]
print(lst)