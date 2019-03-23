#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>
#include <sstream>
using namespace std;

class pruebaTesteo{

public:
  void MetPrueba(float);
};

string convercion(const float& val){
     stringstream s;
     s<<val;
     return s.str();
}

void pruebaTesteo::MetPrueba(float a){
     float x = 0;
     string var = ""+convercion(a);
     ofstream archivo;
     archivo.open("archivo.txt",ios::app);
     
     if(a<1){
             if(var.length()==1){
                  archivo << "\n   "<<a<<"            FALSE"<<"           FALSE" << "          FAIL"<<"         0";
             }
             else if(var.length()==2){
                  archivo << "\n   "<<a<<"           FALSE"<<"           FALSE" << "          FAIL"<<"         0";
             }
             else if(var.length()==3){
                  archivo << "\n   "<<a<<"          FALSE"<<"           FALSE" << "          FAIL"<<"         0";
             }
     }
     else if(a>=1 && a<=5){
          x = a * 10;
          archivo << "\n    "<<a<<"           TRUE"<<"            TRUE" << "           PASS"<<"         "<<x;
     }
     else if(a>=6 && a<=10){
          x = a * 9;
          if(a==10){
               archivo << "\n    "<<a<<"          TRUE"<<"            TRUE" << "           PASS"<<"         "<<x;
          }
          else{
               archivo << "\n    "<<a<<"           TRUE"<<"            TRUE" << "           PASS"<<"         "<<x;
          }
     }
     else if(a>=11){
          x = a * 7;
          archivo << "\n    "<<a<<"          TRUE"<<"            TRUE" << "           PASS"<<"         "<<x;
     }
     archivo.close();
}
