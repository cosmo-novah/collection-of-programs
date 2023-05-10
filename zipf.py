collection = 1000
total = 0
div = 0

for x in range(1, collection + 1):
    div += 1/x
    print (x, div)
else:
    total = 1/div

print ("Total:", total)
