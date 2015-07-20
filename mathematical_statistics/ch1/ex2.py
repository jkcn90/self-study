import pandas as pd
from matplotlib import pyplot as plt

windspeeds = pd.read_csv('data2', header=None, delim_whitespace=True)
windspeeds = windspeeds.values.flatten()

target_windspeed = 10.3
windspeeds_greater_than_target = [x for x in windspeeds if x > target_windspeed]
percentage_of_windspeeds_greater_than_target = 100 * (
        len(windspeeds_greater_than_target) / len(windspeeds))

msg = "{:.2f}% of cities have windspeed greater than {} mph"
msg = msg.format(percentage_of_windspeeds_greater_than_target, target_windspeed)
print(msg)

filtered_windspeeds = windspeeds[windspeeds != 35.1]

(n, bins, patches) = plt.hist(filtered_windspeeds, bins=12, normed=True)
plt.title('Average Wind Speeds in Selected US Cities')
plt.xlabel('Average Wind Speeds (mph)')
plt.ylabel('Frequency')

plt.show()
