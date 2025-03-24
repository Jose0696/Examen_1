1 Prueba de Ejecución Estructuras de Datos EIF-207 

Escuela de Informática 
Facultad de Ciencias Exactas y Naturales Universidad Nacional 

El  examen  se  realiza  en  C++,  se  recibe  únicamente  proyectos  completos comprimidos tal y como se explicó en clase enVisual Studio, CLion o Zinjai. Usted debe incluir todas sus respuestas separadas y con el nombre que le corresponde. Para la entrega se estará habilitando un espacio en el aula virtual en la fecha y hora establecida  por  el  profesor.  El  estudiante  es  responsable  de  entregar  sus respuestas completas a tiempo y que no superen el tamaño máximo permitido por el aula virtual, para poder realizar la revisión. 

En caso de copia se seguirá el reglamento establecido por la universidad, según lo estipulado. 

Puntos totales de la prueba 100 corresponde a un 20% de la nota final 

El examen debe funcionar y ejecutar un mínimo de un 50% para ser revisado. 

Desarrollo individual:  

1. Clases Nodo, Lista, Pila (Templates). 
1. Manejo de Menú 
1. Solución automática recursiva 

Desarrollo en grupo: 

1. Uso adecuado de la fórmula 
1. Reiniciar el juego 
1. Mostrar el contador de jugadas 

IMPORTANTE 

**El uso de STL está terminantemente prohibido.** 

Pregunta 1: Torres de Hanoi 

Puede consultar la historia en el sitio web de Wikipedia Torres de Hanoi. 

En el siguiente link hay un video explicativo del algoritmo simple representado en C++ de cómo funciona el mismo para ejecutarlo de forma automática. Note que el algoritmo es recursivo.  

En este ejercicio usted ha sido comisionado para crear un juego básico interactivo que trabaja con las Torres de Hanoi.  

Se debe seguir al pie de la letra la siguiente instrucción para la generación de los números a mostrar, representados en el diagrama del juego con X, **por lo que las X se deben reemplazar por los valores calculados.** 

Para calcular los números a mostrar en pantalla, se solicita  que usted genere números siguiendo el siguiente enunciado del TAD simplificado. 

Teniendo una pila P de altura h se tiene que 

- h inicia en 0 
- El cálculo de n está dado por la fórmula 

= ( + )( + ) +

`           `XX  |  | 

`          `XXX  |  | 

`         `XXXX  |  | 

`        `XXXXX  |  | 

`   `---------------      --------------     --------------- Cantidad de Movimientos: XX 

El jugador finaliza el juego si logra llevar el juego de la siguiente manera después de un número determinado de cambios. 

`              `|  |            XX 

`              `|  |           XXX 

|  |          XXXX 

|  |         XXXXX 

`   `---------------      --------------     --------------- Cantidad de Movimientos: XX 

El menú principal me muestra las siguientes opciones: 

- Ingresar al Juego 
- Mostrar el mínimo número de movimientos para ganar. 
- Mostrar el algoritmo completo paso a paso de la solución. 

El menú del juego me permite hacer los todos los movimientos posibles además tiene al final una opción para iniciar el juego  

- De la pila 1 a la pila 2 
- De la pila 1 a la pila 3 
- De la pila 2 a la pila 1 
- De la pila 2 a la pila 3 
- De la pila 3 a la pila 1 
- De la pila 3 a la pila 2 
- Reiniciar el Juego 

Construya una solución completa desde cero para manejo de pilas utilizando listas simplemente enlazadas  genéricas ya que se podría insertar valores enteros  o flotantes. 

La opción del menú Mostrar el algoritmo completo paso a paso de la solución es una  función  especial  que  solicita  una  clave,  el  usuario  debe  ingresar  la  clave secreta 123 para poder ingresar a esa opción y ver el algoritmo completo paso a paso. 
