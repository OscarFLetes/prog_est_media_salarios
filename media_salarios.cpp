/*Autor: Oscar Eduardo FLetes Ixta, elavorado el 25/02/222
	Programa que pide el salario de trabajadores
		El programa calcula la media de los salarios
	el programa acaba cuando se inserte el numero 0 
	
	Programa en lenguaje c que calcula la media de los salarios de los trabajadoresinsertados, con uso del ciclo do-while,
	y operaciones aritmeticas 
	
	Autor: Oscar Eduardo Fletes Ixta
	Escuela: UVM Campus Lomas Verdes
	Materia: Programcion Estructurada
	CICLO: 01/2022

	Programa en lenguaje c que muestra el uso de:
		* Declaracion de variables 
		* Variables del tipo float, int
		* Uso de scanf
		* Uso del ciclo do-while
		* Operaciones aritemticas
		* printf para monstrar los valroes de las variables

	Objetivo:
	Mostrar el uso de variables de tipo float, int, uso del scanf, uso del ciclo do-while, realizar operaciones aritmeticas e imprimirla.

	Breve descripcion:
	El programa  pide como entrada 1 variable del tipo float (salario del trabajador)
	El programa calcula la media de los salarios, el programa acaba cuando se inserte el numero 0 
	*/
	
#include<stdio.h>//libreria para el cuerpo de c

int main(){
	//Variables
	float salario, suma=0,media=0;//Variables con decimal
	int i=0;//Variables enteras
	//Entrada 
	do{//ciclo do-while
		printf("Introduce el salario del trabjador %d: ",i);//imprime mensaje, i cuenta los salarios insertados
		scanf("%f",&salario);//lee el numero insertado por el teclado
		suma+=salario;//suma los saalrios
		i++;//contador
	}while(salario!=0);//do-while termina cuando salario sea diferente de 0
	//Proeso
	i--;//se le resta un salario por que nos cuenta el 0 para salrnos del do-while
	media=suma/i;//se calcula la media
	//Salida
	printf("La media de los salarios es: $%.2f\n",media);//imprime la saldia del a media 
	printf("Cantidad de trabajadores insertados: %d",i);//saldia de la cantidad de trabajadores
	return 0;
}
