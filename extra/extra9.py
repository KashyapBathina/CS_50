from PIL import Image

image = Image.open("extra9.jpeg")
image = image.convert("L")
image.save("after.jpeg")

