#include <iostream>
using namespace std;

int main ()
{
	float numero1,numero2;
	char suma='+',resta='-',multiplicacion='*',division='/',modulo='%';
	char operador;
	cout<<"Hola , ingresa el numero por favor"<<endl;
	cin>>numero1;
	cout<<"Que operacion deseas ingresar(ingresa simbolo de operacion)"<<endl;
	cin>>operador;
	cout<<"Ingresa el segundo numero , por favor"<<endl;
	cin>>numero2;
	
	if(operador==suma) {
		float suma;
		suma=numero1+numero2;
		cout<<"La suma es:"<<suma<<endl;
	}
	if(operador==resta){
		float resta;
		resta=numero1-numero2;
		cout<<"La resta es:"<<resta<<endl;
		}
	if(operador==multiplicacion){
		float multiplicacion;
		multiplicacion=numero1*numero2;
		cout<<"La multiplicacion es:"<<multiplicacion<<endl;
		
		
		}
		
	if(operador==division){
		float division;
		division=numero1/numero2;
		cout<<"La division es:"<<division<<endl;
		if(numero2==0){
			cout<<"No se puede realizar la division"<<endl;
			
		}
    }
    if(operador==modulo){
		
		int modulo;
		int numeroA=(int)(numero1);
		int numeroB=(int)(numero2);
		modulo=numeroA%numeroB;
		cout<<"el residuo es:"<<modulo<<endl;
    }
    
    return main();
		





















}
	
	
	
	
	
	

