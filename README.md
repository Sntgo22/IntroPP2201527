# IntroPP2201527
En el siguiente repositorio se guardarán los diferentes proyectos de la materia C. Paralela.

**Instrucciones de ejecución:**

1. Instalación de IDE CodeBlocks

2. Instalación de MingW

3. Instalación de Paquetes con MingW

4. Configuración de CodeBlocks para habilitar la librería de omp.h  

**Sobre su rendimiento:** 

Es importante señalar que la aceleración lograda mediante la paralelización depende de varios factores, como la cantidad de núcleos disponibles, el tamaño de las matrices y la eficiencia de la paralelización. 

**Arquitectura de la máquina:**

- Procesador: 11th Gen Intel(R) Core(TM) i5-11300H @ 3.10GHz   3.11 GHz
- 16GB RAM
- Tarjeta gráfica: 3050 Nvidia 

**Pruebas con Valores Pequeños:**
![](https://github.com/Sntgo22/IntroPP2201527/blob/main/imgs/Pruebas%20Matrices%20Pequeñas.png)

Podemos apreciar que para valores pequeños los resultados son practicamente instantaneos a la hora de calcular la matriz, sin embargo, se puede apreciar que de todas formas el código después de estar paralelizado obtiene resultados incluso menores a la forma secuencial.

**Pruebas con Valores Grandes:**
![](https://github.com/Sntgo22/IntroPP2201527/blob/main/imgs/Pruebas%20Matrices%20Grandes.png)

Para el caso de valores grandes aplica la misma lógica, a pesar de que los tiempos no suben de manera considerable a pesar de haber probado con valores matriciales de hasta 6 dígitos, se sigue viendo cierta mejoría usando la librería de OMP.

**¿Afecta la arquitectura?**

Sí, en este caso se cuenta con una buena máquina para realizar las pruebas, por tanto por más que se aumente los valores de las matrices, estos seguirán obteniendo valores muy bajos gracias a su arquitectura, ya que se infiere que con una máquina con peores caracteríticas cuente con resultados de tiempo un poco más elevados a los ya mostrados previamente.

En conclusión, la programación paralela puede mejorar significativamente el rendimiento de tareas computacionalmente intensivas como la multiplicación de matrices. La biblioteca OpenMP proporciona una forma sencilla y eficaz de paralelizar código y, con una optimización cuidadosa, se pueden lograr incluso aceleraciones considerables.


