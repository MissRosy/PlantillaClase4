#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <math.h>

using namespace std;

int opcion, respuesta;

int main(){
         do{ 
                cout<<"-----Figuras geometricas-----------------\n";
                cout<<"|                                       |\n";
                cout<<"|    1.-  Circulo                       |\n";
                cout<<"|    2.-  Triangulo                     |\n";
                cout<<"|    3.-  Rectangulo                    |\n";
                cout<<"|    4.-  Cuadrado                      |\n";
                cout<<"|    5.-  Rombo                         |\n";
                cout<<"|    6.-  Paralelogramo                 |\n";
                cout<<"|    7.-  Trapecio                      |\n";
                cout<<"|    8.-  Pentagono                     |\n";
                cout<<"|    9.-  Hexagono                      |\n";
                cout<<"|    10.- Salir                         |\n";
                cout<<"|                                       |\n";
                cout<<"-------------------MissRosy-------------\n";
                cout<<"Dime una opcion: \n";
                cin>>opcion;
                cout<<"-----------------------------\n";
                switch (opcion)
                {
                    case 1:
                        {}
                        break;
                    case 2:
                        {}
                        break;
                    case 3:
                        {}
                        break;
                    case 4:
                        { }
                        break;
                    case 5:
                        { }
                        break;
                    case 6:
                        { }
                        break;
                    case 7:
                        { }
                        break;
                    case 8:
                        { }
                        break;
                    case 9:
                        { }
                        break;
                    case 10:
                        break;
                }
                cout<<"-------------------------------";
                cout<<"¿Deseas continuar? 1 SI / 2 NO ";
                cin>>respuesta;
            }
            while (respuesta != 2);
}