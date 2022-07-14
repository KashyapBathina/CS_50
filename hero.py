from trycourier import Courier

client = Courier(auth_token="dk_prod_MAPAZZ24RRMQ7CGQ5VR7MX6051R8")


name = input
        code = ''.join(random.choice(string.ascii_uppercase + string.digits) for _ in range(6))

        resp = client.send_message(
        message={
            "to": {
            "email": (email),
            },
            "data": {
                "name": (first),
                "code": (code),
            },
            "template": "2VC65XG43QM5K5PJEV05YC46NCM9"
        }
        )