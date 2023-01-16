import sys
import pandas as pd

in_file  = sys.argv[1]
out_file = sys.argv[2]

df = pd.read_csv(in_file)

df.drop(['publish_date'],inplace=True,axis=1)
df.to_csv(out_file,index=False,header=False)