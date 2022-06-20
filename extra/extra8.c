#include <stdio.h>
#include <cs50.h>

void swap(int *a, int *b);

int main(void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");

    printf("x is %i, y is %i\n", x, y);
    swap(&x, &y);
    printf("new x is %i, new y is %i\n", x, y);
}

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}



// after = before.filter(ImageFilter.BoxBlur(10))
// after.save("out.bmp")
// img = Image.open(file)
// img = img.convert("L")
// img.show()

for i in range(1, len(sys.argv)):
    print(" ", sys.argv[i])

for i in range(1, len(sys.argv)):
    image = Image.open(" ", sys.argv[i])

input = get_string("What filter do you want (black and white/blur)")


if input == ("black and white"):
    image = image.convert("L")
    image.save("after.jpeg")

if input == ("blur"):
    image = image.filter(ImageFilter.BLUR)
    image.save("after.jpeg")
