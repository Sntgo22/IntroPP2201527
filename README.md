# IntroPP2201527
En el siguiente repositorio se guardarán los diferentes proyectos de la materia C. Paralela.

Instrucciones de ejecución:

Para activar OpenMP en Visual Studio puede hacerse siguiendo los siguientes pasos:

- Abrir el proyecto de C++ en Visual Studio
- Click derecho en tu proyecto, en la ventana del explorador de soluciones selecciona "Propiedades"
- En la ventana de propiedades, ir a la configuración de propiedades -> C/C++ -> Lenguaje.
- Establezca la opción "Soporte de Open MP" en "Sí (/openmp)".
- Haga clic en "Aplicar" y "Aceptar" para guardar los cambios.
- Después de habilitar OpenMP, puede usar directivas OpenMP en su código para paralelizar bucles y otras tareas. Recuerde que no todos los compiladores admiten OpenMP, por lo que es esencial verificar que su compilador lo admita antes de usarlo en su código.

Sobre su rendimiento: 

Es importante señalar que la aceleración lograda mediante la paralelización depende de varios factores, como la cantidad de núcleos disponibles, el tamaño de las matrices y la eficiencia de la paralelización. En este programa utilizamos un tamaño de matriz de 1000x1000, pero los beneficios de la paralelización se vuelven aún más evidentes para matrices más grandes.

En conclusión, la programación paralela puede mejorar significativamente el rendimiento de tareas computacionalmente intensivas como la multiplicación de matrices. La biblioteca OpenMP proporciona una forma sencilla y eficaz de paralelizar código y, con una optimización cuidadosa, se pueden lograr incluso aceleraciones considerables.


