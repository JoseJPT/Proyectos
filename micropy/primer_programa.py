import time
import machine

boton = machine.Pin(15, machine.Pin.IN)  # Entrada digital
led = machine.Pin(2, machine.Pin.OUT)  # Salida digital

# Codigo para encender
while True:
    if (boton.value()):
        led.on()
        time.sleep_ms(1000)
        led.off

