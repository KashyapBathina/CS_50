from PIL import Image, ImageFilter

image = Image.open("extra.bmp")
image = img.convert("L")
image.save("after.bmp")

after = before.filter(ImageFilter.BoxBlur(10))
after.save("out.bmp")



file = "C://Users/ABC/20.jpg"
img = Image.open(file)

img = img.convert("L")
img.show()