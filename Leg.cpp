class Leg{
    private:
    Cuadricep cuadricep[2];
    Twin twin;
    public:
    Leg(Cuadricep, Cuadricep, Twin);
    Leg();
    Cuadricep getCuadricep(int);
    Twin getTwin();
};

Leg::Leg(Cuadricep Cuadricep1, Cuadricep Cuadricep2, Twin Twin1){
    cuadricep[0]=Cuadricep1;
    cuadricep[1]=Cuadricep2;
    twin=Twin1;
}

Leg::Leg(){
    Cuadricep cuadricep1("xxxx",0,0,0);
    Twin twin1("xxxx",0,0,0);
    cuadricep[0]=cuadricep1;
    cuadricep[1]=cuadricep1;
    twin=twin;
}

Cuadricep Leg::getCuadricep(int n){
    return cuadricep[n];
}

Twin Leg::getTwin(){
    return twin;
}