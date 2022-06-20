from PIL import Image
from cs50 import get_string

input = get_string("What filter do you want (black and white/blur)")

image = Image.open("extra9.jpeg")

if input == black and white:
    image = image.convert("L")
    image.save("after")

if input == blur:
    image = image.filter(ImageFilter.BLUR)
    image.save("after")
