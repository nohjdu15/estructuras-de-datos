#include"panta.h" 

struct Nodo{
	int Dato;
	Nodo *siguiente;
	
};

Nodo *Pila = NULL;

void insertar_nodo_pila();
void imprimir_nodo_pila();
void elim_nodo(Nodo *&Pila, int &id);
void elim_lista(Nodo *&Pila, int &id);
int op,id;

main(){
		do{
		panta1();
		gt(33 ,9); co "	MEN"<<char(233)<<" PRINCIPAL PILAS-LIFO";
		gt(35,11); co "1.	APILAR";
		gt(35,12); co "2.	DESAPILAR";
		gt(35,13); co "3.	ELIMINAR UN NODO";
		gt(35,14); co "4.	DESTRUIR LA PILA";
		gt(35,15); co "5.	SALIR";
		gt(35,17); co "OPCI"<<char(224)<<"N: ";ci op;
		switch (op){
			case 1 :  insertar_nodo_pila(); break;
			case 2 :  imprimir_nodo_pila(); break;
			case 3 :  elim_nodo(Pila,id);break;
			case 4 :  elim_lista(Pila,id);break;
			case 5 : gt(34,20)co "HASTA LUEGO ;)";gt(1,24)exit(0);	
			default :gt(5,23)co "DIGITE DE 1 A 5 POR FAVOR:";gt(1,25)system("pause");		
  		}		
	}while(op!=5);
}

void insertar_nodo_pila(){
	
	system("cls");
	panta2();
	gt(24.5,7); co " INSERTAR NODOS A LA PILA";
	gt(24.5,9); co " Digite su ID universitario: "; ci id;
	
	Nodo *pila_nodo = new Nodo(); //Crear un espacio en memoria
	pila_nodo->Dato = id;//asignar el numero que se capturo al nodo que se creo
	pila_nodo->siguiente = Pila;
	Pila = pila_nodo;
	gt(20,15); co " NODO INSERTADO CORRECTAMENTE EN LA PILA";
	gt(20,20)system("pause");
		
}

void imprimir_nodo_pila(){
	system("cls");
	panta2();
	 int fila=15;
	 
	 Nodo *mostrar = Pila;
	 gt(26.5,7); co " MOSTRAR NODOS DE LA PILA";
	 
	 if(mostrar != NULL){
	 	while(mostrar != NULL){
	 		gt(7,fila); co mostrar->Dato;
	 		mostrar = mostrar->siguiente;
	 		fila++;
		 }	
	 }else{
	 	gt(25,12); co " NO EXISTEN NODOS EN LA PILA";
	 }
	 gt(20,20)system("pause");
}

void elim_nodo(Nodo *&Pila, int &id){
	panta2();
	Nodo *aux=Pila;
	id=aux->Dato;
	Pila=aux->siguiente;
	delete aux;
	gt(20,18); co "NODO "<<id<<" ELIMINADO CORRECTAMENTE";
	gt(20,20)system("pause");
}

void elim_lista(Nodo *&Pila, int &id){
	panta2();
	do{
		Nodo *aux=Pila;
		id=aux->Dato;
		Pila=aux->siguiente;
		delete aux;
   }while(Pila!=NULL);
   	gt(20,18); co "PILA ELIMINADA CORRECTAMENTE";
   	gt(20,20)system("pause");
}

