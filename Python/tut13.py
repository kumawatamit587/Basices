#string are immutable
a="!!!!!!!!!!!Harry !!!!!!!! Harrybhai!!!"
# print(len(a))
# print(a)
# print(a.upper())
# print(a.lower())
# print(a.rstrip("!")) ## removes any trailing characters 
# print(a.strip("!")) #remove whitespace start and end
# print(a.replace("Harry", "John"))
# print(a.replace("r", "J"))
# print(a.split(" "))
blogHeading="introduction To js" #convert first letter in upper case remaining convert to lower case
# print(blogHeading.capitalize())
# print(blogHeading.center(50))
# print(blogHeading.center(50,"."))
# print(len(blogHeading))
# print(len(blogHeading.center(80)))
# print(a.count("Harry")) #he count() method returns the number of times the given value has occurred within the given string.

# str1 = "Welcome to the Console !!!"
# print(str1.endswith("!"))
# print(str1.endswith("@"))
# print(str1.endswith("to", 4, 10))

# print(str1.find("to"))

# print(str1.index("the"))

# str1 = "WelcomeToTheConsole"
# print(str1.isalnum()) #entire string only consists of A-Z, a-z, 0-9

# str1 = "Welcome"
# print(str1.isalpha()) #entire string only consists of A-Z, a-z


# str1 = "hello world"
# print(str1.islower()) # the characters in the string are lower case

# str1 = "We wish you a Merry Christmas"
# str2 = "We wish you a Merry Christmas\n"
# print(str1.isprintable())
# print(str2.isprintable())


##returns True only and only if the string contains white spaces, else returns False.
# str1 = "        "       #using Spacebar
# print(str1.isspace())
# str2 = "        "       #using Tab
# print(str2.isspace())

# str1 = "World Health Organization"  #returns True only if the first letter of each word of the string is capitalized,
# print(str1.istitle())
# str2 = "To kill a Mocking bird"
# print(str2.istitle())

# str1 = "WORLD HEALTH ORGANIZATION" 
# print(str1.isupper())

# str1 = "Python is a Interpreted Language" 
# print(str1.startswith("Python"))

# str1 = "Python is a Interpreted Language" #the character casing of the string. Upper case are converted to lower case and lower case to upper case.
# print(str1.swapcase())

# str1 = "He's name is Dan. Dan is an honest man." #The title() method capitalizes each letter of the word within the string.
# print(str1.title())