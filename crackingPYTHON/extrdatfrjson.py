import urllib.request, urllib.parse,urllib.error
import simplejson
link = input('Enter location:')
print('Retriving',link )
html = urllib.request.urlopen(link).read().decode()
print('Retrived',len(html),'characters')
try:
    js=simplejson.loads(html)
except:
    js =None
cn = 0
sm = 0    
for item in js['comments']:
    cn +=1
    sm += int(item['count'])
print('count:',cn)
print('sum',sm)     