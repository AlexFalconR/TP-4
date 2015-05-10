##**Trabajo Práctico 4**
##Preguntas y Ejercicios

1. ***For*** es una única sentencia, la cual primero situa la variable nl y nc en cero, luego pide el ingreso de una secuencia de carácteres, y luego ejecuta una secuencia de pasos, siempre y cuando, la secuencia ingresada sea distinto de EOF (end of file).
   En esta sentencia, la coma **,** (coma), es un operador, implica un orden en la evaluación de condiciones.
   si, y sería "nl=nc=0".
2. son necesarios, ya que establece un orden, en este caso, establece que primero se ingrese una cadena de texto, y que luego se evalúe con EOF, de lo contrario, establecería que getchar() sea igual a EOF, y luego que se almacene en la variable c.
3. ***If***:
     * Pragmática: evalúa si terminó la repetición.
     * Semántica: verífica que !feof(stdin) sea = 1, de ser asi, invoca a la función Perror.
4. **Función Perror**:
   establece como salida estandar un error, es decir, establece que el programa dejo de ejecutarse por un error.
5. * Semántica: *feof(stdin): si el flujo es igual a fin, el resultado es verdadero.
	  	*ferror(stdin): si el flujo esta en estado erróneo, el resultado es verdadero.
   * Estas funciones, no son mutuo excluyentes, ya que un flujo puede tener 3 estados, estado erróneo, estado de lectura y estado de fin.
   * En este programa programa, si la expresión ferror(stdin) es verdadero (=1), se invoca la función perror (explicado anteriormente).
6. El *formato %.1f*, expresa un operador de casteo, lo que implica un cambio del formato de una expresión.
7. Se aplica un *casteo* en la expresión nl, para obtener una mayor precisión como resultado final (promedio).
10. No, ya que este programa no considera la opción vacio, ya que no se peude dividir por cero (0).
11. No, no es precisa, ya que cuenta los carácteres enter "\n".
12. Reemplazar lo que ejecuta if por: if (c=="\n")
					++nl;
				       else
					++nc;
    y además se debería establecer un condicional, para contemplar el caso del vacio (0).
 