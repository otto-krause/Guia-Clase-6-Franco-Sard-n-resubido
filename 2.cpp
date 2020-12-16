#include<stdio.h> 
#include<stdlib.h> 
int main() 
{ 
int mes; 
printf("Introduzca el número del mes: "); mes=getchar(); 
switch(mes) {
case '1': 
puts("31 días"); 
break; 
case '2': 
puts("28 días"); 
break; 
case '3': 
puts("31 días"); 
break; 
case '4': 
puts("30 días"); 
break; 
case '5': 
puts("31 días"); 
break; 
case '6': 
puts("30 días"); 
break; 
case '7': 
puts("31 días"); 
break; 
case '8': 
puts("31 días"); 
break; 
case '9': 
puts("30 días"); 
break; 
case '10': 
puts("31 días"); 
break; 
case '11': 
puts("30 días"); 
break; 
case '12': 
puts("31 días"); 
break; 
default: puts("Error"); } 
} 
