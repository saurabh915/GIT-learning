friends = ['saurabh' ,'me', 'myself','computer' ,'science']
for i in range(len(friends)) :
    print("hello, ",friends[i])
    if friends[i] is 'science':
        print('you are definately')
    saur = 'saurabh' in friends[i]
    print(saur)
friends.sort()
print(friends)
nums =[12,32,43,55,66,1,43]    
print(len(nums))
print(max(nums))
print(min(nums))
print(sum(nums))