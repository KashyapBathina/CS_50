from trycourier import Courier
import string
import random

client = Courier(auth_token="dk_prod_MAPAZZ24RRMQ7CGQ5VR7MX6051R8")

name = input("name: ")
email = input("email: ")
code = ''.join(random.choice(string.ascii_uppercase + string.digits) for _ in range(6))

print(code)


resp = client.send_message(
  message={
    "to": {
      "email": "kbathina05@gmail.com",
    },
    "data": {
      "name": "{name}",
      "code": "{code}",
    },
    "template": "2VC65XG43QM5K5PJEV05YC46NCM9"
  }
)
print("done")
