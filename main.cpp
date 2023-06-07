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

    cout<<"This is your weeek routine"<<endl;
    cout<<rutine1.allRutine()<<endl;

    int opcion=0;
    while (opcion!=4)
    {
        cout<<"Introduce 1, 2 or 3 to watch specifically push, pull or Leg routine, introduce 4 to end program"<<endl;
        cin>>opcion;
            switch (opcion)
        {
        case 1:
            cout<<rutine1.printPush(pushExercises)<<endl;
            cout<<"Want a new challenge? introduce 1 to make it harder, otherwise 0 to keep this difficult"<<endl;
            cin>>opcion;
            if (opcion==1)
            {
                cout<<"Routine updated"<<endl;
                monday.operator++();
                rutine1.setPush(monday);
            }
            break;
        case 2:
            cout<<rutine1.printPull(pullExercises)<<endl;
            cout<<"Want a new challenge? introduce 1 to make it harder, otherwise 0 to keep this difficult"<<endl;
            cin>>opcion;
            if (opcion==1)
            {
                cout<<"Routine updated"<<endl;
                wednesday.operator++();
                rutine1.setPull(wednesday);
            }
            break;
        case 3:
            cout<<rutine1.printLeg(legExercises)<<endl;
            cout<<"Want a new challenge? introduce 1 to make it harder, otherwise 0 to keep this difficult"<<endl;
            cin>>opcion;
            if (opcion==1)
            {
                cout<<"Routine updated"<<endl;
                friday.operator++();
                rutine1.setLeg(friday);
            }
            break;
        case 4:
            cout<<rutine1.allRutine()<<endl;
            return 0;
        
        default:
            cout<<"Invalid input, try again"<<endl;
            break;
        }
    }
}
