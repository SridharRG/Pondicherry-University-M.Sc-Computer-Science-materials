# input output

a = "hola amigo"
print ("putangimono" + a)

a = "social"
b = "science"
print("{} and {} is a hectic subject".format(a,b))

# print("hai {0}, welcome the the {club}"format("raju",club = "mile high club"))

# f-string
mark = input("enter your marks")
print(mark)
# print(mark+2)
print(mark + "hi")

#type casting

mark=int(input("Enter your marks"))
print(mark + 2)

#indexing

ch = input('Enter any data: ')[0]
print(f'The entered character is {ch}')

#split function
x,y,z = input("Enter two values seperated by space").split(",")
print(max(x,y,z))
# print("The value of x is",x)
# print("The value of y is",y)

n,m = [int(x) for x in input().split(",")]
print("m value ",m)
print("n value ",n)

a = [int(x) for x in input(). split()]
print(a)
print(id(a))
a.append(20)
print(a)
print(id(a))

n1 = int(input("Enter number 1:"))
n2 = int(input("Enter number 2:"))
print("the avaiable options are ")
choice = input("Enter the choice: + or *: ")
if choice == "+":
    print("sum is", n1+n2)
elif choice == "*":
    print("product is", n1*n2)
else:
    print("invalid choice")




    
