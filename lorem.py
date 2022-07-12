from trycourier import Courier
import strings
import secrets

client = Courier(auth_token="Courier_Authentication_Token")

name = input("name: ")
email = input("email: ")


response = client.send(
    event="Registration",
    recipient="{email}",
    profile={
        "name": "{name}",
        "name": "{hash}",
    },
    data={
        "Loredm Ipsum": "dolor sit amet"
    },
)
print("done")
