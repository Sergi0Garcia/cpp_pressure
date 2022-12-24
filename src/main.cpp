/*
-------------------
POO PRESSURE
--------------------
SERGIO GARCIA 
--------------------
*/

#include "presion.h"
#include <iostream>

// ALTURA 12
// PRESION ATM 100000
// DENSIDAD AGUA 1000
// DENSIDAD AIRE 1225.0 
// GRAVEDAD 9.81 

int main()
{	
	Presion presionAgua(12.0, 100000.0, 1000.0, 9.81);
	Presion presionAire(12.0, 100000.0, 1225.0, 9.81);

	std::cout << "--------------------" <<"\n";
	presionAgua.print();
	std::cout << "--------------------" <<"\n";
	presionAire.print();
	std::cout << "--------------------" <<"\n";

	std::cout << "Presion al fondo del tanque: " << presionAgua.getPresionAbsoluta() << " Pa" << "\n";
	std::cout << "Presion manometrica Aire: " << presionAire.getPresionManometrica() << " Pa" << "\n";
	std::cout << "Presion manometrica Agua: " << presionAgua.getPresionManometrica() << " Pa" << "\n";
	std::cout << "--------------------" <<"\n";

}