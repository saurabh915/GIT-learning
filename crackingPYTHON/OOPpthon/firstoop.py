from re import X


class PartyAnimal:
   x=1
   def __init__(self):
       print("I am constructed")
   def party(self):
     self.x =self.x+1
     print("so far",self.x)

   def __del__(self):
     print("i am destructed",self.x)


an = PartyAnimal()
an.party()
an.party()
an.party()


print("an contains",an)

an.party()