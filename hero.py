from trycourier import Courier

client = Courier(auth_token="pk_prod_ZN043V85VAM138K22DMK8G8Y2F8Y")

resp = client.send(
  event="courier-quickstart",
  recipient="boonraj1@gmail.com",
  data={
    "favoriteAdjective": "awesomeness"
  },
  profile={
    "email": "boonraj1@gmail.com"
  }
)
print("done")