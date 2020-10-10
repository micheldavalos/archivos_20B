#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream archivo("prueba.txt");
    if (archivo.is_open()) {
        string linea;
        getline(archivo, linea); 
        cout << linea << endl;
    }
    archivo.close();
  
  	return 0;
}