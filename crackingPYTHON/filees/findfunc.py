data ='From stephen.matquard@uct.ac.za sat Jan 5 09:14'
atpos = data.find('@')
print(atpos)
sppos = data.find(' ',atpos)
print(sppos)
host = data[atpos+1:sppos]
print(host)
