# TODO
from cs50 import get_string

words = 0
sentences = 0

text = get_string("Text: ")

for l in text:
    letters = len(text)
    print (letters)

for w in text:
    if " " in text:
        words += 1

for s in text:
    if "." or "!" or "?" in text:
        sentences += 1



