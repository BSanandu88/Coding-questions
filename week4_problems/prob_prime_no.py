""" Problem-5
When an unbiased dice with 12 faces having the numbers from 1 to 12 is rolled, the probability of
obtaining a prime number is . Set up a computational experiment to verify this. """
import random

rolls = []
#roll the dice 100,000 times
for i in range(100_000):
    roll = random.randint(1,12)
    rolls.append(roll)

#Count the number of times primes occur
count = 0
primes = [2,3,5,7,11]
for roll in rolls:
    if roll in primes:
        count += 1

#report the results
print(f'rolls = {len(rolls)}')
print(f'actual = {(5/12) : 0.3f}')
print(f'estimate = {(count/len(rolls)) : 0.3f}')