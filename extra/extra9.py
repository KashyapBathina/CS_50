from PIL import Image, ImageFilter
from cs50 import get_string
import sys

if len(sys.argv) < 2 or agcv[1]!= car.jpeg or agcv[1] != house.jpeg or agcv[1] != mountain.jpeg or agcv[1] != person.jpeg:
    print("Usage: extra9.py [car.jpeg / house.jpeg / mountain.jpeg / person.jpeg\n")
    exit()



picture = sys.argv[1]

input = get_string("What filter do you want (black and white/blur)")

image = Image.open(f"{picture}")

if input == ("black and white"):
    image = image.convert("L")
    image.save("after.jpeg")

if input == ("blur"):
    image = image.filter(ImageFilter.BLUR)
    image.save(f"{picture} after")
