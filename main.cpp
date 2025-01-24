#include <iostream>

using namespace std;

class Expression {
    public:
    virtual ~Expression() = default;

    virtual void display() = 0;
        virtual float calculate() = 0;
};

class Operation : Expression{
    public:
        Expression *_left_operant, *_right_operant;
};

class Constant : Expression {
    public:
        explicit Constant(const float value) {
           m_value = value;
        }
        float m_value;
        void display() override {
           cout << m_value;
        };
        float calculate() override {
            return m_value;
        };
};

class Addition : Operation{
    public:
        void display() override {
            _left_operant->display();
            cout << " + ";
            _right_operant->display();

        }
        float calculate() override {
            return _left_operant->calculate() + _right_operant->calculate();
        }
};

class Substraction : Operation{
    public:
        void display() override {
            _left_operant->display();
            cout << " - ";
            _right_operant->display();

        }
        float calculate() override {
            return _left_operant->calculate() - _right_operant->calculate();
        }
};

class Multiplication : Operation{
    public:
        void display() override {
            _left_operant->display();
            cout << " * ";
            _right_operant->display();

        }
        float calculate() override {
            return _left_operant->calculate() * _right_operant->calculate();
        }
};

class Division : Operation{
    public:
        void display() override {
            _left_operant->display();
            cout << " / ";
            _right_operant->display();

        }
        float calculate() override {
            return _left_operant->calculate() / _right_operant->calculate();
        }
};

int main() {

}