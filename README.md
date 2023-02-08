# Algorithms-Search-Lineal
Búsqueda lineal o secuencial 

- Es el algoritmo de búsqueda más simple, pero el menos eficiente, no requiere que los datos o elementos estén ordenados.
Consiste en recorrer los registros o arreglos de manera secuencial, es decir, recorriendo elemento por elemento comparando 
los datos con la clave de búsqueda hasta que encuentre el dato solicitado o determine que dicho dato no se encuentra. 
El inconveniente con este algoritmo es que si el arreglo posee unas dimensiones muy grandes si el elemento a buscar está muy 
lejos tardaría más tiempo en encontrarlo.

EJEMPLO:

Supongamos que, tenemos un arreglo de tamaño de cinco posiciones, la cual contiene los siguiente elementos [2,6,7,4,3] y deseamos buscar 
el elemento 4 en dicho arreglo. Lo que hace el algoritmo es comenzar desde la primera posición (Que puede iniciar con 1 o 0) 
y comparar la clave de b búsqueda -en este caso el 4- con la primera posición, si no lo encuentra entonces continua con la segunda, en caso de 
que aún no lo encuentre repite el proceso de comparar con los siguientes elementos. Dependiendo el tipo de ciclo que se utilice para recorrer el 
arreglo podemos hacer que se detenga cuando lo encuentre o que continúe comparando los demás elementos por si queremos saber si se repite, pero 
con la advertencia de que la ejecución tardaría más tiempo en terminar hasta llegar al final.

<p align="center"> EL ALGORITMO COMPARARÍA LOS ELEMENTOS DEL ARREGLO [2,6,7,4,3] de la siguiente manera: </p> 

<p aling="center"> [2,6,7,4,3] </p>
<p aling="center"> ¿2==4? </p>
<p aling="center"> No </p>
<p aling="center"> [2,6,7,4,3] </p>
<p aling="center"> ¿6==4? </p>
<p aling="center"> No </p>
<p aling="center"> [2,6,7,4,3] </p>
<p aling="center"> ¿7==4? </p>
<p aling="center"> No </p>
<p aling="center"> [2,6,7,4,3] </p>
<p aling="center"> ¿4==4? </p>
<p aling="center"> Si </p>⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
<p aling="center"> "Elemento encontrado!" </p>
