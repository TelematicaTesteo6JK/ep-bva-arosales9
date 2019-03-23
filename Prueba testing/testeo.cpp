#include <cstdlib>
#include <iostream>
#include <fstream>
#include <vector>
#include "funcionTesteo.h"

using namespace std;

int main()
{
    //Test Data
    pruebaTesteo p;
    ofstream archivo;
    archivo.open("archivo.txt",ios::app);
    archivo << "\n \n";
    archivo << "Test data | Expected result | Actual result | Pass/Fail | Pago";
    archivo.close();
    
    float TestData[10] = {-15,1,2,6,10,11,15,-1, -2, -3}; 
    for(int i = 0; i < 10; i++){
            p.MetPrueba(TestData[i]);
    }
    system("PAUSE");
    return 0;
}
