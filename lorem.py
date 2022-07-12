from trycourier import Courier
import string
import random

client = Courier(auth_token="Courier_Authentication_Token")

name = input("name: ")
email = input("email: ")
code = ''.join(random.choice(string.ascii_uppercase + string.digits) for _ in range(6))

print(code)


response = client.send(
    event="Registration",
    recipient="{email}",
    profile={
        "recipient": "{email}",
    },
    data={
        "name": "hello",
        "code": "hello",
    },
)
print("done")
