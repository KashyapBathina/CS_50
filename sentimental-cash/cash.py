# TODO
from cs50 import get_float

while True:
    owed = get_float("How much change is owed: ")
    if owed > 0:
        break

while owed > 25:
    quarters = 0
    owed = owed - 25
    quarters += 1

while owed > 10:
    dimes = 0
    owed = owed - 10
    dimes += 1

while owed > 5:
    nickels = 0
    owed = owed - 5
    nickels += 1

while owed > 1:
    pennies = 0
    owed = owed - 1
    pennies += 1

change = quarters + dimes + nickels + pennies

print(f"Nickels: {change}")