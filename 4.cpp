#include<stdio.h>
#include<stdlib.h>
int main() 
{ 
int dia;
printf("Introduzca el número del día: "); dia=getchar(); 
switch (dia) { 
case '1': 
puts("Domingo"); 
break; 
case '2': 
puts("Lunes"); 
break; 
case '3': 
puts("Martes"); 
break; 
case '4': 
puts("Miercoles"); 
break; 
case '5': 
puts("Jueves"); 
break; 
case '6': 
puts("Viernes"); 
break; 
case '7': 
puts("Sabado"); 
break; 
default: puts("Error"); 
} 
} 

