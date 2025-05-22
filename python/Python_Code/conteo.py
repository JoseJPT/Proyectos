import cv2
import numpy as np
from tkinter import filedialog
import matplotlib.pyplot as plt

# Seleccionar imagen
ruta = filedialog.askopenfilename(title="Selecciona una imagen")
if not ruta:
    print("No se seleccionó ninguna imagen.")
    exit()

# Leer y convertir la imagen a escala de grises
imagen = cv2.imread(ruta)
gris = cv2.cvtColor(imagen, cv2.COLOR_BGR2GRAY)

# Aplicar desenfoque y binarización
blur = cv2.GaussianBlur(gris, (5, 5), 0)
_, binaria = cv2.threshold(blur, 100, 255, cv2.THRESH_BINARY_INV)

# Detectar contornos
contornos, _ = cv2.findContours(binaria, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)

# Filtrar esporas por tamaño mínimo
esporas = [c for c in contornos if cv2.contourArea(c) > 50]

# Dibujar contornos
cv2.drawContours(imagen, esporas, -1, (0, 255, 0), 2)

# Mostrar resultados
print("Esporas detectadas:", len(esporas))
plt.imshow(cv2.cvtColor(imagen, cv2.COLOR_BGR2RGB))
plt.title(f"Esporas detectadas: {len(esporas)}")
plt.axis('off')
plt.show()
