# dic={
#     344:"Ahrry",
#     56:"Shubham",
#     678:"Zakir",
#     567:"Neha"
# }
# print(dic[567])

info = {'name':'Karan', 'age':19, 'eligible':True}
# Accessing single values:
# print(info['name'])
#print(info.get('name'))

#this through error beacause name2 is not in the dictionary
# print(info['name2'])
#this this give none value beacause name2 is not in the dictionary
# print(info.get('name2'))

# Accessing multiple values:
print(info.values())
# Accessing keys:
print(info.keys())
# Accessing key-value pairs
print(info.items())

# for key in info.keys():
#     # print(info[key])
#     print(f"The value of key {key} is {info[key]}.")


for key,value in info.items():
    # print(info[key])
    print(f"The value of key {key} is {value}.")
