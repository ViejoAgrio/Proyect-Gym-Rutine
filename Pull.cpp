class Pull{
    private:
    Back back[2];
    Bicep bicep[2];
    public:
    Pull(Back, Back, Bicep, Bicep);
};

Pull::Pull(Back back1, Back back2, Bicep bicep1, Bicep bicep2){
    back[1]=back1;
    back[2]=back2;
    bicep[1]=bicep1;
    bicep[2]=bicep2;
}



