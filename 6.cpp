#include<stdio.h> 
#include<stdlib.h> 
int main() 
{ 
int dia, mes; 
printf("Introduzca el numero del dia de su nacimiento: "); scanf("%d",&dia); 
printf("Introduzca el numero del mes de su nacimiento: "); scanf("%d",&mes); 
switch(mes) {
case '1': 
if (dia < 20){ 
puts("Eres Acuario"); 
} 
else { 
puts("Eres Capricornio"); } 
break; 
case '2': 
if (dia > 19){ 
puts("Eres Acuario"); 
} 
else { 
puts("Eres Piscis"); 
} 
break; 
case '3': 
if (dia < 20){ 
puts("Eres Aries"); 
} 
else { 
puts("Eres Piscis"); 
} 
break; 
case '4': 
if (dia < 21){ 
puts("Eres Aries"); 
} 
else { 
puts("Eres Tauro"); 
} 
break; 
case '5': 
if (dia > 21){ 
puts("Eres Géminis"); 
} 
else { 
puts("Eres Tauro"); 
} 
break; 
case '6': 
if (dia > 22){ 
puts("Eres Cáncer"); 
} 
else { 
puts("Eres Tauro");
} 
break; 
case '7': 
if (dia < 23){ 
puts("Eres Cáncer"); 
} 
else { 
puts("Eres Leo"); 
} 
break; 
case '8': 
if (dia > 22){ 
puts("Eres Virgo"); 
} 
else { 
puts("Eres Leo"); 
} 
break; 
case '9': 
if (dia < 23){ 
puts("Eres Virgo"); 
} 
else { 
puts("Eres Libra"); 
} 
break; 
case '10': 
if (dia > 22){ 
puts("Eres Escorpio"); 
} 
else { 
puts("Eres Libra"); 
} 
break; 
case '11': 
if (dia < 23){ 
puts("Eres Escorpio"); 
} 
else { 
puts("Eres Sagitario"); 
} 
break; 
case '12': 
if (dia > 23){ 
puts("Eres Capricornio"); }
else { 
puts("Eres Sagitario"); 
} 
break; 
default: puts("Error");//no me funciono ya lo revise y me da error } 
}}
