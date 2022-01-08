

t = ('glenn','rohit','saurabh') #tuples are not mutable. list is mutable.
l = ['rohit','sharma','best']
d=dict()

d['rohit'] =34
d['virat']=18

print(t)
l[1]= 35
t[1]=99  #error tuples are not mutable
print(l)
print(d)