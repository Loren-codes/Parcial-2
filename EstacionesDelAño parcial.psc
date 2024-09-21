Algoritmo EstacionesDelAño
	// Declaramos la variable
	Definir numero Como Entero
	
	// Solicitar un número del 1 al 4
	Escribir "Ingrese un número del 1 al 4:"
	Leer numero
	
	// Condiciones para imprimir la estación correspondiente
	Segun numero Hacer
		1: Escribir "Primavera"
		2: Escribir "Verano"
		3: Escribir "Otoño"
		4: Escribir "Invierno"
		De Otro Modo:
			Escribir "Número no válido. Ingrese un número entre 1 y 4."
	FinSegun
FinAlgoritmo

