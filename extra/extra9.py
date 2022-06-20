from PIL import Image, ImageFilter
from cs50 import get_string
import sys

print("image: ", sys.argv)

input = get_string("What filter do you want (black and white/blur)")

image = Image.open(" ", sys.argv)

if input == ("black and white"):
    image = image.convert("L")
    image.save("after.jpeg")

if input == ("blur"):
    image = image.filter(ImageFilter.BLUR)
    image.save("after.jpeg")
