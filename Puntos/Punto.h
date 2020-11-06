#include <string>
#include <iostream>

using namespace std;

class Punto2D
{
public:

	void SetPosicion(float Psn_x, float Psn_y);
	void Trasladar(float temp1, float temp2);
	void RotarRespectoAlOrigen(float temp1);
	void Escalar(float temp1, float temp2);
	float GetX();
	float GetY();

private:
	float x, y;

};
