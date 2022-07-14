from trycourier import Courier


code = ''.join(random.choice(string.ascii_uppercase + string.digits) for _ in range(6))
name = "kashyap"


client = Courier(auth_token="Courier_Authentication_Token")

response = client.send(
    event="2VC65XG43QM5K5PJEV05YC46NCM9" #Your notification ID from Courier
    profile={
        "email": (email), #The recipient’s email address
    },
    data={
        "name": (name),
        "code": (code),
    }
    "template": "2VC65XG43QM5K5PJEV05YC46NCM9"
)

print(response['messageId'])

)

print(response['messageId'])
