# USING MATPLOTLIB
import matplotlib.pyplot as plt
import math
import numpy as np

x = np.arrange(1,10,0.1)

p = np.poly1d([3, -4])
y = p(x)
plt.subplot(2, 3, 1)
plt.plot(x, y)

p = np.poly1d([1, 2, -15])
y = p(x)
plt.subplot(2, 3, 2)
plt.plot(x, y)

p = np.poly1d([1, 2, 3], True)
y = p(x)
plt.subplot(2, 3, 3)
plt.plot(x, y)

y = np.power(math.e, x)
plt.subplot(2, 3, 4)
plt.plot(x, y)

y = np.log(x)
plt.subplot(2, 3, 5)
plt.plot(x, y)

y = np.sin(x)
plt.subplot(2, 3, 6)
plt.plot(x, y)