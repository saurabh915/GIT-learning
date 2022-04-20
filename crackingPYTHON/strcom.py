word= input('enter the word:')
if word == 'bananas':
   print("given string is equal to banana")
elif word >'bananas':
   print('your word is bigger')
elif word < 'bananas':
    print('your word is smaller')      
word = '123'
word = int(word)
print(type(word)) 
stuff = 'helloworLd'   
print(dir(stuff))
word = 'banana'
k=word.find('n')
print (k)
print(stuff.islower())
data = 'saurabhspatil4545@GMAIL.COMDD/MM/ YY'
atpos = data.find('M')

print(atpos)
space = data.find('D',atpos)
print(space)
host = data[atpos:space+1]
print(host)