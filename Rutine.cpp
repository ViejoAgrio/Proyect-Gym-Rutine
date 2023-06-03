class Rutine{
    private:
    Push push;
    Pull pull;
    Leg leg;
    public:
    Rutine(Push, Pull, Leg);
    string printPush();
    void printPush(vector <Exercise*>);
    string printPull();
    void printPull(vector <Exercise*>);
    string printLeg();
    void printLeg(vector <Exercise*>);
    string allRutine();
};

Rutine::Rutine(Push push1, Pull pull1, Leg leg1){
    push=push1;
    pull=pull1;
    leg=leg1;
}

string Rutine::printPush(){
    string chest1=push.getChest(0).printInfo();
    string chest2=push.getChest(1).printInfo();
    string deltoid1=push.getDeltoid(0).printInfo();
    string deltoid2=push.getDeltoid(1).printInfo();
    string deltoid3=push.getDeltoid(2).printInfo();
    return chest1 + chest2 + deltoid1 + deltoid2 + deltoid3;
}

void Rutine::printPush(vector<Exercise*> pushExercises){
    pushExercises[0]->exerciseType();
    push.getChest(0).printAll();
    pushExercises[1]->exerciseType();
    push.getChest(1).printAll();
    pushExercises[2]->exerciseType();
    push.getDeltoid(0).printAll();
    pushExercises[3]->exerciseType();
    push.getDeltoid(1).printAll();
    pushExercises[4]->exerciseType();
    push.getDeltoid(2).printAll();
}

string Rutine::printPull(){
    string pull1=pull.getBack(0).printInfo();
    string pull2=pull.getBack(1).printInfo();
    string bicep1=pull.getBicep().printInfo();
    return pull1 + pull2 + bicep1;
}

void Rutine::printPull(vector <Exercise*> pullExercises){
    pullExercises[0]->exerciseType();
    pull.getBack(0).printAll();
    pullExercises[1]->exerciseType();
    pull.getBack(1).printAll();
    pullExercises[2]->exerciseType();
    pull.getBicep().printAll();
}

string Rutine::printLeg(){
    string leg1=leg.getCuadricep(0).printInfo();
    string leg2=leg.getCuadricep(1).printInfo();
    string twin1=leg.getTwin().printInfo();
    return leg1 + leg2 + twin1;
}

void Rutine::printLeg(vector <Exercise*> legExercises){
    legExercises[0]->exerciseType();
    leg.getCuadricep(0).printAll();
    legExercises[1]->exerciseType();
    leg.getCuadricep(1).printAll();
    legExercises[2]->exerciseType();
    leg.getTwin().printAll();
}

string Rutine::allRutine(){
    return "Monday Rutine\n" + printPush() + "\nWednesday Rutine\n" + printPull() + "\nFriday Rutine\n" + printLeg();
}
