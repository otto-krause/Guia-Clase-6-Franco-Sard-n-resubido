#include<stdio.h> 
#include<stdlib.h> 
int main() 
{ 
char ch; 
printf("Introduzca su nota: "); 
ch=getchar(); 
switch (ch) 
{ 
case 'A': 
puts("Exelente"); 
break; 
case 'B': 
puts("Buena"); 
break; 
case 'C': 
puts ("Regular") ; 
break; 
case 'D': 
puts ("Regular"); 
break; 
case 'E': 
puts ("Suficiente"); 
break; 
case 'F': 
puts ("No Suficiente "); 
break; 
default: 
puts ("Error") ; 
} 
system("pause"); 
} 

