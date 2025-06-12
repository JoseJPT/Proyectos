import random
import keyboard
import pyautogui as pa

#Linea para ver dimensiones
#print (pa.size())

#print(pa.position()) #Posicion del mouse
#pa.click(x=433,y=464)
#pa.typewrite("Holaaaa")
#for i in range (10):
 #   pa.moveTo(x=random.randint(10,1910), y=random.randint(10,1910))

while True:
    pa.moveTo(x=random.randint(10,1910), y=random.randint(10,1910))
    if keyboard.is_pressed('q'):
        break
