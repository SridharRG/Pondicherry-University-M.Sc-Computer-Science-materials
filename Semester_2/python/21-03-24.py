#multiple line 

num = 10+20+\
14+16
print(num)

num = (10+20+
14+16)
print(num)

a = 10 ; b = 20; c = 30;
d = a+b+c
print(d)

'''variable: same rule as identifiers 
    variable is a location in memory used to store some data(value)
    python - dynamically typed language (as declaration can be done dynamically)
'''
#multiple data types in single statement
num = 10;
name = "Kirthi"
num1 = 1+2j
num1 = num2 = num3 = 10;
num, height, name = 10, 5.5, "Kirthi"
print(num, name)

number = 343
print(id(number)) #prints the memory location of variable num)
bb = 343
print(id(bb))

'''Every value in python has a datatype
since everything in python is an object, data types are acutally calless and variables

Basic Data types
Numbers
Boolean
Strings
list
Tuple
set
Dictionary

Integers, floating point numbers and complex'''

num1 = 15
num2 = 3.5
num3 = num1 + num2
print(type(num3)) #returns the data type of variable num
print(isinstance(num3, float)) #returns true if variable num is an integer

#Boolean represents truth values - True/False
pass_stud = True
print(bool(pass_stud))
print(type(pass_stud))

x = 2
y = 2
print(x+y)
print(x-y)
print(x*y)
print(x/y)
print(x%y)
print(x**y)

#Comparing the values
a=90 + 2j
b=89 + 4j

# greater_than = a>b
# less_than_or_equal = a<= b
equal_to = a==b
not_equal_to = a!= b
# print(greater_than)
# print(less_than_or_equal)
print(equal_to)
print(not_equal_to)

complex_no = complex('1+3j')
print("Complex number formed: ",complex_no)

import math
h=16
print(math.sqrt(h))
print(math.pow(h,2))
print("Factorial is", math.factorial(4))
print(math.sin(90))
print(h**2)

#strings
# sequence of unicode characters,(letters, num, and special char)
# single quotes or double quortes are used to represent Strings
# strings can be indexed
# Strings are immutable

str="Kiruthika"
str1='Manimaran'
print(str)
print(str1)

print(str[0])
print(str[-2])
print(str[len(str)-1])
print(str[6:]) #slicing
print(str[6:9])

print(str +" "+ str1)

'''str[2] = "r"
del str
str = "k"
print(str +" "+ str1)'''

#Iterating through strings
string1 = "Kirthi"
count = 0
for i in string1:
    if i=="i":
        count+=1
print(count)

#membership test
s = "Kirthi"
print("i" in s)
print("k" in s)
print("K" in s)

t = "Python Programming"
print(t.lower())
print(t.upper())
print(t.split())
print(t.find("m"))
print(t.replace("Python", "C"))
print(t)