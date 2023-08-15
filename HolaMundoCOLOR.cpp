include <windows.h>

int main() {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    std::cout << "Historia de la computacion:\n\n" << std::endl;
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
    std::cout << "Primera Generación (1940-1950):\n"
              << "Durante esta época, las computadoras eran enormes máquinas que funcionaban con válvulas electrónicas. Ejemplos notables incluyen la ENIAC y la UNIVAC. Eran muy costosas, generaban mucho calor y requerían un mantenimiento constante..\n\n";
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    std::cout << "Segunda Generación (1950-1960):\n"
              << "Esta etapa vio la introducción de transistores en lugar de válvulas, lo que resultó en computadoras más pequeñas, eficientes y confiables. Las máquinas de esta generación usaban lenguajes de programación más avanzados y comenzaron a utilizarse para aplicaciones científicas y comerciales.\n\n";
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    std::cout << "Tercera Generación (1960-1970):\n"
              << "Surgieron los circuitos integrados, que permitieron más componentes en un solo chip. Esto llevó a computadoras más rápidas y a la reducción de costos. Los sistemas operativos también se desarrollaron en esta época, lo que facilitó la interacción entre usuarios y computadoras.\n\n";
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
    std::cout << "Cuarta Generación (1970-1980):\n"
              << "Se produjo la miniaturización de los circuitos integrados, lo que dio lugar a las microcomputadoras o PCs. Surgieron las primeras computadoras personales, como la Apple II y la IBM PC. También se desarrollaron las interfaces gráficas y los sistemas operativos más amigables.\n\n";
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    std::cout << "Quinta Generación (1980-Presente):\n"
              << "Se caracteriza por avances en la capacidad de procesamiento paralelo, inteligencia artificial y tecnologías de redes. Surgieron las supercomputadoras y las estaciones de trabajo de alto rendimiento. Los dispositivos móviles, la nube y la interconectividad global son características clave de esta generación.\n\n";                 
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	std::cout << "RESUMEN:\n"
			  << "Las computadoras han evolucionado a lo largo de décadas. En sus inicios, eran máquinas enormes con válvulas electrónicas. Luego, llegaron los transistores, que hicieron que las computadoras fueran más pequeñas y eficientes. Después vinieron los circuitos integrados, lo que las hizo aún más rápidas y accesibles. los chips se hicieron mas pequeños y esto llevó al surgimiento de las computadoras personales en la década de 1970. La conectividad global y la inteligencia artificial caracterizan la quinta generación. Hoy en día, la tecnología sigue avanzando con la computación cuántica y la inteligencia artificial avanzada. Cada etapa ha revolucionado cómo interactuamos con la información y ha transformado numerosos aspectos de nuestras vidas.\n";	  
    
	return 0;
}
