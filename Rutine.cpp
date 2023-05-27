class Rutine{
    private:
    Pull pull;
    Push push;
    Leg leg;
    public:
    Rutine(Pull, Push, Leg);
};

Rutine::Rutine(Pull pull1, Push push1, Leg leg1){
    pull=pull1;
    push=push1;
    leg=leg1;
}