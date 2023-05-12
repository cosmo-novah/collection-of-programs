collection = input("Please enter the number of movies in your collection: ")
total = 0
div = 0

for x in range(1, int(collection) + 1):
    div += 1/x
    #print (x, div)
else:
    total = 1/div

print ("Zipf's Law for a total movie collection of", collection, 
       "is:", total)
