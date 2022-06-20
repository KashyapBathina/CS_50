from PIL import Image, ImageFilter
from cs50 import get_string
import sys


for i in range(1, len(sys.argv)):
    print(" ", sys.agrv[idx+1])
#    image = Image.open(" ", + picture)

input = get_string("What filter do you want (black and white/blur)")


if input == ("black and white"):
    image = image.convert("L")
    image.save("after.jpeg")

if input == ("blur"):
    image = image.filter(ImageFilter.BLUR)
    image.save("after.jpeg")
