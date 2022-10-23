#include <iostream>
using namespace std;
int main()
{
	float x,s=0,piva=0.12,pdesc=0.10;
	int i=0,l,viva,vdesc,tn;
	cout<<"Ingrese l: "; cin>>l;
	do{
		cout<<"Ingrese x: "; cin>>x;
		i=i+1;
		s=s+x;

	}while(i<l);
	cout<<s<<endl;;
	viva=s*piva;
	vdesc=s*pdesc;
	tn=s+viva-vdesc;
	cout<<"El iva es: ";cout<<viva<<endl;
	cout<<"El descuento es: ";cout<<vdesc<<endl;
	cout<<"El total neto es: ";cout<<tn<<endl;
	return 0;
}

