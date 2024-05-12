a = ['name', 'age', 'sex']
b = ['Dong', 38, 'Male']
people = {}
for i in range(0, 3):
    people[a[i]] = b[i]
print(people)

people1 = {x: y for x in a for y in b}
print(people1)

a[0:0] = [3]
print(a)

print(not 1 and 1)
