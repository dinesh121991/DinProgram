import pandas as pd

# Create a dataframe with an x column containing values from -10 to 10
df = pd.DataFrame ({'x': range(-10, 10)})

# Add a y column by applying the solved equation to x
#df['y'] = (df['x']**4 + df['x']**3 - 4) / 2
df['y'] = (3*df['x'] - 4) / 2

#Display the dataframe
df
