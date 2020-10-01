//columna_litologica.cpp
#include <iostream>
#include <stack>
#include <string>
using namespace std;

struct capas{
	string tipo;
	float grosor;
	int dureza;
};
typedef struct capas Capas;

int main(){
	stack<Capas> perfilLitologico;
	
	bool continuar = true;
	
	do {
		int valor;
		//cout<<"Catidad de Bloque actual: "<<piladeBloque.size();
		cout<<"Menu: ";
		cout<<"\n1. Agregar datos al perfil litologico.";
		cout<<"\n2. Quitar datos al perfil litologico.";
		cout<<"\n3. Quitar todos los datos del perfil litologico.";
		cout<<"\n4. Promedio de dureza: ";
		cout<<"\n5. Salir.";
		cout<<"\nIngrese un la opcion: ";
		cin>>valor;
	
		switch(valor){
			case 1:{ 
			Capas litologico;
			cin.ignore();
			cout<<"\nAgregar tipo de suelo: "; 
			getline(cin,litologico.tipo);
			
			cout<<"\nAgregar grosor del suelo: "; 
			cin>>litologico.grosor;
			
			cout<<"\nAgregar dureza: ";
			cin>>litologico.dureza;
			
			perfilLitologico.push(litologico);};
			break;
			
			case 2:{  
			Capas Capatop = perfilLitologico.top();
			cout<<"\nSe ha quitado: ";
			cout<<"Perfil litologico ["<<Capatop.tipo;
			cout<<", "<<Capatop.grosor;
			cout<<" "<<Capatop.dureza<<"]"<<endl;
			perfilLitologico.pop();};
			break;
			
		/*	case 3:{
			while(!empty(Capas)){

        	Capas Capatopp = top(perfilLitologico);
        	cout << "Se quito: [" << Capatopp.tipo;
        	cout << ", " << Capatopp.grosor;
        	cout << ", " << Capatopp.grosor << "]\n";
        
        	pop(perfilLitologico);
    }
    cout << "Pila de platos vacia." << endl;
}
				break;*/
			case 4:{
				promedio();
				
				break;
			}
			
			case 5:{ continuar = false;};
			break;
			
			default:{ cout<<"Ha ingresado una opcion incorrecta.";};
		}
	}while(continuar);
	
	return 0;
}
