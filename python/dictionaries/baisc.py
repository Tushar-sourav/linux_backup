thisdict={
    "brand":"ford",
    "model":"mustang",
    "year":1964
}

# print(thisdict["brand"])
print(len(thisdict))

thisdict.update({"year":2020})

c=thisdict.get("model")
print(c)

thisdict["color"]="red"

z=thisdict.items()
print(z)

x=thisdict.keys()
print(x)

