#Cuando no se tiene un valor se puede agregar uno con =

def hello(name="person"):
    print("Hello " + name)

hello("Jose")
hello("Jose")
hello("Jose")
hello()

def add(numberOne, numberTwo):
   return numberOne + numberTwo
        
print (add(10, 60))
print (add(100, 640))

#igual que el anterior pero en una sola linea de codigo
add= lambda numberOne, numberTwo: numberOne + numberTwo
print (add(10,20))