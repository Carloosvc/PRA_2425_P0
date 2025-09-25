#include <iostream>
using namespace std;

class BrazoRobotico {

	private:
		double x, y, z;
		bool ObjetoSujeto;
	public:

		BrazoRobotico(double x,double y,double z, bool ObjetoSujeto){
			this->x = x;
			this->y = y;
			this->z= z;
			this->ObjetoSujeto = ObjetoSujeto;			
		
		}

		double getX(){
			return x;
		}

		double getY(){
			return y;
		}

		double getZ(){
			return z;
		}

		bool getObjetoSujeto(){
			return ObjetoSujeto;
		}

		void coger(){
			ObjetoSujeto == true;
		}
		void soltar(){
			ObjetoSujeto == false;
		}

		void mover(double nuevoX, double nuevoY, double nuevoZ){
			x = nuevoX;
			y = nuevoY;
			z = nuevoZ;
			cout << "El robot se ha movido a las coordenadas: " << " x = " <<
				x << " y = " << y << " z = " << z << endl
		
		}
};
