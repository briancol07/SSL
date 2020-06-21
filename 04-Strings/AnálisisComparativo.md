# Análisis Comparativo del tipo String en Lenguajes de Programación


## c vs javascritp 

###  **¿El tipo es parte del lenguaje en algún nivel?**

1. En c , las cadenas son reconocidas como los caracteres que se encierran entre " " (comillas dobles) , pero a nivel semantico los toma individualmente como un arreglo de caracteres 
2. En js (javascript) las cadenas pueden ser de dos estilos primitivas o objeto (El objeto String encapsula el tipo de datos)

```
var cadena1 = "2 + 2" // crea una primitiva de String
var cadena2 = new String("2 + 2") // crea un objeto de String
```

### **¿El tipo es parte de la biblioteca?**


1. En c los strings no son parte del lenguaje . Cuando se necesitan manipular se utilizan arreglos (char) 
2. En js los strings pareciera que es igual que c pero en este caso ya tienen incluidos los objetos de las strings para poder usarlos 

### **¿Qué alfabeto usa?**
1. El alfabeto utilizado en c es el ascii 
2. Encambio en js se utiliza el unicode que permite escribir diversos caracteres 

### **¿Cómo se resuelve la alocación de memoria?**

1. Al declarar una variable en c se reserva memoria del tamaño del tipo de dato , pero no para el caso de las cadenas ya que estas se almacena el puntero al primer elemento de la cadena 
2. Ya que en js son objetos , debe apuntar al lugar de memoria del objeto .

### **¿El tipo tiene mutabilidad o es inmutable?**
1. Si en c tiene mutabilidad
``` c
char[5] cadena = {'a','b','c','d','e'}; 
cadena[1]='j';
```

2. en js al ser objetos tienen mutabilidad

### **¿El tipo es un first class citizen?**
1. Los arrays en c no son considerados firs class citizen 
2. En js al ser objetos en un lenguaje POO son considerados First Class citizen 


### **¿Cuál es la mecánica para ese tipo cuando se los pasa como argumentos?**

1. En c es un puntero a un arreglo de caracteres
2. En js se pasa directamente auna variable.
   

### **¿Y cuando son retornados por una función?**

1. En c se retorna como un puntero 
2. Encambio en js se retorna directamente como un string 

# Links 



[Strings](https://developer.mozilla.org/es/docs/Web/JavaScript/Referencia/Objetos_globales/String)

[Comparacion con js ](https://developer.mozilla.org/es/docs/Web/JavaScript/Data_structures#:~:text=El%20tipo%20String%20de%20Javascript,%C3%ADndice%201%2C%20y%20as%C3%AD%20sucesivamente)