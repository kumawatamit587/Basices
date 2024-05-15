# a=input("Enter the number: ")
# print(f"Multiplication table of {a} is:")

# try:
#     for i in range(1,11):
#         print(f"{int(a)} X {i}={int(a)*i}")
# except Exception as e:
#     print("Inalid Input!")

# print("Some imp lines of code")
# print("End of program")

try:
    num = int(input("Enter an integer: "))
except ValueError:
    print("Number entered is not an integer.")

    

try:
    num = int(input("Enter an integer: "))
    a=[9,8]
    print(a[num])
except ValueError:
    print("Number entered is not an integer.")
except IndexError:
    print("Invalid index")