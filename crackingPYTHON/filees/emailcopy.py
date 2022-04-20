fname = input("Enter file name: ")
print(len(fname))
if len(fname) < 1 : 
    fname = "mbox-short.txt"

fh = open(fname)
count = 0

list=list()
for word in fh:
   
    if word.startswith("From") and len(word.split())>2:
        tem=word.split()
        list.append(tem[1])
for word in list:
    print(word)
print("There were", len(word), "lines in the file with From as the first word")