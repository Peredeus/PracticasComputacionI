#include <string>
#include <iostream>

using namespace std;

class Punto2dimensiones
{
public:

	void Posicion(float Psn_x, float Psn_y);
	void Tras(float temp1, float temp2);
	void Rotar(float temp1);
	void Escalar(float temp1, float temp2);
	float GetX();
	float GetY();

private:
	float x, y;

};
