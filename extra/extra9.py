from PIL import Image, ImageFilter

image = Image.open("extra9.jpeg")
image = img.convert("L")
image.save("after.jpeg")

// after = before.filter(ImageFilter.BoxBlur(10))
// after.save("out.bmp")
// img = Image.open(file)
// img = img.convert("L")
// img.show()