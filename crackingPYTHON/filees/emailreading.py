fname = input("enter  file name:")
#opening the file
fh = open(fname)
count = 0
#to store the lines
data=[]
for each in fh:
    # to check whether the line have more than two elements space separated
    if each.startswith("From") and len(each.split())>2:
        temp = each.split()
        data.append(temp[1])
for each in data:
    print(each)
print("there were",len(data), "lines in the file with from as the first word")