class Pull{
    private:
    Back back[2];
    Bicep bicep;
    public:
    Pull(Back, Back, Bicep);
    Pull();
    Back getBack(int);
    Bicep getBicep();
    void operator++(); //Sobre carga de operadores
};

Pull::Pull(Back back1, Back back2, Bicep bicep1){
    back[0]=back1;
    back[1]=back2;
    bicep=bicep1;
}

Pull::Pull(){
    Back back1("xxxx",0,0,0);
    Bicep bicep1("xxxx",0,0,0);
    back[0]=back1;
    back[1]=back1;
    bicep=bicep1;
}

Back Pull::getBack(int n){
    return back[n];
}

Bicep Pull::getBicep(){
    return bicep;
}

void Pull::operator++(){
    this->back[0].setReps(this->back[0].getReps()+1);
    this->back[1].setReps(this->back[1].getReps()+1);
    this->bicep.setReps(this->bicep.getReps()+1);
}
