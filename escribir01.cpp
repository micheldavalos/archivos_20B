#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream archivo("prueba.txt");
    if (archivo.is_open()) {
        char palabra[] = "hola";
        archivo.write(palabra, sizeof(palabra));
    }
    archivo.close();
  
  	return 0;
}