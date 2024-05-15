# ep1={122:45,123:89,124:69,670:69}
# ep2={222:67,566:90,123:100}

# ep1.update(ep2)
# ep1.clear()
# ep1.pop(122)
# ep1.popitem()
# del ep1[122]
# del ep1["122"] #this give error beacause key is int and you pass string
# print(ep1) 

# # The update() method updates the value of the key provided to it if the item already exists in the dictionary, else it creates a new key-value pair.

# ep1.update(ep2)
# print(ep1)

info = {'name':'Karan', 'age':19, 'eligible':True}
# info.clear()
# print(info) #empty dictionary

# info.pop('age') #The pop() method removes the key-value pair whose key is passed as a parameter.
# print(info)

# info.popitem() # remove last key-value pair item
# print(info)

# we can also use the del keyword to remove a dictionary item.
del info['name']
print(info)

