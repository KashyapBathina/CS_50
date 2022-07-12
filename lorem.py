from trycourier import Courier

client = Courier(auth_token="Courier_Authentication_Token")

name = input("name: ")
email = input("email: ")


response = client.send(
    event="Registration",
    recipient="{email}",
    profile={
        "email": "{email}",
        "phone_number": "recipient_number"
    },
    data={
        "Loredm Ipsum": "dolor sit amet"
    },
    override={} #Pass the override here
)
print(response['messageId'])
