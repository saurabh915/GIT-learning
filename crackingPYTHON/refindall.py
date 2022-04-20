import re
x= 'my favourite numbers are 12 and 95'
y = re.findall('[aeiou]',x)
print(y)
z= re.findall('[aeiou]+',x)
print(z)                           #if you want one or more characters then use + sign.
l = re.findall('[0-9]',x)
print(l)                    # [0-9] numbers from which to which you want to include
