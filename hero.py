from trycourier import Courier
import random
import string

name = input("name: ")
email = input("email: ")
code = ''.join(random.choice(string.ascii_uppercase + string.digits) for _ in range(6))

client = Courier(auth_token="dk_prod_MAPAZZ24RRMQ7CGQ5VR7MX6051R8")

resp = client.send_message(
  message={
    "to": {(email)
    },
    "template": "2VC65XG43QM5K5PJEV05YC46NCM9",
    "data": {
      "name": (name),
      "code": (code)
    },
  }
)

print(resp['requestId'])

