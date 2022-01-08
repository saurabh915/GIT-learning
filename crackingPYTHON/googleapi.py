import urllib.request as ur
import urllib.parse as up
import simplejson

url = "http://py4e-data.dr-chuck.net/json?"
address_input = input("Enter location: ")
params = {"sensor": "false","address": address_input}
urll = url + up.urlencode(params)
print("retriving", urll)
data = ur.urlopen(urll).read().decode('utf-8')
print('Retrived',len(data),'characters')
json_obj = simplejson.loads(data)
place_id = json_obj["results"][0]["place_id"]
print("place id",place_id)