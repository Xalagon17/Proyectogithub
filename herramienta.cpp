#include <iostream>

#include <cstdlib>

using namespace std;

int main() {

int o,x;

char w;

cout<< "1. Verifica que interfaces de red tienes."<<endl;

cout<< "2. Comprueba si tienes conectividad con google.es"<<endl;

cout<< "3. Abre el wireshark."<<endl;

cout<< "4. Abre el tcpdump."<<endl;

cout<< "5. Comprueba la versión del Kernel."<<endl;

cout<< "6. Te muestra el nombre de tu dispositivo."<<endl;
cout<< "\n";
cout<< "\n";
  cout<< "\n";
  cout<< "\n";
cout<< "¿Que opción quieres elegir?"<<endl;

cin>>o;

switch(o){

case 1:

system("ip a");

break;

case 2:

system("ping 8.8.8.8 -c 4");

break;

case 3:

cout<<"Para abrir wireshark necesitas estar en un sistema gráfico."<<endl;

cout<<"¿Estas en un sistema gráfico? s/n: ";

cin>>w;

if(w=='S' or w=='s') {

system("wireshark");

}

if(w=='N' or w=='n') {

cout<<"Vayase a un sistema gráfico y ejecute de nuevo el programa.";

}

else{

cout<<"La letra que has pulsado no sirve para nada en este caso";
}

break;

case 4:

cout<<"Si no eres root, no puedes ejecutar el tcpdump, ¿eres root? s/n: ";

cin>>w;

if(w=='s' or w=='S') {

cout<<"Pulsa 1 si el protocolo que vas a usar es ICMP, y si el protocolo es ARP pulse 2."<<endl;

cin>>x;

switch(x){

case 1:

system("tcpdump icmp –c 10");

break;

case 2:

system("tcpdump arp –c 10");

break;

default:

cout<<"No hay otra opción.";
}

break;

}

if(w=='N' or w=='n'){

cout<<"No puedes ejecutar el tcpdump.";

}

break;

case 5:

system("lsb_release –a");

break;

case 6:

system("hostnamectl");

break;

default:

cout<<"Esa opción no existe.";
main();
}

cout<<"\n";

return 0;

}
