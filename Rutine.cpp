class Rutine{
    private:
    Push push;
    Pull pull;
    Leg leg;
    public:
    Rutine(Push, Pull, Leg);
    void printPush();
    void printPush(vector <Exercise*>);
    void printPull();
    void printPull(vector <Exercise*>);
    void printLeg();
    void printLeg(vector <Exercise*>);
    void printInfo();
};

Rutine::Rutine(Push push1, Pull pull1, Leg leg1){
    push=push1;
    pull=pull1;
    leg=leg1;
}

void Rutine::printPush(){
    push.getChest(0).printAll();
    push.getChest(1).printAll();
    push.getDeltoid(0).printAll();
    push.getDeltoid(1).printAll();
    push.getDeltoid(2).printAll();
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

void Rutine::printPull(){
    pull.getBack(0).printAll();
    pull.getBack(1).printAll();
    pull.getBicep().printAll();
}

void Rutine::printPull(vector <Exercise*> pullExercises){
    pullExercises[0]->exerciseType();
    pull.getBack(0).printAll();
    pullExercises[1]->exerciseType();
    pull.getBack(1).printAll();
    pullExercises[2]->exerciseType();
    pull.getBicep().printAll();
}

void Rutine::printLeg(){
    leg.getCuadricep(0).printAll();
    leg.getCuadricep(1).printAll();
    leg.getTwin().printAll();
}

void Rutine::printLeg(vector <Exercise*> legExercises){
    legExercises[0]->exerciseType();
    leg.getCuadricep(0).printAll();
    legExercises[1]->exerciseType();
    leg.getCuadricep(1).printAll();
    legExercises[2]->exerciseType();
    leg.getTwin().printAll();
}

void Rutine::printInfo(){
    cout<<"Monday Rutine\n"<<endl;
    printPush();
    cout<<"\nWednesday Rutine\n"<<endl;
    printPull();
    cout<<"\nFriday Rutine\n"<<endl;
    printLeg();
}
