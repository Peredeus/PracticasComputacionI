#include <math.h>
#include "Punto.h"
using namespace std;





void Punto2D::SetPosicion(float Psn_x, float Psn_y)
{
	x = Psn_x;
	y = Psn_y;
}

void Punto2D::Trasladar(float temp1, float temp2)
{
	x = x + temp1;
	y = y + temp2;
}

void Punto2D::RotarRespectoAlOrigen(float temp1)
{
	float ang_rot;
	ang_rot = ((temp1 * 3.1416) / 180);
	SetPosicion(x* cos(ang_rot) - y * sin(ang_rot), x* sin(ang_rot) + y * cos(ang_rot));
}

void Punto2D::Escalar(float temp1, float temp2)
{
	x = x * temp1;
	y = y * temp2;
}

float Punto2D::GetX()

{
	return x;
}

float Punto2D::GetY()
{
	return y;
}
