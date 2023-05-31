class Cuadricep : public Exercise{
    public:
    Cuadricep();
    Cuadricep(string, float, int, int);
    void exerciseType() override;
};

Cuadricep::Cuadricep(){
    setName(" ");
    setWeight(0);
    setReps(0);
    setSets(0);
}

Cuadricep::Cuadricep(string name1, float weight1, int reps1, int sets1){
    setName(name1);
    setWeight(weight1);
    setReps(reps1);
    setSets(sets1);
}

void Cuadricep::exerciseType(){
    cout<<"(Cuadricep) ";
}