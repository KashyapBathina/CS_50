from trycourier import Courier
from trycourier import Courier

client = Courier(auth_token="Courier_Authentication_Token")

response = client.send(
    event="2VC65XG43QM5K5PJEV05YC46NCM9" #Your notification ID from Courier
    recipient="your-recipient-id" #Usually your system's User ID
    profile={
        "email": "user@example.com" #The recipient’s email address
    },
    data={
        "Lorem Ipsum": "dolor sit amet" #The message you wish to send
    }
)

print(response['messageId'])
