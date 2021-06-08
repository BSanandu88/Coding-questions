""" Consider a bouncing ball. It is dropped from a height of meters. For every bounce, it looses
 of its height. For example, after the first bounce, it will loose meter. This means, it will
only go as high as meters. How many bounces does it take for its height to drop below meter.
 """
h,bounces = 10,0
print('-' * 20) #added for aesthetic reasons
print('Bounces\t|\tHeight')
print('-' * 20)

while h > 1:
    #rebound height is(1-0.1) * h or 0.9 * h
    h = 0.9 * h
    bounces += 1
    print(f'{bounces}\t\t|\t{h:.2f}')
print('-' * 20)
print(f'It takes {bounces} bounces for the height to drop below 1 meter.')