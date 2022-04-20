

list=[]

fname = input("Enter file name: ")

if len(fname) < 1 :
         fname = "mbox-short.txt"
fh = open(fname)
count = 0

for word in fh :
  
    if word.startswith('From') and len(word.split()) >2 :
        lst = word.split()
        list.append(lst[1])
        print(lst[1])
        count = count+1
        list.append(lst[1])
for word in list :
        print(word)        
print("There were", count, "lines in the file with From as the first word")