    class Calculator {
    public:
        int result;
        Calculator& add(int num) {
            result += num;
            return *this; // Returns a reference to the current object
        }
        Calculator& subtract(int num) {
            result -= num;
            return *this;
        }
    };

    // Usage:
    Calculator calc;
    calc.add(5).subtract(2); // Method chaining3
