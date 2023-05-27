#include <iostream>
#include <string>
#include <vector>
#include "Exercise.cpp"
#include "Back.cpp"
#include "Biceps.cpp"
#include "Chest.cpp"
#include "Tricep.cpp"
#include "Deltoid.cpp"
#include "Cuadricep.cpp"
#include "Twin.cpp"
#include "Leg.cpp"
#include "Pull.cpp"
#include "Push.cpp"
#include "Rutine.cpp"

using namespace std;

int main(){
    //Polimorfismo
    vector <Exercise*> exercises;
    exercises.push_back(new Back("Remo",30,11,4));
    exercises.push_back(new Bicep("Curl",20,8,4));
    exercises.push_back(new Tricep("Rompe Craneos",20,8,4));

    vector<Exercise*>::const_iterator i;
    for(i=exercises.begin();i!=exercises.end();i++){
        (*i)->exerciseType();
    }
    return 0;
}