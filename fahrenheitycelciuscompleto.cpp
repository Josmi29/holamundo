#include <stdio.h>
#include <windows.h>

int main() {
	
	float celcius;
	float fahrenheit;
	float temperaturaFahrenheit;
	float temperaturaCelsius; 
	
	printf("dame el valor que deseas procesar en celcius\n");
	scanf("%f",&celcius);
	
	printf("dame el valor que deseas procesar en fahrenheit\n");
	scanf("%f",&fahrenheit);
	
	temperaturaFahrenheit = (9.0/5.0) * celcius + 32;
	temperaturaCelsius = (fahrenheit - 32.0) * (5.0/9.0);

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	printf("Grado en Celsius: %f\n", celcius);
	printf("Mostrar temperatura Fahrenheit del grado Celsius: %f\n", temperaturaFahrenheit);
	
	SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	printf("Grado en Fahrenheit: %f\n", fahrenheit);
	printf("Mostrar Temperatura Celsius del grado Fahrenheit: %f\n", temperaturaCelsius); 
	
	return 0;
}
