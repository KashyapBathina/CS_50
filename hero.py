import re
import phonenumbers



number = input("number: ")

my_number = phonenumbers.parse(number)

if (phonenumbers.is_possible_number(my_number)) == "True":
    print("good")

else:
    print("error")
