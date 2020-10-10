#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream archivo("prueba.txt");
    if (archivo.is_open()) {
        archivo << "Hola desde un archivo" << endl;
    }
    archivo.close();
  
  	return 0;
}