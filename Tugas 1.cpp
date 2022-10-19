#include <iostream>
using namespace std;
int main(){
	int i, a, b, c, d, e, z;
	string x;
	
	cout<<"Jajanan yang tersedia:"<<endl<<endl;
	string jajanan[5]={"Batagor", "Telur Gulung", "Somay", "Sosis", "Cireng"};
	for (i=0; i<5; i++){
		cout<<jajanan[i]<<endl;
	}
	
	cout<<endl<<"Berapa jumlah batagor yang mau dibeli?"<<endl;
	cin>>a;
	if(a>=1){
		cout<<"Maukah memakai sambal?"<<endl;
		cin>>x;
		if (x=="ya"||x=="Ya"||x=="mau"||x=="Mau"||x=="Pakai"||x=="pakai"){
			cout<<"Batagor-mu akan memakai sambal"<<endl<<endl;
		}else if (x=="tak"|x=="Tak"|x=="tidak"|x=="Tidak"|x=="nggak"|x=="'Nggak"|x=="Enggak"|x=="enggak"){
			cout<<"Batagor-mu tidak akan memakai sambal"<<endl<<endl;
		}
	}else{
		cout<<"Kamu tidak akan beli batagor"<<endl<<endl;
	}
	
	cout<<endl<<"Berapa jumlah telur gulung yang mau dibeli?"<<endl;
	cin>>b;
	if(b>=1){
		cout<<"Maukah memakai sambal?"<<endl;
		cin>>x;
		if (x=="ya"||x=="Ya"||x=="mau"||x=="Mau"||x=="Pakai"||x=="pakai"){
			cout<<"Telur gulung-mu akan memakai sambal"<<endl<<endl;
		}else if (x=="tak"|x=="Tak"|x=="tidak"|x=="Tidak"|x=="nggak"|x=="'Nggak"|x=="Enggak"|x=="enggak"){
			cout<<"Telur gulung-mu tidak akan memakai sambal"<<endl<<endl;
		}
	}else{
		cout<<"Kamu tidak akan beli telur gulung"<<endl<<endl;
	}

	cout<<endl<<"Berapa jumlah somay yang mau dibeli?"<<endl;
	cin>>c;
	if(c>=1){
		cout<<"Maukah memakai sambal?"<<endl;
		cin>>x;
		if (x=="ya"||x=="Ya"||x=="mau"||x=="Mau"||x=="Pakai"||x=="pakai"){
			cout<<"Somay-mu akan memakai sambal"<<endl<<endl;
		}else if (x=="tak"|x=="Tak"|x=="tidak"|x=="Tidak"|x=="nggak"|x=="'Nggak"|x=="Enggak"|x=="enggak"){
			cout<<"Somay-mu tidak akan memakai sambal"<<endl<<endl;
		}
	}else{
		cout<<"Kamu tidak akan beli somay"<<endl<<endl;
	}

	cout<<endl<<"Berapa jumlah sosis yang mau dibeli?"<<endl;
	cin>>d;
	if(d>=1){
		cout<<"Maukah memakai sambal?"<<endl;
		cin>>x;
		if (x=="ya"||x=="Ya"||x=="mau"||x=="Mau"||x=="Pakai"||x=="pakai"){
			cout<<"Sosis-mu akan memakai sambal"<<endl<<endl;
		}else if (x=="tak"|x=="Tak"|x=="tidak"|x=="Tidak"|x=="nggak"|x=="'Nggak"|x=="Enggak"|x=="enggak"){
			cout<<"Sosis-mu tidak akan memakai sambal"<<endl<<endl;
		}
	}else{
		cout<<"Kamu tidak akan beli sosis"<<endl<<endl;
	}

	cout<<endl<<"Berapa jumlah cireng yang mau dibeli?"<<endl;
	cin>>e;
	if(e>=1){
		cout<<"Maukah memakai sambal?"<<endl;
		cin>>x;
		if (x=="ya"||x=="Ya"||x=="mau"||x=="Mau"||x=="Pakai"||x=="pakai"){
			cout<<"Cireng-mu akan memakai sambal"<<endl<<endl;
		}else if (x=="tak"|x=="Tak"|x=="tidak"|x=="Tidak"|x=="nggak"|x=="'Nggak"|x=="Enggak"|x=="enggak"){
			cout<<"Cireng-mu tidak akan memakai sambal"<<endl<<endl;
		}
	}else{
		cout<<"Kamu tidak akan beli cireng"<<endl<<endl;
	}
	
	z=(a*1000)+(b*1000)+(c*1000)+(d*1000)+(e*1000);
	cout<<"Jumlah harga yang harus dibayar: Rp. "<<z<<endl<<endl;
	cout<<"Terima kasih!"<<endl;
	

	return 0;
}