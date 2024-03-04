#ifndef MYCLASS_H
#define MYCLASS_H

template<typename T>
class MyClass {
private:
    T value;

public:
    MyClass(T value) : value(value) {}
    T getValue() const { return value; }
    void setValue(T value) { this->value = value; }
};

#endif 
