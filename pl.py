import smtplib
from email.message import EmailMessage
from email.headerregistry import Address
import random


name = input("what is your name: ")
email = input("what is your email adress: ")


hash = random.getrandbits(128)
print("hash value: %032x" % hash)

“data”: {
    “name”: {name}
    "hash": {"%032x", %hash }
    }
