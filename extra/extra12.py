from trycourier import Courier

client = Courier(auth_token="dk_prod_S04HTYNPFD4RWFHTGW3ADT6VSSHN")

resp = client.send_message(
  message={
    "to": {
      "email": "kbathina05@gmail.com",
    },
    "content": {
      "title": "Welcome!",
      "body": "Hello, World",
    },
    "data": {
      "name": "Kashyap Bathina",
    },
    "routing": {
      "method": "single",
      "channels": ["email"],
    },
  }
)

print(resp['requestId'])