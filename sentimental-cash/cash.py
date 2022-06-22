# TODO
from cs50 import get_float

while true
    owed = get_float("How much change is owed: ")
    if owed > 0:
        break

while owed > 25:
    int nickels = 1
    owed = owed - 25
    nickels += 1

while owed > 10:
    int dimes = 1
    owed = owed - 10
    dimes += 1

while owed > 5:
    int quarters = 1
    owed = owed - 5
    quarters += 1

while owed > 1:
    int pennies = 1
    owed = owed - 1
    pennies += 1

print(f"Nickels: {nickels} )