# Tuples are immutable, hence if you want to add, remove or change tuple items, then first you must convert the tuple to a list. 
# Then perform operation on that list and convert it back to tuple.

# countries = ("Spain", "Italy", "India", "England", "Germany")
# print(countries)
# temp = list(countries) #convert tuple to list
# print(temp)
# temp.append("Russia")       #add item 
# temp.pop(3)                 #remove item
# temp[2] = "Finland"#change item
# print(temp)
# countries = tuple(temp)
# print(countries)

# countries = ("Pakistan", "Afghanistan", "Bangladesh", "ShriLanka")
# countries2 = ("Vietnam", "India", "China")
# southEastAsia = countries + countries2
# print(southEastAsia)

# The count() method of Tuple returns the number of times the given element appears in the tuple.
# tuple.count(element)
Tuple1 = (0, 1, 2, 3, 2, 31, 1, 3, 2)
# res = Tuple1.count(2)
# print('Count of 2 in Tuple1 is:', res)

# The Index() method returns the first occurrence of the given element from the tuple.
# tuple.index(element, start, end)
res=Tuple1.index(31)
print("First occurrence of 31 is",res)