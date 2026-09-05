import matplotlib.pyplot as plt
import numpy as np
xpoints = np.array([0,1,3,6,7])
ypoints = np.array([0,2,4,3,8])
plt.plot(xpoints)
font1 = {"family" : "serif", "color": "red", "size": 20}
plt.plot(xpoints, ypoints, linestyle="dashed", marker="o", ms=10)
plt.title("My Plot", fontdict = font1)
plt.show()