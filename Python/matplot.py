#%matplotlib inline
from matplotlib import pyplot as plt

# Get the extremes for number of chips
chipsAll10s = [16, 0]
chipsAll25s = [0, 16]

# Get the extremes for values
valueAll10s = [25,0]
valueAll25s = [0,10]

# Plot the lines
plt.plot(chipsAll10s,chipsAll25s, color='blue')
plt.plot(valueAll10s, valueAll25s, color="orange")
plt.xlabel('x (Rs. 10 chips)')
plt.ylabel('y (Rs. 25 chips)')
plt.grid()


print(chipsAll10s, chipsAll25s, valueAll10s, valueAll25s)
plt.show()

