class Bicep : public Exercise{
    public:
    Bicep();
    Bicep(string, float, int, int);
    string exerciseType() override; //Sobre escritura
};

Bicep::Bicep(){
    setName(" ");
    setWeight(0);
    setReps(0);
    setSets(0);
}

Bicep::Bicep(string name1, float weight1, int reps1, int sets1){
    setName(name1);
    setWeight(weight1);
    setReps(reps1);
    setSets(sets1);
}

string Bicep::exerciseType(){
    return "(Bicep) ";
}