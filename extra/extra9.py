from PIL import Image, ImageFilter
from cs50 import get_string
import sys

if argcv < 2 or != car.jpeg or != house.jpeg or != mountain.jpeg or != person.jpeg
    print(""Usage: extra9.py [car.jpeg / house.jpeg / mountain.jpeg / person.jpeg\n")

picture = sys.argv[1]

input = get_string("What filter do you want (black and white/blur)")

image = Image.open(f"{picture}")

if input == ("black and white"):
    image = image.convert("L")
    image.save("after.jpeg")

if input == ("blur"):
    image = image.filter(ImageFilter.BLUR)
    image.save(p"{picture} after")
