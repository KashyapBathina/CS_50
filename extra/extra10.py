rom cs50 import get_string

people = {
    "Carter": "+1-617-495-1000",
    "David": "+1-949-468-2750"
}

name = get_string("Name: ")
if name in people:
    number = people[name]
    print(f"Number: {number[name]}")





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