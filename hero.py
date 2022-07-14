from trycourier import Courier
import random
import string

name = input("name: ")
email = input("email: ")
code = ''.join(random.choice(string.ascii_uppercase + string.digits) for _ in range(6))

client = Courier(auth_token="pk_prod_3VNJBYM54EM107NQ0ZZ62Y7CRY67")

resp = client.send_message(
            message={
                "to": {
                    "email": (email),
                },
                "template": "C4P4331NKF4G9MHBY4663SM7XVA3",
                "data": {
                    "name": (name),
                    "code": (code),
                },
            }
        )

print(resp['requestId'])

