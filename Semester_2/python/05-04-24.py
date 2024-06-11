list1 = [1,2,3]
print(list1.remove(2))

#pop() removes the position of the list
#remove() removes the value of the list

#in - membership function
    
#list slicing
list3 = [10,20,30,40,50]
for i in list3:
    print(i)



#count function


#list comprehension
list6 = [i*4 for i in range(100)]
print(list6)

#list comprehension
list7 = [10,20,30,40]
list8 = [[i,i*2]for i in list7 if i>10]
print(list8)


list9 = [[1,2],[3,4],[5,6]]
print(len(list9[0]))
print(len(list9))


print("--------")


list1= [[1,2],[3,4],[5,6]]
print(len(list1))
list2 = [[list1[j][i] for j in range(len(list1))]for i in range (len(list1[0]))]
print(list2)
print("--------")

list1= [[1,2],[3,4]]
list2= [[4,5],[6,7]]
result= [[0]*len(list1[0]) for i in range(len(list1))]
for i in range(len(list1)):
    for j in range (len(list1)):
        result = list1[i][j] + list2[i][j]
print([result])
print("--------")
#tuple

stud=(1,23,"raj")
stud = (1,(2,3),(4,5))
stud = (1,(2,3),[4,5])
print(stud)

stud[1]=25


#matrix multiplication

