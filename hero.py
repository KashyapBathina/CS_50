from trycourier import Courier
import string
import random

client = Courier(auth_token="dk_prod_MAPAZZ24RRMQ7CGQ5VR7MX6051R8")


name = input("name: ")
email = input("email: ")

code = ''.join(random.choice(string.ascii_uppercase + string.digits) for _ in range(6))

resp = client.send(
message={
    event="2VC65XG43QM5K5PJEV05YC46NCM9"
    profile={
        "email": (email)
    },
    "data": {
        "name": (name),
        "code": (code),
        },
    }
)

response = client.send(
    event="2VC65XG43QM5K5PJEV05YC46NCM9" #Your notification ID from Courier
    profile={
        "email": (email) #The recipient’s email address
    },
    data={
        "Lorem Ipsum": "dolor sit amet" #The message you wish to send
    }
)

