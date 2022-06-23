import csv
import os
from cs50 import get_string, get_int

n = get_int("How many participants: ")
data = ["Name", "Player"]

with open("list.csv", "w") as file:
    writer = csv.writer(file)
    writer.writerow(data)

for i in range(n):
    name = get_string("Name: ")
    player = get_string("Who is the best quarterback? (Brady, Rodgers, or Manning): ")
    # structure: open('file_name', 'mode'). Where "r" reads, "w" clears file and writes, "a" appends or creates and adds to file
    with open("list.csv", "a") as file:
        writer = csv.writer(file)
        writer.writerow((name, player.lower()))

goats = {
    "brady": 0,
    "rodgers": 0,
    "manning": 0,
}

with open("list.csv", "r") as file:
    reader = csv.DictReader(file)
    for row in reader:
        goat = row["Player"]
        goats[goat] += 1

for goat in goats:
    count = goats[goat]
    print(f"{goat}: {count}")

# To delete file
os.remove("list.csv")




# - - - - - - - - - - - - - - - - - - - - - - - - -

pizzas = {
    "cheese" : 9,
    "pepperoni" : 10,
    "vegetable" : 11,
    "chicken" : 12
}

pizzas["meat"] = 14













# - - - - - - - - - - - - - - - - - - - - - - - - -



#from cs50 import get_int

# # the while true functions repeats until you break
#while True:
#    height = get_int("Height: ")
#    if height > 0 and height < 9:
#        break

#for i in range(height):
#    print((height - 1 - i) * " ", end="")
#    print((i + 1) * "#")




# - - - - - - - - - - - - - - - - - - - - - - - - -


#import csv
#from cs50 import get_string

#name = get_string("Name: ")
#number = get_string("Number: ")

# structure: open('file_name', 'mode'). Where "r" reads, "w" clears file and writes, "a" appends or creates and adds to file
#with open("phonebook.csv", "a") as file:
#    writer = csv.writer(file)
#    writer.writerow((name, number))


# - - - - - - - - - - - - - - - - - - - - - -



#from cs50 import get_string

#people = {
#    "Home": "+1-650-740-2062",
#    "Kashyap": "+1-407-775-0765"
#}

#name = get_string("Name: ")
#if name in people:
#    # same things as number = people[name]
#    print(f"Number: {people[name]}")



# - - - - - - - - - - - - - - - - - - - - - -





#def main():
#    height = get_height()
#    for i in range(height):
#        print("#")

#def get_height():
#    while True:
#        try:
#            n = int(input("Height: "))
#            if n > 0:
#                break
#        except ValueError:
#            print("That's not an integer!")
#    return n

#main()