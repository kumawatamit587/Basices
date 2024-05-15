s1={1,2,3,5,5,6,3,10}
s2={3,4,8,9,10}
# union() and update() methods prints all items that are present in the two sets. The union() method returns a new set whereas update() method adds item into the existing set from another set.
# print(s1.union(s2))
# print(s1,s2)
# s1.update(s2)
# print(s1,s2)

# print(s1.intersection(s2))
# s1.intersection_update(s2)
# print(s1)

# cities = {"Tokyo", "Madrid", "Berlin", "Delhi"}
# cities2 = {"Tokyo", "Seoul", "Kabul", "Madrid"}
# cities3 = cities.symmetric_difference(cities2)
# # print(cities3)

# cities.symmetric_difference_update(cities2)
# print(cities)


# cities = {"Tokyo", "Madrid", "Berlin", "Delhi"}
# cities2 = {"Seoul", "Kabul", "Delhi"}
# cities3 = cities.difference(cities2)
# print(cities3)
# print(cities.difference_update(cities2))


# cities = {"Tokyo", "Madrid", "Berlin", "Delhi"}
# cities2 = {"Tokyo", "Seoul", "Kabul", "Madrid"}
# print(cities.isdisjoint(cities2)) #two sets are said to be disjoint sets if they have no element in common


#The issuperset() method checks if all the items of a particular set are present in the original set. It returns True if all the items are present, else it returns False.
# cities = {"Tokyo", "Madrid", "Berlin", "Delhi"}
# cities2 = {"Seoul", "Kabul"}
# print(cities.issuperset(cities2))
# cities3 = {"Madrid"}
# print(cities.issuperset(cities3))



#The issubset() method checks if all the items of the original set are present in the particular set. It returns True if all the items are present, else it returns False.


# cities = {"Tokyo", "Madrid", "Berlin", "Delhi"}
# cities2 = {"Delhi", "Madrid"}
# print(cities2.issubset(cities))

# cities = {"Tokyo", "Madrid", "Berlin", "Delhi"}
# cities.add("Helsinki")
# print(cities)

# cities = {"Tokyo", "Madrid", "Berlin", "Delhi"}
# cities2 = {"Helsinki", "Warsaw", "Seoul"}
# cities.update(cities2)
# print(cities)


#The main difference between remove and discard is that, if we try to delete an item which is not present in set, then remove() raises an error, whereas discard() does not raise any error.
# cities = {"Tokyo", "Madrid", "Berlin", "Delhi"}
# cities.remove("Tokyo")
# print(cities)


# cities = {"Tokyo", "Madrid", "Berlin", "Delhi"}
# item = cities.pop()
# print(cities)
# print(item)


# cities = {"Tokyo", "Madrid", "Berlin", "Delhi"}
# del cities
# print(cities)

cities = {"Tokyo", "Madrid", "Berlin", "Delhi"}
cities.clear()
print(cities)