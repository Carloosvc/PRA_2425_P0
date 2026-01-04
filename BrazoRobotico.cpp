#include "BrazoRobotico.h"
#include <iostream>

BrazoRobotico::BrazoRobotico(double x, double y, double z)
    : x(x), y(y), z(z), objetoSujeto(false) {}

double BrazoRobotico::getX() const {
    return x;
}

double BrazoRobotico::getY() const {
    return y;
}

double BrazoRobotico::getZ() const {
    return z;
}

bool BrazoRobotico::getObjetoSujeto() const {
    return objetoSujeto;
}

void BrazoRobotico::coger() {
    objetoSujeto = true;
}

void BrazoRobotico::soltar() {
    objetoSujeto = false;
}

void BrazoRobotico::mover(double nuevoX, double nuevoY, double nuevoZ) {
    x = nuevoX;
    y = nuevoY;
    z = nuevoZ;
    std::cout << "El robot se ha movido a las coordenadas: "
              << "x = " << x << " y = " << y << " z = " << z << std::endl;
}

