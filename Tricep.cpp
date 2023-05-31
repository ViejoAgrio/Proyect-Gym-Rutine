class Tricep : public Exercise{
    public:
    Tricep();
    Tricep(string, float, int, int);
    void exerciseType() override;
};

Tricep::Tricep(){
    setName(" ");
    setWeight(0);
    setReps(0);
    setSets(0);
}

Tricep::Tricep(string name1, float weight1, int reps1, int sets1){
    setName(name1);
    setWeight(weight1);
    setReps(reps1);
    setSets(sets1);
}

void Tricep::exerciseType(){
    cout<<"(Tricep) ";
}