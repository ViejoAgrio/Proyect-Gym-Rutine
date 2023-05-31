class Deltoid : public Exercise{
    public:
    Deltoid();
    Deltoid(string, float, int, int);
    void exerciseType() override;
};

Deltoid::Deltoid(){
    setName(" ");
    setWeight(0);
    setReps(0);
    setSets(0);
}

Deltoid::Deltoid(string name1, float weight1, int reps1, int sets1){
    setName(name1);
    setWeight(weight1);
    setReps(reps1);
    setSets(sets1);
}

void Deltoid::exerciseType(){
    cout<<"(Deltoid) ";
}