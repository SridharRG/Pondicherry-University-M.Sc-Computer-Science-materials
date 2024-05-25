# a = 5; i=0
# while (i<a):
#     print(i)
#     i=i+1
# else:
#     print("index greater than a")


# i = 1
# while i < 6:
#     print(i)
#     if i == 3:
#         break
#     i+=1

# i = 1
# while i < 6:
#     print(i)
#     if i == 3:
#         continue
#     i+=1


# function consists of group of statements that can perform a specific tasks 
# it enables modular programming
# reusability, understandability
# through parameters (arguments) values are passed to a funtion
# return statement returns the value from the function. default return value is none

def add(num1, num2): #formal parameter
    return (num1 + num1)
res=add(10,20)
print(res)


#default arguments
def add(num, num1=10):
    return num+num1
print(add(5))


#keyword arguments
def rank_card(**kwargs):
    print("your name is {1} and grade is {0}".format(kwargs["grade"],kwargs["name"]))
rank_card(name="sri",grade="A")


#arbitary arguments
def rank_card(*names):
    for name in names:
        print("your name is {0}".format(name))
rank_card("Sridhar","Ruban","aanisha","aishwarya")

#scope and lifetime of variable
# global and local
sum =0
def list_sum(list1):
    total

#inbuild funtion
#divmod returns the quotient and remainder of the function
print(divmod(12,3))

#enmurate
list1 = [1,2,3,4]
for index, num in enumerate(list1):
    print("index is {i} and value is {j}".format(i = index, j = num))
num

#filter 
def even():
    if (num%2==0):
        return num
list1=[2,3,4,5,6]
list_even=list(filter(even,list1))
print(list_even)

#isinstance

#map
# def exp(num):
#     num=num**2
#     return num
# list1 = [2,3,4,5,6]
# list_even=list(exp,list1)

#reduce
#functools module -- explore the other function in functools module (assignment 2)


#recursive funtionn
def fact(n):
    if n==1:
        return 1
    else:
        return(n*fact(n-1))
print("Factorial of 5 is",fact(5))

#anonymous funcitions are defined without a name. anonymous funtion are defined using lambda 
#short period of time
power = lambda a,n: a**n
print(power(2,5))

# def myfunc(n):
#     return lambda a: