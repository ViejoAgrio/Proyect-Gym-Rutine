class Rutine{
    private:
    Push push;
    Pull pull;
    Leg leg;
    public:
    Rutine(Push, Pull, Leg);
    void setPush(Push);
    void setLeg(Leg);
    void setPull(Pull);
    string printPush();
    string printPush(vector <Exercise*>); //Sobre carga de atributos
    string printPull();
    string printPull(vector <Exercise*>); //Sobre carga de atributos
    string printLeg();
    string printLeg(vector <Exercise*>); //Sobre carga de atributos
    string allRutine();
};

Rutine::Rutine(Push push1, Pull pull1, Leg leg1){
    push=push1;
    pull=pull1;
    leg=leg1;
}

void Rutine::setPush(Push pushtoset){
    push=pushtoset;
}

void Rutine::setPull(Pull pulltoset){
    pull=pulltoset;
}

void Rutine::setLeg(Leg legtoset){
    leg=legtoset;
}

string Rutine::printPush(){
    string chest1=push.getChest(0).printInfo();
    string chest2=push.getChest(1).printInfo();
    string deltoid1=push.getDeltoid(0).printInfo();
    string deltoid2=push.getDeltoid(1).printInfo();
    string deltoid3=push.getDeltoid(2).printInfo();
    return chest1 + chest2 + deltoid1 + deltoid2 + deltoid3;
}

string Rutine::printPush(vector<Exercise*> pushExercises){
    
    string chest1=push.getChest(0).printInfo();
    string chest2=push.getChest(1).printInfo();
    string deltoid1=push.getDeltoid(0).printInfo();
    string deltoid2=push.getDeltoid(1).printInfo();
    string deltoid3=push.getDeltoid(2).printInfo();
    return pushExercises[0]->exerciseType() + chest1 + pushExercises[1]->exerciseType() + chest2 
    + pushExercises[2]->exerciseType() + deltoid1 + pushExercises[3]->exerciseType() + deltoid2 
    + pushExercises[4]->exerciseType()  + deltoid3; //La funcion exerciseType() esta sobre escrita en cada clase
}

string Rutine::printPull(){
    string pull1=pull.getBack(0).printInfo();
    string pull2=pull.getBack(1).printInfo();
    string bicep1=pull.getBicep().printInfo();
    return pull1 + pull2 + bicep1;
}

string Rutine::printPull(vector <Exercise*> pullExercises){
    string pull1=pull.getBack(0).printInfo();
    string pull2=pull.getBack(1).printInfo();
    string bicep1=pull.getBicep().printInfo();
    return pullExercises[0]->exerciseType() + pull1 + pullExercises[1]->exerciseType() + pull2 + pullExercises[2]->exerciseType() + bicep1;
    //La funcion exerciseType() esta sobre escrita en cada clase
}

string Rutine::printLeg(){
    string leg1=leg.getCuadricep(0).printInfo();
    string leg2=leg.getCuadricep(1).printInfo();
    string twin1=leg.getTwin().printInfo();
    return leg1 + leg2 + twin1;
}

string Rutine::printLeg(vector <Exercise*> legExercises){
    string leg1=leg.getCuadricep(0).printInfo();
    string leg2=leg.getCuadricep(1).printInfo();
    string twin1=leg.getTwin().printInfo();
    return legExercises[0]->exerciseType() + leg1 + legExercises[1]->exerciseType() + leg2 + legExercises[2]->exerciseType() + twin1;
    //La funcion exerciseType() esta sobre escrita en cada clase
}

string Rutine::allRutine(){
    return "Monday Routine\n" + printPush() + "\nWednesday Routine\n" + printPull() + "\nFriday Routine\n" + printLeg();
}
