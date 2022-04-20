from urllib import request
import xml.etree.ElementTree as ET

url = ' http://py4e-data.dr-chuck.net/comments_1416966.xml'
#print ("Retrieving", url)
html = request.urlopen(url)
data = html.read()
#print("Retrieved",len(data),"characters")

tree = ET.fromstring(data)
resultss = tree.findall('comments/comment')

icount=len(resultss)
sum=0

for result in resultss:
    sum += int(result.find('count').text)
#print(icount)
print(sum)