# TODO
from cs50 import get_string


text = get_string("Text: ")
print (len(text))

for w in text:
    if " " in text:
        words += 1

for s in text:
    if "." or "!" or "?" in text:
        sentences += 1



