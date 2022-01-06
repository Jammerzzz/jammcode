import numpy as np
from time import time
starttime = time()

arr = np.array([1, 2, 3, 4, 5]) 
arr2 = np.array([])

for i in range(99999):
    arr2=np.append(arr,[i])

#print(arr2)

endtime = time()
t1 = endtime - starttime
print("Code took: {0:9.6f} sec".format(t1))
