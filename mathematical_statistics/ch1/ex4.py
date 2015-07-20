import pandas as pd
from matplotlib import pyplot as plt

stocks = pd.read_csv("data4", header=None, delim_whitespace=True)
stocks = stocks.values.flatten()

target = 4
greater_than_target = [x for x in stocks if x > target]
percentage_greater_than_target = 100 * len(greater_than_target) / len(stocks)
msg = '{:.2f}% of stocks traded more than {}% of outstanding shares'
msg = msg.format(percentage_greater_than_target, target)
print(msg)

target = 5
less_than_target = [x for x in stocks if x < target]
percentage_less_than_target = 100 * len(less_than_target) / len(stocks)
msg = '{:.2f}% of stocks traded less than {}% of outstanding shares'
msg = msg.format(percentage_less_than_target, target)
print(msg)


plt.hist(stocks, normed=True)
plt.title('Stocks Ranked by Percentage of Outstanding Shares Traded')
plt.xlabel('Percentage of outstanding shares')
plt.ylabel('Frequency')
plt.show()
