from PIL import Image, ImageFilter
from cs50 import get_string
import sys

picture = get_string("What image do you want to filter (car.jpeg / mountain.jpeg / person.jpeg / house.jpeg)")
input = get_string("What filter do you want (black and white/blur)")

image = Image.open(" ", sys)

if input == ("black and white"):
    image = image.convert("L")
    image.save("after.jpeg")

if input == ("blur"):
    image = image.filter(ImageFilter.BLUR)
    image.save("after.jpeg")
