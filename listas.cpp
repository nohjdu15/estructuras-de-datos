#include"panta.h" 

struct Nodo{
	int Dato;
	Nodo *siguiente;
	
};

Nodo *lista = NULL;
Nodo *frente=NULL; //ELIMINAR NODOS
Nodo *final=NULL; //INSERTAR NODOS

void insertar_nodo_inicio();
void insertar_nodo_final();
void insertar_lista_posicion(Nodo *&,int);
void mostrar_lista(Nodo *);

int op,id;

main(){
		do{
		panta1();
		gt(33 ,9); co "	MEN"<<char(233)<<" PRINCIPAL LISTAS";
		gt(35,11); co "1.	INSERTAR NODO AL INICIO";
		gt(35,12); co "2.	INSERTAR NODO AL FINAL";
		gt(35,13); co "3.	INSERTAR NODO EN POSICION";
		gt(35,14); co "4.	MOSTRAR LISTA";
		gt(35,15); co "5.	SALIR";
		gt(35,17); co "OPCI"<<char(224)<<"N: ";ci op;
		switch (op){
			case 1 :  insertar_nodo_inicio(); break;
			case 2 :  
				panta2();
				gt(5,7); co "INSERTANDO NODOS A LA LISTA";
				gt(5,8); co "DIGITE UN NUMERO: "; ci id;
				insertar_nodo_final(); break;
			case 3 :  
				panta2();
				gt(24.5,7); co " INSERTAR NODOS A LA LISTA";
	        	gt(24.5,9); co " Digite su ID universitario: "; ci id;
				insertar_lista_posicion(lista,id);break;
			case 4 : 
				panta2();
				cout<<"\n\n\n       ";
				mostrar_lista(lista);break;
			case 5 : 
				gt(34,20)co "HASTA LUEGO ;)";
				gt(1,24)exit(0);	
			default :gt(5,23)co "DIGITE DE 1 A 5 POR FAVOR:";gt(1,25)system("pause");		
  		}		
	}while(op!=5);
}

void insertar_nodo_inicio(){
	
	system("cls");
	panta2();
	gt(24.5,7); co " INSERTAR NODOS A LA LISTA";
	gt(24.5,9); co " Digite su ID universitario: "; ci id;
	
	Nodo *nuevo_nodo = new Nodo(); //Crear un espacio en memoria
	nuevo_nodo->Dato = id;//asignar el numero que se capturo al nodo que se creo
	nuevo_nodo->siguiente = lista;
	lista = nuevo_nodo;
	gt(20,15); co " NODO INSERTADO CORRECTAMENTE EN LA LISTA";
	gt(20,20)system("pause");
		
}
void insertar_nodo_final(){	
	Nodo *nuevo_nodo=new Nodo();
	nuevo_nodo->Dato=id;
		if(frente==NULL){
			frente=nuevo_nodo;
			gt(5,9); co "NODO INSERTADO";
			final=nuevo_nodo;
		}
		else{
			final->siguiente=nuevo_nodo;
			gt(5,9); co "NODO INSERTADO";
			final=nuevo_nodo;
		}
	gt(20,20)system("pause");
}
void insertar_lista_posicion(Nodo *&lista,int id){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->Dato = id;
	
	Nodo *aux1 = lista;
	Nodo *aux2;
	
	while((aux1 != NULL) && (aux1->Dato < id)){
		aux2 = aux1;
		aux1 = aux1->siguiente;
	}
	if(lista == aux1){
		lista = nuevo_nodo;
	}
	else{
		aux2->siguiente = nuevo_nodo;
	}
	nuevo_nodo->siguiente = aux1;
	gt(20,15); co " NODO INSERTADO CORRECTAMENTE EN LA LISTA";
}
void mostrar_lista(Nodo *lista){
	
	Nodo *actual = new Nodo();
	actual = lista;
	while(actual != NULL){
		cout<<actual->Dato<<"-->";
		actual = actual->siguiente;
	}
	gt(20,15);system("pause");
}


