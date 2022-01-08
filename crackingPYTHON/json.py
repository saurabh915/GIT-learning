import simplejson
input = '''{
  gmail:{ "id" : "001",
    "x": "2",
    "name" : "chuck"
   },
  email:{ 
        "id" : "009",
        "x":"7",
        "name": "saurabh"
    }
}'''
info = simplejson.loads(input)
print('user count: ', len(info))
#for item in info:
#print('Name', info[1])
   # print('Id', item['id'])
    #print('Attribute', item['x'])
    # 
print(info['email']['name'])  
