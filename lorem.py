from trycourier import Courier

client = Courier(auth_token="Courier_Authentication_Token")

input


response = client.send(
    event="your-event-id",
    recipient="your-recipient-id",
    profile={
        "email": "recipient_id",
        "phone_number": "recipient_number"
    },
    data={
        "Loredm Ipsum": "dolor sit amet"
    },
    override={} #Pass the override here
)
print(response['messageId'])
