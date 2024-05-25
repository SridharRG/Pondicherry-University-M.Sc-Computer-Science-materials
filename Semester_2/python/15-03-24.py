import keyword
# # print(len(keyword.kwlist)) #keywords are reserved words, case-sensitive
# print(keyword.softkwlist)

# x = 10
# print(bool(x))

# x = True
# print(x is True)

# x = False
# print(x is False)

# print(help("True"))

# print(keyword.iskeyword('if'))
# print(keyword.iskeyword('False'))

# Value keywords: True, False, None
# x=100
# print(bool(x))

# x=None
# print(bool(x))

def func():
    print("hello") 
    return 10
x=func()
print(x)

#Operator Keywords: and(&&), or, not, in, is(same or not =)

# x=True
# y=True
# print(x and y)
# print(x or y)
# print(not x)

# x=2
# y=2
# print(x is y)

# x=0
# y=20

# if x > 5 and y < 25:
#     print(x+5)

# if x > 5 or y < 100:
#     print(x + 5)

# if not x:
#     print(x + 5)


# name = "Chad"
# x ="C" in name
# print(x)


#Control Flow Keywords: if, elif, else
#Iteration keywords: for, while, break, continue, else
# Structure keywords: def, class, with, as, pass, lambda
# returning keywords: return, yield
# Import keywords: import, from, as
# Exception handling keywords: try, except, raise, finally, else, assert
# async programming keywords: async, await
# variable handling keywords: del, global, nonlocal


#Identifier
# It can be comination of letter in lowercase from a to z or uppercase A to Z 
# cannot start with digit
# keyword cannot be used
# cannot use symbols
# eg.
#1_num=23
#mark@=23

#comments
'''
hey
wsup
buddy
'''

#Indentation:
# to define a block of code we use indentation.
# 4 whitespaces or tab

# for i in range(5):
#     print("hello")
#     print(i)