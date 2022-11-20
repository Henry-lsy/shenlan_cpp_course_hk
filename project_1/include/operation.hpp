#include <iostream>

using namespace std;

class Operation
{
public:
    virtual double calculate(double, double) const = 0;

    virtual void display() const = 0;
protected:
    double op1_
};

class Add : public Operation
{
public: 
    double calculate(double op1_, double op2) const override
    {
        return op1_ + op2_;
    }

    void display() const override
    {
        cout << op1_ << " + " << op2_ << " = ?" << endl; 
    }
};


class Subs : public Operation
{
private:
    double calculate(double op1_, double op2) const override
    {
        return op1_ - op2_;
    }

    void display() const override
    {
        cout << op1_ << " - " << op2_ << " = ?" << endl; 
    }
};


class OperationFactory
{
public:

    virtual Operation* FactoryMethod() const=0;

    void DoSomething(double op1, double op2)
    {
        this->Operation
    }

}

class AddOperationFactory: public OperationFactory
{
public:
    Operation* FactoryMethod() override
    {
        return new Add(op1_, op2_);
    }

}