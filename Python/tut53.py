# def cube(x):
#     return x*x*x


# # print(cube(2))

# l=[1,2,9,6,4,5]
# # newl=[]
# # for item in l:
# #     newl.append(cube(item))
 
  
# # MAP  
# # newl=list(map(cube,l))
# newl=list(map(lambda x:x*x*x,l))
# print(newl)


# # FILTER
# def filter_function(a):
#     return a>4

# newnewl=filter(filter_function,l)
# print(list(newnewl))

from functools import reduce
number=[1,2,3,4,5,6,7]

sum=reduce(lambda x,y:x+y,number)
print(sum)

