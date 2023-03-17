material = []
for i in range(int(input())):
    material.append(int(input()))

srted = sorted(material)

if srted == material:
    print("YES")
else:
    print("NO")