/*Ejemplo Tipos de Datos
 *Este es un trabajo no estructurado, que consiste en escribir un programa que
  ejemplifique el uso de los tipos de datos básicos de C++ vistos en clase: bool,
  char, unsigned, int, double, y string.
 *Juan Carlos Chano Acevedo Motta
 *10/06/2020*/
 #include <iostream>
 #include <string>
 using namespace std;

 int main(){
     string nombre = "Juan Carlos Chano Acevedo Motta";
     cout<<"Nombre: "<<nombre<<endl;

     unsigned edad = 37;
     cout<<"Edad: "<<edad<<endl;

     long dni = 94474594;
     cout<<"Dni: "<<dni<<endl;

     char curso[6] = "k1051";
     cout<<"Curso: "<<curso<<endl;
     
     bool asistencia = true;
     double promedio = 7;
     cout<<"Promedio: "<<promedio<<endl;

     if (promedio >=6 and promedio <8 and asistencia == true){
         cout<<"El alumno aprobo la materia"<<endl;
     }
      else if (promedio >=8 and asistencia == true){
          cout<<"El alumno promociono"<<endl;
      }      
      else if(asistencia == false){
          cout<<"El alumno desaprobo por inasistencia"<<endl;
      }
      else if (promedio <6){
          cout<<"El alumno reprobo la materia"<<endl;
      }
    system("PAUSE()");
    return 0;
    }
