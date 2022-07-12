from trycourier import Courier

client = Courier(auth_token="pk_prod_ZN043V85VAM138K22DMK8G8Y2F8Y
") #or set via COURIER_AUTH_TOKEN env var

resp = client.send(
    event="your-event-id",
    recipient="your-recipient-id",
    profile={
        "email": "example@example.com",
        "phone_number": "555-867-5309"
    },
    data={
      "world": "Python!"
    }
)
print(resp['messageId'])










