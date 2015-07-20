import pandas as pd
from matplotlib import pyplot as plt

radiation = pd.read_csv('data3', delim_whitespace=True, header=None)
radiation = radiation.values.flatten()

plt.hist(radiation, normed=True)
plt.title('Amount of Radioactive Material Present in Phosphate Mining Areas')
plt.xlabel('Radiation Levels (picocuries)')
plt.ylabel('Frequency')
plt.show()
