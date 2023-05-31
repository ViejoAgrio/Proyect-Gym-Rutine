class Rutine{
    private:
    Push push;
    Pull pull;
    Leg leg;
    public:
    Rutine(Push, Pull, Leg);
    void printPush();
    void printPush(int);
    void printPull();
    void printLeg();
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
    push.getDealtoid(0).printAll();
    push.getDealtoid(1).printAll();
    push.getDealtoid(2).printAll();
}

void Rutine::printPush(int n){
    
}

void Rutine::printPull(){
    pull.getBack(0).printAll();
    pull.getBack(1).printAll();
    pull.getBicep().printAll();
}

void Rutine::printLeg(){
    leg.getCuadricep(0).printAll();
    leg.getCuadricep(1).printAll();
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
