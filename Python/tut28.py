letter="hey my name is {1} and I am from {0}"
country="India"
name="Harry"
print(letter.format(name,country))
print(letter.format(country,name))

print(f"hey my name is {name} and I am from {country}")
print(f"We use f-strings like this: Hey my name is {{name}} and I am from {{country}}")
# txt="For only {price:.5f} dollars!"
# print(txt.format(price=49.0999994))
price=49.0999999
txt=f"For only {price:.2f} dollars!"
print(txt)

val = 'Geeks'  
print(f"{val}for{val} is a portal for {val}.")  
name = 'Tushar'  
age = 23  
print(f"Hello, My name is {name} and I'm {age} years old.")

print(type(f"{2*30}"))