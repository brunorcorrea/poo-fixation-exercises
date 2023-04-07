#include <iostream>

using namespace std;

class Value {
private:
    int value{};
public:
    Value(int value) {
        this->value = value;
    }

    Value() = default;

    int getValue() const {
        return this->value;
    }

    void setValue(int value) {
        this->value = value;
    }
};

int main() {
    Value* value1 = new Value();
    Value* value2 = new Value(2);

    value1->setValue(3);
    cout << "Current value of value1 is: " << value1->getValue() << endl;
    cout << "Current value of value2 is: " << value2->getValue() << endl;

    return 0;
}
