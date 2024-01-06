# x= lambda a,b: a*b
# print(x(4,5))

n=int(input())
a=int(input())


def func(n):
    return lambda a : a * n

ans= func(n)
print(ans(a))