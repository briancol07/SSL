# Fases de la Traducción y Errores 


## Comando utilizado 
``` gcc 
gcc hello2.c -std=c18 -E -o hello2.i

```

> Lo que hace el comando es solo entrar en la parte de preprocesador y mostrar en pantalla lo que hace , pero al incluir el > Error.txt lo guarda en el archivo 

# Resultados 

2. Se ejecuta el comando  y el archivo resultante tiene el comando copia de la libreria stdio donde esta la linea del include, osea llama a toda la libreria trayendo todas las cosas de la misma .
   
3. No difiere en nada los archivos ya que hay directivas de preprocesador 
4. ``` int printf(const char *s, ...); ```
   
 Es la declaracion de una funcion con los parametros , esta misma devuelve un numero y toma unos parametros 

5. diferencias entre ambos archivos ,comentarios que agregar el preprocesador.
```
+# 1 "hello3.c"
+# 1 "<built-in>"
+# 1 "<command-line>"
+# 31 "<command-line>"
+# 1 "/usr/include/stdc-predef.h" 1 3 4
+# 32 "<command-line>" 2
+# 1 "hello3.c"
```
6. Me tira un warning : implicit declaration of funtion 'prontf' , que la funcion prontf 
7.  se corrige el error  y se cierra la llave al final del codigo.
8. Se crear el archivo sin tirar error 
9. ``` gcc hello4.s -c ```

11. Se corrige el prontf a printf 
12. Se compila con el comando ```gcc hello5.c``` y tira un numero random ya que la variable a mostrar no esta puesta y muestra lo que hay en buffer de teclado
13. se corrige colocando la variable i al printf 
14. Printf ya viene incluido en c entonces no es necesario escribir la libreria standar para usarlo por eso permite que se ejecute y se compile  , haciendo todas las asociaciones necesarias con la misma .    


