#include "BrazoRobotico.h"

int main(){

	BrazoRobotico Brazo1(0.00,0.00,0.00,false);
	cout << "Posición inicial: ("
		<< Brazo1.getX() << ", "
		<< Brazo1.getY() << ", "
		<< Brazo1.getZ() << ")\n";
	Brazo1.coger();
	cout << "El brazo ha cogido un objeto" << endl;
	Brazo1.soltar();
	cout << "El brazo ha soltado un objeto" << endl;

	Brazo1.mover(10.0,10.0,10.0);
	
	return 0;
}
