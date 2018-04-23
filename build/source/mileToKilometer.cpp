#include <iostream>
#include <string>
using std::cout;
using std::cin;
int main(){
    cout<<"Bitte geben Sie das Meilen ein:\n";
    double Meilen=0;
    cin>>Meilen;
    double Kilometer=Meilen*1.6093;
    cout<<Meilen<<" Meilen "<<"rechnet in Kilometer um: "<<Kilometer<<" Kilometer\n";
    return 0;
}
/* # Kommentieren Sie die folgenden Zeilen für die Aufgabe `mileToKilometer` aus
   #add_executable(mileToKilometer mileToKilometer.cpp)
   In order to build mileToKilometer, add this command to my CMakeLists.txt, listing all required
   C++ source files-mileToKilometer.cpp.
   the add_executable() command, whilch requests that an executable is to be built using
   the mileToKilometer.cpp source file.The first argument to the add_executable() function
   is the name of the executable to be built, and the second argument is the source file
   from which to build the executable.
 */
