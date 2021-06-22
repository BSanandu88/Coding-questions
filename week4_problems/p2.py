input_string = input()
x = input_string[len(input_string)//2]
while x in input_string:
    input_string = input_string[:-1]
    print(x, end = "")