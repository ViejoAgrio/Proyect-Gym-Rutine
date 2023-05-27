class Leg{
    private:
    Cuadricep cuadricep[2];
    Twin twin;
    public:
    Leg(Cuadricep, Cuadricep, Twin, Twin);
};

Leg::Leg(Cuadricep Cuadricep1, Cuadricep Cuadricep2, Twin Twin1, Twin Twin2){
    cuadricep[1]=Cuadricep1;
    cuadricep[2]=Cuadricep2;
    twin=Twin1;
}