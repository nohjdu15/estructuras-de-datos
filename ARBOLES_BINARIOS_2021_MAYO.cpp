


#include"panta.h"

struct nodo{
	
	int dato;
	
	nodo *derecho;
	nodo *izquierdo;

};

nodo *arbol=NULL;

nodo *crearnodo(int);

void insertar_nodo_arbol( nodo *&arbol, int);
 void mostrar_nodos_arbol(nodo *,int);


char op;
int n,contador=0,cont;


main()
{
    do
    {
   panta1();
   gt(33,9);cout<<"MENU PRINCIPAL DE ARBOLES";
   gt(35,11);cout<<"1. INSERTAR NODOS AL ARBOL";
   gt(35,12);cout<<"2. MOSTRAR NODS DEL ARBOL";
   gt(35,13);cout<<"3. SALIR";
   gt(33,15);cout<<"OPCION:"; op=getche();
   switch(op)
   {
      	case '1': panta2();gt(5,7);co " INSERTAR NODOS AL ARBOL";
		          gt(5,10);co "DIGITE EL NUMERO PARA INSERTAR AL NODO:";
      	          cin>>n; 
      	         insertar_nodo_arbol( arbol, n);parar;
      	          break;
      	case '2': 	panta2();cout<<"\n\n\n\n\n mostrando el arbol completo \n\n\n";
                mostrar_nodos_arbol(arbol,contador);parar;
		  break;          
      	case '3': exit(0);
            }
 
}while(op != '3');
    
  
}	

nodo *crearnodo(int n){
	
	nodo *nuevo_nodo=new nodo();
	nuevo_nodo->dato=n;
	nuevo_nodo->derecho=NULL;
	nuevo_nodo->izquierdo=NULL;
	
	return nuevo_nodo;
}


void insertar_nodo_arbol( nodo *&arbol, int){
	if(arbol == NULL){
		//NODO RAIZ O  NODO PADRE
		nodo *nuevo_nodo=crearnodo(n);
		arbol=nuevo_nodo;
	}
	else{
		int valorraizpadre=arbol->dato;
		if( n < valorraizpadre){
			insertar_nodo_arbol(arbol->izquierdo,n);
		}
		else{	
			insertar_nodo_arbol(arbol->derecho,n);
		}
	}
	gt(15,18);co" NODO INSERTADO CORRECTAMENTE AL ARBOL......";
}


void mostrar_nodos_arbol(nodo *arbol,int contador){
  	if(arbol== NULL){ // ESTA VACIO el arbol
     	return ;    
	}else{
      	mostrar_nodos_arbol(arbol->derecho,contador+1);
      	for(int i=0;i<contador;i++){
        cout<<"    ";  
    	} 
      	cout<<arbol->dato<<endl; 
    }      
    mostrar_nodos_arbol(arbol->izquierdo,contador+1);
}
