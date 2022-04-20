import urllib.request,urllib.parse,urllib.error
fhand = urllib.request.urlopen('https://www.coursera.org')
para =fhand.read()
for line in para :
    print(line.startswith('font'))
    
