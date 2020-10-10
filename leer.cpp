#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream archivo("prueba.txt");
    if (archivo.is_open()) {
        char c;
        while (!archivo.eof()) {
            archivo.read(&c, 1);
            cout << c;
        }       
    }
    archivo.close();
  
  	return 0;
}