import re


number = input("number: ")

if not re.match(r"/^\(?(\d{3})\)?[- ]?(\d{3})[- ]?(\d{4})$/", number):
    print("error")
else:
    print("good")