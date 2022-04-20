import xml.etree.ElementTree as ET
input = '''<stuff>
<user  x= "2">
<id >001</id>
<name>saurabh</name>
</user>
<user  x= "7">
<id >009</id>
<name>x</name>

</user>
</stuff>'''
stuff = ET.fromstring(input)
lst =stuff.findall('users/user')
print('user count: ',len(lst))
for item in lst:
    print('name',item.find('name').text)
    print('id',item.find('id').text)
    print('Attribute',item.get("x"))