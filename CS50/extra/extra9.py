from PIL import Image, ImageFilter
import sys


if len(sys.argv) < 2:
    print("Usage: extra9.py [car.jpeg / house.jpeg / mountain.jpeg / person.jpeg\n")
    exit(1)

picture = sys.argv[1].lower()

if not picture in ["car.jpeg", "house.jpeg", "mountain.jpeg", "person.jpeg"]:
    print("Usage: extra9.py [car.jpeg / house.jpeg / mountain.jpeg / person.jpeg\n")
    exit(1)

input = input("What filter do you want (black and white/blur)")

image = Image.open(f"{picture}")

if input == ("black and white"):
    image = image.convert("L")
    image.save(f"post {picture}")

if input == ("blur"):
    image = image.filter(ImageFilter.BLUR)
    image.save(f"post {picture}")

