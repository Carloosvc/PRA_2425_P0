#define BRAZOROBOTICO_H

class BrazoRobotico{

private:
	double x, y, z;
	bool ObjetoSujeto;
public:

	BrazoRobotico(double x, double y, double z);
	double getX() const;
	double getY() const;
	double getZ() const;
	bool getObjetoSujeto() const;
       void coger();
	void soltar();
	void mover(double nuevoX, double nuevoY, double nuevoZ);

};
