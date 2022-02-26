import urllib.request, urllib.parse,urllib.error
import simplejson
serviceurl = 'http://maps.googlepis.com/maps/api/getcode/json?'

while True:
    address = input('Enter location')
    if len(address)<1: break

    url = serviceurl +urllib.parse.urlencode(
        {'address':address})

    print('Retriving',url)
    uh = urllib.request.urlopen(url)
    data = uh.read().decode()
    print('retrived',len(data),'characters')

    try:
            js = simplejson.loads(data)
    except:
            js = None

    if not js or 'status' not in js or js['status'] != 'OK':
            print('====failure to Retrive====')
            print(data)
            continue

    print(simplejson.dumps(js, indent =4))            
    lat = js["results"]["geometry"]["location"]["lat"]
    lng=js["results"]["geometry"]["location"]["lng"]
    print('lat',lat,'lng',lng)
    location = js['results'][0]['formatted address']
    print(location)