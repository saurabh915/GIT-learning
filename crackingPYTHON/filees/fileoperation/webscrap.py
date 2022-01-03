import re
z = open('regex_sum_1416962.txt')
x=z.read()
y = re.findall('[0-9]+',x)
for i in range(0,len(y)):
    y[i] = int(y[i])
add =0
for no in y:

   add = add + no
print(add)    
    