import csv
from cs50 import get_string

name = get_string("Name: ")
number = get_string("Number: ")

with open("phonebook.csv", "a") as file:
    writer = csv.writer(file)
    writer.writerow((name, number))


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