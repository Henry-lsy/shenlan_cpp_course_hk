
struct Question
{
    question (double op1_, double op2_): op1(op1_), op2(op2_){}
    double op1;
    double op2;
}

struct SolutionInfo
{
    SolutionInfo(double op1_, double op2_, double wrong_answer_):
        question(op1_, op2_), wrong_answer(wrong_answer_)
    {}
    bool if_correct;
    double time_cost;
    double wrong_answer;
    Question question;
}


enum Level{EASY, MIDDLE, DIFFICULTY};

class Game
{
public:
    Game(int question_number, Level game_level):
        question_number_(question_number),
        game_level_(game_level)
        {
            solution_set.reserve(question_number);
        };
    void setGameInfo();
    Operation* OperationGenerator();
    void play();
    void display_time_record() const;
    void display_score() const;

private:
    int question_number_;
    Level game_level_; 
    double score_{0};
    vector<SolutionInfo>() solution_set_;
}