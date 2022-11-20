#include"panta.h" 

int op;

main(){
		do{
		panta1();
		gt(33 ,9); co "	MEN"<<char(263<<)" PRINCIPAL";
		gt(35,11); co "1.	PILAS";
		gt(35,12); co "2.	COLAS";
		gt(35,13); co "3.	LISTAS";
		gt(35,14); co "4.	LISTAS CIRCULARES";
		gt(35,15); co "5.	ARBOLES";
		gt(35,16); co "6.	SALIR";
		gt(35,18); co "OPCI"<<char(224)<<"N:";ci op;
		switch (op){
			case 1 :  break;
			case 2 :  break;
			case 3 :  break;
			case 4 :  break;
			case 5 :  break;
			case 6 : gt(34,20)co "HASTA LUEGO ;)";gt(1,24)exit(0);	
			default :gt(5,23)co "DIGITE DE 1 A 5 POR FAVOR:";gt(1,25)system("pause");		
  		}		
	}while(op!=6);
}	
	
	
	
	
	
	
	
	
	

