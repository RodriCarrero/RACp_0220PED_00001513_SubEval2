#include <iostream>
#include <string>
using namespace std;

struct sucia{
	string material;
	string color;
	bool Estado = false;
	sucia *siguiente;
};
typedef struct sucia Sucia;

struct limpio{
	string material;
	string color;
	bool Estado = true;
	limpio *sig;
};
typedef struct limpio Limpio;

void agregarS(Sucia *&pila){
	Sucia *nuevo_Sucia = new Sucia();
	cout<<"Materia: ";
	getline(cin,*nuevo_Sucia.material);
	cout<<"Color: ";
	getline(cin,*nuevo_Sucia.color);
	*nuevo_Sucia.Estado = false;

	pila = nuevo_Sucia;
}
void nagregarS(Sucia *&pila, int nsucio){
	Sucia *nuevo_Sucia = new Sucia();
	cout<<"Materia: ";
	getline(cin,*nuevo_Sucia.material);
	cout<<"Color: ";
	getline(cin,*nuevo_Sucia.color);
	*nuevo_Sucia.Estado = false;

	pila = nuevo_Sucia->siguiente;
	
}

void agregarL(Limpio *&pilaa){
	Limpio *nuevo_Limpio = new Limpio();
	cout<<"Materia: ";
	getline(cin,*nuevo_Limpio.material);
	cout<<"Color: ";
	getline(cin,*nuevo_Limpio.color);
	*nuevo_Sucia.Estado = true;

	pilaa = *nuevo_Limpio;
}

void nagregarL(pilaa,nsucio){
	Limpio *nuevo_Limpio = new Limpio();
	cout<<"Materia: ";
	getline(cin,*nuevo_Limpio.material);
	cout<<"Color: ";
	getline(cin,*nuevo_Limpio.color);
	*nuevo_Sucia.Estado = true;

	pilaa = *nuevo_Limpio->sig;
}
void mostrarL(Limpio *&pilaa){
	cout << "\nMostrando platos limpios: " << endl;
    Limpio *aux = pilaa;
	cout<<"Plato limpio: [ "<<*aux.material;
	cout<<" , "<<*aux.color;
	cout<<aux.Estado<<"]";
	pilaa = aux->siguiente;
	delete aux;
}

void mostrarS(Sucio *&pila){
	cout << "\nMostrando platos sucios: " << endl;
    Sucio *aux = pila;
	cout<<"Plato limpio: [ "<<*aux.material;
	cout<<" , "<<*aux.color;
	cout<<aux.Estado<<"]";
	pila = aux->siguiente;
	delete aux;
}

int main (){
	int n;
	Sucia *pila = NULL;
	cout<<"Ingrese el numero de platos limpios: ";
	cin>>n;
	Limpio *pilaa = n;
	
	bool continuar = true;
	do{
		int valor;
		cout<<"Menu: ";
		cout<<"\n1. Ensuciar un plato.";
		cout<<"\n2. Ensuciar N platos.";
		cout<<"\n3. Limpiar un plato.";
		cout<<"\n4. Limpiar N platos.";
		cout<<"\n5. Mostrar pila limpia.";
		cout<<"\n6. Mostrar pila sucia.";
		cout<<"\n7. Salir."
		cout<<"\n\nIngrese un numero: ";
		cin>>valor;
		switch(valor){
			case 1:{
				agregarS(pila);
				break;
			}
			case 2:{
				int nsucio;
				cout<<"ingrese cantidad de platos a ensuciar: ";
				cin<<nsucio;
				nagregarS(pila,nsucio);
				break;
			}
			case 3:{
				agregarL(pila);
				break;
			}
			case 4:{
				int nlimpio;
				cout<<"Ingrese la cantidad de platos a limpiar: ";
				cin>>nlimpio;
				nagregarL(pila,nlimpio);
				break;
			}
			case 5:{
				while(pila != NULL){
				mostrarL(pilaa);
				if(pila!= NULL){
					cout<<dato<<" , ";
				}else{
			cout<<" Todos los platos estan sucios.";
		}
	}
				break;
			}
			case 6:{
					while(pila != NULL){
				mostrarS(pila);
				if(pila!= NULL){
					cout<<dato<<" , ";
				}else{
			cout<<" Todos los platos estan limpios.";
		}
	}
				break;
			}
			case 7:{
				continuar = false;
				break;
			}
			default:{
				cout<<"Ha ingresado una opcion incorrecta.";
				break;
			}
		}
		
	}while(continuar);
	
	
	
	return 0;
}

