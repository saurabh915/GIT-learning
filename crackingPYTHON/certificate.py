import urllib.request as ur
import urllib.parse as up
import simplejson

service_url ="http://py4e-data.dr-chuck.net/json?"


address = input("Enter location: ")
para = {"sensor":"false","address" : address, 'key':42}
url = service_url + up.rurlencode(para)
print("Retriving",url)
data = ur.urlopen(url).read().decode('utf-8')
print('retrived',len(data),'characters')
json_obj = simplejson.loads(data)

place_id = json_obj["results"][0]["place_id"]
print("place id",place_id)