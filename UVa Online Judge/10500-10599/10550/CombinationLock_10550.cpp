#include <iostream>
using namespace std;


int grados_antihorario(int inicio, int fin){

	int grados=0;
	int grados_num=360/40;
	grados=fin-inicio;

	if (grados<0) grados=40-inicio+fin;

	return grados*grados_num;
}

int grados_horario(int inicio, int fin){

	int grados=0;
	int grados_num=360/40;
	grados= -(fin-inicio);

	if (grados<0) grados=40-fin+inicio;

	return grados*grados_num;
}


int main(){

	int inicio,n1,n2,n3,grados_totales;

	while (cin>>inicio>>n1>>n2>>n3 && (inicio || n1 || n2 || n3)){
		grados_totales=360*2;
		grados_totales+=grados_horario(inicio,n1);
		grados_totales+=360;
		grados_totales+=grados_antihorario(n1,n2);
		grados_totales+=grados_horario(n2,n3);	

		cout<<grados_totales<<endl;	
	}
	return 0;
}
                    
