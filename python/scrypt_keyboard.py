import random
import keyboard
import pyautogui as pa

#Linea para ver dimensiones
#print (pa.size())

#print(pa.position()) Posicion del mouse

for i in range (10):
    pa.moveTo(x=random.randint(10,1910), y=random.randint(10,1910))
