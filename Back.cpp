class Back : public Exercise{
    public:
    Back();
    Back(string, float, int, int);
    string exerciseType() override;
};

Back::Back(){
    setName(" ");
    setWeight(0);
    setReps(0);
    setSets(0);
}

Back::Back(string name1, float weight1, int reps1, int sets1){
    setName(name1);
    setWeight(weight1);
    setReps(reps1);
    setSets(sets1);
}

string Back::exerciseType(){
    return "(Back) ";
}