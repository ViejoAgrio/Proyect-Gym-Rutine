#include <iostream>
#include <string>
#include <vector>
#include "Exercise.cpp"
#include "Back.cpp"
#include "Biceps.cpp"
#include "Chest.cpp"
#include "Deltoid.cpp"
#include "Cuadricep.cpp"
#include "Twin.cpp"
#include "Leg.cpp"
#include "Pull.cpp"
#include "Push.cpp"
#include "Rutine.cpp"

using namespace std;

int main(){
    Chest benchPress("Bench Press", 60, 8, 4);
    Chest deeps("Deeps", 25, 10, 3);
    Deltoid militaryPress("Military Press", 30, 8, 4);
    Deltoid lateralRaises("Lateral Raises", 25, 16, 4);
    Deltoid ropeLateralRaises("Rope Lateral Raises", 10, 16, 3);
    Push monday(benchPress, deeps, militaryPress, lateralRaises, ropeLateralRaises);

    /*vector <Exercise*> pushExercises;
    pushExercises.push_back(&militaryPress);
    pushExercises[0]->exerciseType();*/

    Back remo("Remo",30,11,4);
    Back latPulldowns("LatPulldowns",174,10,4);
    Bicep curl("Curl",30,8,4);
    Pull wednesday(remo, latPulldowns, curl);

    Cuadricep legExtension("Leg Extension",160,11,4);
    Cuadricep hipThrust("Hip Thrust", 80, 10, 4);
    Twin twinsExtension("Twins Extension", 30, 12, 4);
    Leg friday(legExtension, hipThrust, twinsExtension);

    Rutine rutine1(monday, wednesday, friday);

    //Polimorfismo

    vector <Exercise*> pushExercises;
    pushExercises.push_back(&benchPress);
    pushExercises.push_back(&deeps);
    pushExercises.push_back(&militaryPress);
    pushExercises.push_back(&lateralRaises);
    pushExercises.push_back(&ropeLateralRaises);

    vector <Exercise*> pullExercises;
    pullExercises.push_back(&remo);
    pullExercises.push_back(&latPulldowns);
    pullExercises.push_back(&curl);

    vector <Exercise*> legExercises;
    legExercises.push_back(&legExtension);
    legExercises.push_back(&hipThrust);
    legExercises.push_back(&twinsExtension);

    /*vector<Exercise*>::const_iterator i;
    for(i=pushExercises.begin();i!=pushExercises.end();i++){
        (*i)->exerciseType();
    }*/

    string pushrutine;
    pushrutine=rutine1.allRutine();
    cout<<pushrutine;

    return 0;
}
