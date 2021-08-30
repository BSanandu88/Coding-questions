"""  Accept a positive integer x as input and print the number of factors of x . Divide your test cases
into two classes. The first class should have numbers which are perfect squares, while the second
class should have numbers which are not perfect squares. """
x = int(input())
count = 0
for i in range(1,x+1):
    if x%i == 0:
        count += 1
print(count)