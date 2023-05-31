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

    /*vector <Exercise*> exercises;
    exercises.push_back(new Chest("Remo",30,11,4));
    exercises.push_back(new Chest("Curl",20,8,4));
    exercises.push_back(new Deltoid("Rompe Craneos",20,8,4));
    exercises.push_back(new Deltoid("Rompe Craneos",20,8,4));
    exercises.push_back(new Deltoid("Rompe Craneos",20,8,4));

    vector<Exercise*>::const_iterator i;
    for(i=exercises.begin();i!=exercises.end();i++){
        (*i)->exerciseType();
    }*/

    Chest benchPress("Bench Press", 60, 8, 4);
    Chest deeps("Deeps", 25, 10, 3);
    Deltoid militaryPress("Military Press", 30, 8, 4);
    Deltoid lateralRaises("Lateral Raises", 25, 16, 4);
    Deltoid ropeLateralRaises("Rope Lateral Raises", 10, 16, 3);
    Push monday(benchPress, deeps, militaryPress, lateralRaises, ropeLateralRaises);
    //cout<<monday.getChestName();

    /*vector <Exercise*> exercises;
    exercises.push_back(&militaryPress);
    exercises[0]->exerciseType();*/

    Back remo("Remo",30,11,4);
    Back latPulldowns("LatPulldowns",174,10,4);
    Bicep curl("Curl",30,8,4);
    Pull wednesday(remo, latPulldowns, curl);

    Cuadricep legExtension("Leg Extension",160,11,4);
    Cuadricep hipThrust("Hip Thrust", 80, 10, 4);
    Twin twinsExtension("Twins Extension", 30, 12, 4);
    Leg friday(legExtension, hipThrust, twinsExtension);

    Rutine rutine1(monday, wednesday, friday);

    rutine1.printInfo();
    

    return 0;
}