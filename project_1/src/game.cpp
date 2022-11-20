#include <iostream>
#include <cstdlib>
#include <vector>
#include <chrono>

#include "game.hpp"
#include "operation.hpp"

using namespace std;
using std::chrono;

void Game::display_time_record() const
{
    double average_time=0, max_time=0;
    double sum_time=0;
    for (const auto& solution_info: solution_set_)
    {
        sum_time += solution_info.time_cost;
        if (solution_info.time_cost > max_time)
            max_time = solution_info.time_cost;
    }
    average_time = max_time / solution_set_;
    std::cout << "Average time: " << average_time << std::endl;
    std::cout << "Max time: " << max_time << std::endl;
    std::cout << "Total time: " << sum_time << std::endl;
}

void Game::display_score() const
{
    for(const auto& solution_info: solution_set_) 
        std::cout << ""
}

void Game::play()
{
    double op1_, op2_, ans_;

    for (int i=0; i<question_number_; i++)
    {
        SolutionInfo solution_info;
        op1_ = rand() % 100;
        op2_ = rand() % 100;
        Operation* = OperationFactory.generate();
        auto start = high_resolution_clock::now();
        if (ans_ == Operation->run(op1_, op2_))
        {
            cout << "The answer is correct!" << endl;
            score_ += 1;
        }
        else
        {
            cout << "The answer is wrong!" << endl;
        }
        auto stop = high_resolution_clock::now()
        auto duration = duration_cast<microseconds>(stop - start);
        SolutionInfo.time_cost = duration
    }
    cout << "Game starts!!!\n";
    return true;
}
