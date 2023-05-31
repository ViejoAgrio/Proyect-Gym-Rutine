class Pull{
    private:
    Back back[2];
    Bicep bicep;
    public:
    Pull(Back, Back, Bicep);
    Pull();
    Back getBack(int);
    Bicep getBicep();
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


