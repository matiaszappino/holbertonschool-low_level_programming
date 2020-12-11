#!/usr/bin/python3

a = 999
b = 999

c = a * b

string = str(c)
string_two = str(c)
print(string)
largo = len(string)
print(largo)

while a > 900:
    if string[0] == string[5] and string[1] == string[4] and string[2] == string[3]:
        print("{} * {} = {}".format(a, b, c))
    a = a - 1
    if string[0] == string[5] and string[1] == string[4] and string[2] == string[3]:
        print("{} * {} = {}".format(a, b, c))
    b = b - 1
    print(c)
