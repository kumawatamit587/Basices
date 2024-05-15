marks = [12, 56, 32, 98, 12,  45, 1, 4]

# index=0 ##Here i need to define index manually
# for mark in marks:
#     print(mark)
#     if(index==3):
#         print("Harry,awesome!")
#     index+=1    
    
    
# he enumerate function is a built-in function in Python that allows you to loop over a sequence (such as a list, tuple, or string) and get the index and value of each element in the sequence at the same time. Here's a basic example of how it works:
for index,mark in enumerate(marks):
    print(mark)
    if(index==3):
        print("Harry, awesome!")
        
 
# By default, the enumerate function starts the index at 0, but you can specify a different starting index by passing it as an argument to the enumerate function:
# Loop over a list and print the index (starting at 1) and value of each element
# fruits = ['apple', 'banana', 'mango']
# for index, fruit in enumerate(fruits, start=3):
#     print(index, fruit)
        
        
# Loop over a list and print the index and value of each element
# fruits = ['apple', 'banana', 'mango']
# for index, fruit in enumerate(fruits):
#     print(index, fruit)