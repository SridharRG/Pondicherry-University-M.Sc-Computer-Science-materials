# Set is an unorderred, mutable collection of unique items.
# Set is defined by value seperated by commas inside braces {}
# Set object is not subscriptable
# Set should be collection of unique items
# set cannot be indexed

#wont happen
# marks = {10,20,30}
# print(marks[1])

#add elements to the set
marks = {10,20,30}
marks.add(40) #one element can be added
marks.add(20) #duplicates will not be added
marks.add(35)
marks.update([50,15,36])# can update multiple elements in a row
print(marks)

x = {"apple", "banana", "cherry"}
y = {"google","linux", "apple"}
z = {"cherry","bluebird","green apple"}

## x.update(y,z)
x |= y | z 
print(x)


# remove particular element
marks = {10,20,30}
marks.discard(40) # doesnt throw error when the element is not available
print(marks)
marks.remove(20) # throws an error when the element is not available
print(marks)

marks = {10,20,30}
print(marks.pop())
print(marks)

marks = {10,20,30}
marks.clear()# clears the set elements
print(marks)

#union
mark1 = {10,20,30}
mark2 = {40,50,60}
mark = mark1 | mark2
print(mark)

#intersection
mark1 = {10,20,30}
mark2 = {40,20,60}
mark = mark1.intersection(mark2)
print(mark)
mark = mark1 & mark2
print(mark)

#difference
mark1 = {10,20,30}
mark2 = {40,20,60}
mark = mark1 - (mark2)
print(mark)
mark = mark1.difference(mark2)

#disjoint - should have unique elements in the set
mark1 = {10,20,30}
mark2 = {40,20,60}
mark = mark1.isdisjoint(mark2)
print(mark)

#symmetric difference
mark1 = {10,20,30}
mark2 = {40,20,60}
mark = mark1^mark2
print(mark)
mark = mark1.symmetric_difference(mark2)

#subset
mark1 = {10,20,30}
mark2 = {10}
print(mark2.issubset(mark1))

#FROZEN SETS(immutable sets)
#frozen set supports union, intersection, difference and all
# they are immutable(we cannot add or delete elements) and hashable and can generate set using keys from dictionary

#cannot use attribute .add()


#Dictionary
# dictionary is an unodered collection of key value pairs.
# defined by {} with each items being a pair in the form of key:value

dict = {1:"apple", 2:8}
print(dict[2])


dicte = {1:8, "apple": "orange"}
print(dicte[2])

dict={}.fromkeys(["apple","mango"],0)
print(dict)

dict = {1:"apple", 2:8}
print(dict.items())
print(dict.keys())
print(dict.values())
for i in dict.keys():
    print(i)

#modfifying
dict = {1:"apple", 2:"orange"}
dict[1] = "grapes"
print(dict[1])
dict[3] = "jack fruit"
print(dict.items())

#delete
dict = {1:"apple", 2:"orange"}
print(dict.popitem())
print(dict)

#clear
dict = {1:"apple", 2:"orange"}
print(dict.clear())
print(dict)

#copying
dict = {1:"apple", 2:"orange"}
dict_copy = dict.copy()
print(dict_copy)

dict = {1:"apple", 2:"orange"}
dict_copy ={k:v for k,v in dict.items() if v!="mango"}
print(dict_copy)
