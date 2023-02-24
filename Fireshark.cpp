#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
int caso;
    cout<<"Caso 1: ICMP"<<endl;
    cout<<"Caso 2: HTTP"<<endl;
    cout<<"Caso 3: TCP"<<endl;
    cout<<"Caso 4: DHCP"<<endl;
cout<<"¿En cual caso quieres abrir el tcpdump?";
cin>>caso;
switch(caso){
    case 1:
        cout<<"       OSI              PDU              TCP/IP"<<endl;
        cout<<"+---------------+----------------+------------------+"<<endl;
        cout<<"| Aplicación    |                |                  |"<<endl;
        cout<<"|_______________|                |                  |"<<endl;
        cout<<"| Presentación  |     Datos      |    Aplicación    |"<<endl;
        cout<<"|_______________|                |                  |"<<endl;
        cout<<"|   Sesión      |                |                  |"<<endl;
        cout<<"|_______________|________________|__________________|"<<endl;
        cout<<"| Transporte    |   Segmento     |    Transporte    |"<<endl;
        cout<<"|_______________|________________|__________________|"<<endl;
        cout<<"|    Red        |    Paquete     |    Internet      |"<<endl;
        cout<<"|_______________|________________|__________________|"<<endl;
        cout<<"|Enlace de datos|     Trama      |    Acceso a Red  |"<<endl;
        cout<<"|_______________|________________|                  |"<<endl;
        cout<<"|     Física    |      Bits      |                  |"<<endl;
        cout<<"+_______________|________________|__________________+"<<endl;
        cout<<endl;
        cout<<"ICMP maneja los mensajes de error y control para IP. Este protocolo permite a las pasarelas y los sistemas principales enviar informes de problemas a la máquina que envía un paquete."<<endl;
        cout<<"ICMP se encuentra en la capa de red en el modelo OSI y en la de Internet del modelo TCP/IP"<<endl;
        cout<<"Esnifando..."<<endl;
        system("ifconfig");
        system("tcpdump icmp");
        break;

    case 2:
    cout<<"       OSI              PDU              TCP/IP"<<endl;
        cout<<"+---------------+----------------+------------------+"<<endl;
        cout<<"| Aplicación    |                |                  |"<<endl;
        cout<<"|_______________|                |                  |"<<endl;
        cout<<"| Presentación  |     Datos      |    Aplicación    |"<<endl;
        cout<<"|_______________|                |                  |"<<endl;
        cout<<"|   Sesión      |                |                  |"<<endl;
        cout<<"|_______________|________________|__________________|"<<endl;
        cout<<"| Transporte    |   Segmento     |    Transporte    |"<<endl;
        cout<<"|_______________|________________|__________________|"<<endl;
        cout<<"|    Red        |    Paquete     |    Internet      |"<<endl;
        cout<<"|_______________|________________|__________________|"<<endl;
        cout<<"|Enlace de datos|     Trama      |    Acceso a Red  |"<<endl;
        cout<<"|_______________|________________|                  |"<<endl;
        cout<<"|     Física    |      Bits      |                  |"<<endl;
        cout<<"+_______________|________________|__________________+"<<endl;
        cout<<endl;
        cout<<"HTTP, es el nombre de un protocolo el cual nos permite realizar una petición de datos y recursos, como pueden ser documentos HTML."<<endl;
        cout<<"HTTP se encuentra en la capa de Aplicación en el modelo OSI y también en el modelo TCP/IP"<<endl;
        cout<<"Esnifando..."<<endl;
        system("tcpdump tcp port http");
        break;

        case 3:
    cout<<"       OSI              PDU              TCP/IP"<<endl;
        cout<<"+---------------+----------------+------------------+"<<endl;
        cout<<"| Aplicación    |                |                  |"<<endl;
        cout<<"|_______________|                |                  |"<<endl;
        cout<<"| Presentación  |     Datos      |    Aplicación    |"<<endl;
        cout<<"|_______________|                |                  |"<<endl;
        cout<<"|   Sesión      |                |                  |"<<endl;
        cout<<"|_______________|________________|__________________|"<<endl;
        cout<<"| Transporte    |   Segmento     |    Transporte    |"<<endl;
        cout<<"|_______________|________________|__________________|"<<endl;
        cout<<"|    Red        |    Paquete     |    Internet      |"<<endl;
        cout<<"|_______________|________________|__________________|"<<endl;
        cout<<"|Enlace de datos|     Trama      |    Acceso a Red  |"<<endl;
        cout<<"|_______________|________________|                  |"<<endl;
        cout<<"|     Física    |      Bits      |                  |"<<endl;
        cout<<"+_______________|________________|__________________+"<<endl;
        cout<<endl;
        cout<<"El protocolo TCP es el encargado de proporcionar un servicio de comunicación punto a punto entre dos host. Este protocolo de cuarto nivel está orientado a conexión en la capa de transporte y funciona a través de la conexión mutua entre cliente y servidor."<<endl;
        cout<<"TCP se encuentra en la capa de Transporte en el modelo OSI y también en el modelo TCP/IP"<<endl;
        cout<<"Esnifando..."<<endl;
        system("tcpdump tcp");
        break;

        case 4:
    cout<<"       OSI              PDU              TCP/IP"<<endl;
        cout<<"+---------------+----------------+------------------+"<<endl;
        cout<<"| Aplicación    |                |                  |"<<endl;
        cout<<"|_______________|                |                  |"<<endl;
        cout<<"| Presentación  |     Datos      |    Aplicación    |"<<endl;
        cout<<"|_______________|                |                  |"<<endl;
        cout<<"|   Sesión      |                |                  |"<<endl;
        cout<<"|_______________|________________|__________________|"<<endl;
        cout<<"| Transporte    |   Segmento     |    Transporte    |"<<endl;
        cout<<"|_______________|________________|__________________|"<<endl;
        cout<<"|    Red        |    Paquete     |    Internet      |"<<endl;
        cout<<"|_______________|________________|__________________|"<<endl;
        cout<<"|Enlace de datos|     Trama      |    Acceso a Red  |"<<endl;
        cout<<"|_______________|________________|                  |"<<endl;
        cout<<"|     Física    |      Bits      |                  |"<<endl;
        cout<<"+_______________|________________|__________________+"<<endl;
        cout<<endl;
        cout<<"El Protocolo de configuración dinámica de host es un protocolo cliente/servidor que proporciona automáticamente un host de Protocolo de Internet (IP) con su dirección IP y otra información de configuración relacionada, como la máscara de subred y la puerta de enlace predeterminada"<<endl;
        cout<<"DHCP se encuentra en la capa de Aplicación en el modelo OSI y también en el modelo TCP/IP"<<endl;
        cout<<"Esnifando..."<<endl;
        system("tcpdump port 67 or port 68 -e -n -vv");
        break;
}
return 0;
}
