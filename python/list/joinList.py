mylist=["a","b","c","d"]

newlist=[1,2,3,4,5]


# l=mylist+newlist

# for x in newlist:
#     mylist.append(x)

mylist.extend(newlist)

print(mylist)