#!/bin/bash
#Compila el código main, ejecuta el archivo ejecutable a.out
# y destina los resultados a datos.txt
g++ main.cpp && ./a.out > datos.txt
#Con los datos de datos.txt, grafica en python la función.
python grafica.py