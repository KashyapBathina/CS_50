from trycourier import Courier


name = input("what is your name: ")
email = input("what is your email adress: ")


hash = random.getrandbits(128)
print("hash value: %032x" % hash)

client = Courier(auth_token="dk_prod_MAPAZZ24RRMQ7CGQ5VR7MX6051R8")

response = client.send(
    event="your-notification-id" #Your notification ID from Courier
    recipient="your-recipient-id" #Usually your system's User ID
    profile={
        "email": "user@example.com" #The recipient’s email address
    },
    data={
        “name”: {name}
        "code": {"%032x", %hash }
    }
)

print(response['messageId'])