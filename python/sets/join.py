t1={"a","b","c"}
t2={"1","2","c"}

# t3=t1.union(t2)
# t1.update(t2)t1
# t1.intersection_update(t2)
# t3=t1.intersection(t2)
t1.symmetric_difference_update(t2)


print(t1)