import re



number = input("number: ")

if not re.match("^[\dA-Z]{3}-[\dA-Z]{3}-[\dA-Z]{4}$", number):
    print("error")

else:
    print("good")
