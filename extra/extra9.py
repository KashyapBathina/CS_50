from PIL import Image, ImageFilter
import sys

def main():
    picture = sys.argv[1].lower()

    if len(sys.argv) < 2:
        print("Usage: extra9.py [car.jpeg / house.jpeg / mountain.jpeg / person.jpeg\n")
        exit()

    if not picture in ["car.jpeg", "house.jpeg", "mountain.jpeg", "person.jpeg"]:
        print("Usage: extra9.py [car.jpeg / house.jpeg / mountain.jpeg / person.jpeg\n")
        exit()

    input = input("What filter do you want (black and white/blur)")
    editor()

def editor():
    image = Image.open(f"{picture}")

    if input == ("black and white"):
        image = image.convert("L")
        image.save(f"post {picture}")

    if input == ("blur"):
        image = image.filter(ImageFilter.BLUR)
        image.save(f"post {picture}")

main()