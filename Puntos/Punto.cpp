
#include "Punto.h"
using namespace std;



void Punto2dimensiones::Posicion(float Psn_x, float Psn_y)
{
	x = Psn_x;
	y = Psn_y;
}

void Punto2dimensiones::Tras(float temp1, float temp2)
{
	x = x + temp1;
	y = y + temp2;
}

void Punto2dimensiones::Rotar(float temp1)
{
	float ang_rot;
	ang_rot = ((temp1 * 3.1416) / 180);
	SetPosicion(x* cos(ang_rot) - y * sin(ang_rot), x* sin(ang_rot) + y * cos(ang_rot));
}

void Punto2dimensiones::Escalar(float temp1, float temp2)
{
	x = x * temp1;
	y = y * temp2;
}

float Punto2dimensiones::GetX()

{
	return x;
}

float Punto2dimensiones::GetY()
{
	return y;
}
