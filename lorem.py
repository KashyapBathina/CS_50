from trycourier import Courier
import string
import secrets

client = Courier(auth_token="Courier_Authentication_Token")

name = input("name: ")
email = input("email: ")
code = .join(secrets.choice(string.ascii_uppercase + string.ascii_lowercase) for i in range(7))


response = client.send(
    event="Registration",
    recipient="{email}",
    profile={
        "name": "{name}",
        "name": "{code}",
    },
    data={
        "Loredm Ipsum": "dolor sit amet"
    },
)
print("done")
