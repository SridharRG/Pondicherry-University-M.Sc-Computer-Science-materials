#numpy is the package for scientif computation 
#it is general purpose array packaging
import numpy as np 
arr1= np.array([1,2,3]) # rank of array 1
print(arr1[2])

import numpy as np 
array1 = ([1,2],[3,4])
print(array1[1][1])
print(np.diag(array1))

arr =  np.array([1,2,3,4,5,6,7])
print(arr[1:5])

arr =  np.array([1,2,3,4,5,6,7])
print(arr[-3:-1])

arr =  np.array([[1,2,3,4,5], [6,7,8,9,10]])
print(arr[0:2, 2])

import numpy as np
arr1=np.arange(6)
print(arr1)
arr2=np.ones(6)
print (arr2)
arr3=np.arange(0,60,3)
print (arr3)
arr4=np.arange(-10,0,10)
print (arr4)

# a = np.array(42)
# b = np.array([1,2,3,4,5])
# c = np.array([[1,2,3][4,5,6]])
# d = np.array


arr = np.array([1,0,-3])
newarr = arr.astype(bool)
print(newarr)
print(newarr.dtype)



arr = np.array([1,2,3,4,5,6,7,8,9,10])
newarr = arr.reshape(5,2)
print(newarr)




# arr = np.array([1,2,3],[4,5,6])
# for x in arr:
#     for y in x:
#         print(y)


arr1=np.random.randint(0.10,15)
print(arr1)


arr1=np.diag([2,4,6,8])
print(arr1*arr1)
print("\n")
print(arr1.dot(arr1))


a=np.array([1,2,3])
b=np.array([2,3,4])
c=np.array([1,4,3])
d=np.array([1,3,4])
print(a==d)
print(a<d)
a=np.array([1,2,3])

b=np.array([2,3,4])
d=np.array([1,4,3])
c=np.array([1,3,4])
print(np.array_equal(a,b))
print(np.array_equal(b,c))
print(np.array_equal(c,d))
print(np.array_equal(d,c))

