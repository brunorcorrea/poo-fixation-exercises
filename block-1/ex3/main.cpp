#include <iostream>

using namespace std;

class Value {
private:
    int value;
public:
    int getValue() const {
        return this->value;
    }

    void setValue(int value) {
        this->value = value;
    }
};

int main() {
    Value* value = new Value();

    value->setValue(3);
    cout << "Current value is: " << value->getValue() << endl;

    return 0;
}
