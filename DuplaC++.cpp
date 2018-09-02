#include <iostream>
using namespace std;

class Dupla
{
	private: //datos miembro
	int a,b;
	
	public://funciones miembro
	void lee(int &a2, int &b2);
	void guarda(int a2, int b2){ //los datos miembro toman el valor enviado por valor
		a = a2;
		b = b2;
	}
};

void Dupla::lee(int &a2, int &b2){ //los datos enviados por referencia se sobreescriben por lo que tiene la clase (a , b) 
	a2 = a;
	b2 = b;
}

//aquí  inicia el programa
int main()
{
		Dupla primerPar; //se crea objeto Dupla para poder acceder a el
		int x,y;
		
		primerPar.guarda(12,32); //se llama a la funcion guarda de la clase dupla (guarda los numeros dados)
		primerPar.lee(x,y); //se llama la funcion lee de la clase dupla envia x , y 
							//para que estos tomen los valores que tienen las variables a y b de Dupla
		
		cout<<"Valor del primerPar.a: "<<x<<endl;
		cout<<"Valor del primerPar.a: "<<y<<endl;
		
}
