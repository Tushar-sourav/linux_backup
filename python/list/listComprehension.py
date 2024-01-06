mylist=["apple","orange","litchi","guava"]

# newList=[]

# for i in mylist:
#     if "a" in i:
#         newList.append(i)

# newlist=[i for i in mylist if "a" in i ]
# newlist=[x for x in mylist if x!="apple"]
# newlist=[x for x in range(10) if x<5]
# newlist=[x.upper() for x in mylist if "a" in x ]
newlist=[x if x!="apple" else "mango" for x in mylist]

print(newlist)