#include "BrazoRobotico.h"
#include <iostream>

int main() {

    BrazoRobotico brazo1(0.0, 0.0, 0.0);

    std::cout << "Posición inicial: ("
              << brazo1.getX() << ", "
              << brazo1.getY() << ", "
              << brazo1.getZ() << ")\n";

    brazo1.coger();
    std::cout << "El brazo ha cogido un objeto" << std::endl;

    brazo1.soltar();
    std::cout << "El brazo ha soltado un objeto" << std::endl;

    brazo1.mover(10.0, 10.0, 10.0);

    return 0;
}

