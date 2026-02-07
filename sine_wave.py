import numpy as np
import matplotlib.pyplot as plt

t = np.linspace(0, 1, 500)
frequency = 5
signal = np.sin(2 * np.pi * frequency * t)

plt.plot(t, signal)
plt.xlabel("Time")
plt.ylabel("Amplitude")
plt.title("Sine Wave Signal")
plt.show()
