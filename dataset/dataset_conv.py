'''

Download abcnews-date-text.csv from 
https://dataverse.harvard.edu/dataset.xhtml?persistentId=doi:10.7910/DVN/SYBGZL into the dataset folder

run this python script as 

> python dataset_conv.py abcnews-date-text.csv data.txt

'''
import sys
import pandas as pd

in_file  = sys.argv[1]
out_file = sys.argv[2]

df = pd.read_csv(in_file)

df.drop(['publish_date'],inplace=True,axis=1)
df.to_csv(out_file,index=False,header=False)