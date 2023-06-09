class Deltoid : public Exercise{
    public:
    Deltoid();
    Deltoid(string, float, int, int);
    string exerciseType() override; //Sobre escritura
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

string Deltoid::exerciseType(){
    return "(Deltoid) ";
}