n = int(input("Enter the value of n: "))
print("Enter values for the Matrix A")
a = []
for i in range(0, n):
    a.append([int(x) for x in input("").split(" ")])
print("Enter values for the Matrix B")
b = []
for i in range(0, n):
    b.append([int(x) for x in input("").split(" ")])
c = []
for i in range(0, n):
    c.append([a[i][j] * b[j][i] for j in range(0,n)])
print("After matrix multiplication")
print("-" * 10 * n)
for x in c:
    for y in x:
        print("%5d" % y, end=' ')
    print("")
print("-" * 10 * n)





a = 5
b = 10
print("Before swapping: a =", a, ", b =", b)
a, b = b, a
print("After swapping: a =", a, ", b =", b)




#Program to check if a string is a palindrome using list slicing
string = "radar"
if string == string[::-1]:
    print("Palindrome")
else:
    print("Not a palindrome")

#progam for fibonacci sequence using list
n = 10
a, b = 0, 1
fibonacci_sequence = [a, b]
for _ in range(n - 2):
    a, b = b, a + b
    fibonacci_sequence.append(b)
print("Fibonacci sequence:", fibonacci_sequence)


#program using list in-build functions
import random
names = ['sridhar', 'ruban', 'aanisha']
random.shuffle(names)
print(names)

numbers = [1, 2, 3, 4, 2, 5, 2, 6, 2, 7]
count_of_2 = numbers.count(2)
print("Number of occurrences of 2:", count_of_2)

values = (-x for x in [1,2,3,4,5])
gen_to_list = list(values)
print(gen_to_list) 
