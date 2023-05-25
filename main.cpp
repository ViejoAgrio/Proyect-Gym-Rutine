#include <iostream>
#include <string>
#include "Exercise.cpp"
#include "Back.cpp"
#include "Biceps.cpp"
#include "Chest.cpp"
#include "Tricep.cpp"
#include "Deltoid.cpp"
#include "Cuadricep.cpp"
#include "Twin.cpp"

using namespace std;

int main(){
    Exercise ex("curl",20,8,1);
    Tricep dom("Head Breaker",10,8,3);
    cout<<dom.getName();
    ex.provingOverride();
    dom.provingOverride();
    dom.Exercise::provingOverride();
}