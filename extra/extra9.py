from PIL import Image, ImageFilter
from cs50 import get_string
import sys


input = get_string("What filter do you want (black and white/blur)")

for i in range(1, len(sys.argv)):
    image = Image.open(" ", sys.argv[i])

if input == ("black and white"):
    image = image.convert("L")
    image.save("after.jpeg")

if input == ("blur"):
    image = image.filter(ImageFilter.BLUR)
    image.save("after.jpeg")
