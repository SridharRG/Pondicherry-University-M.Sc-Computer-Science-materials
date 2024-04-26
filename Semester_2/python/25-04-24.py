# if else
# nested if else

a = 200
b = 333
if b > a:
    print("b is greater than a")

a = 435
b =274
print("A") if a > b else print("B")

a = 343
b = 343
print("A") if a > b else print("=") if a ==b else print("B")

a = 474
b = 847
print(a+b) if a > b  else print(a) if a == b  else print(a-b)

# # x = int(input("Enter the number"))
# # if x < 0:
# #     x = 0
# #     print("negative changed to zero")
# # elif


users = {'gator': 'active', 'bixxzy':'inactive}
for user, status in users.copy().items():
    if status == inactive
    del users[user]

for i in range(1,10,2):
    print(i)
else:
    print("no more items")

a = ['sri', 'is', 'little', 'happy']
for i in range(len(a)):
    print(i,a[i])

a = ['sri', 'is', 'little', 'happy']
for i in range(len(a)):
    if (i==2):
        break
    print(i,a[i])

a = ['sri', 'is', 'little', 'happy']
for i in range(len(a)):
    if (i==2):
        continue
    print(i,a[i])

for i in [0,1,2]:
    pass


fruits= ['apple', 'mango', 'kiwi']
fruits = [x for x in fruits if "a" in x]
print(fruits)


for n in range(2,10):
    for x in range(2,n):
        if n % x ==0:
            print(n, 'equals', x, '*', n//x)
            break
    else:
        print(n, 'is a prime number')    


newlist = [x for x in range(10)]
print(newlist)


for x in range(2,6):
    print(x)


# fruits("apple", "banana", "cherry", "kiwi", "mango")
# newlist = [x if x!= "banana" else "orange" for x in fruits]
# x = newlist.append()
# print(x)


list1 = [i*2 for i in range(10)] 
print(list1)