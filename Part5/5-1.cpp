class IntClass1 {
    int a;
public: 
    IntClass1(int n =0): a(n) {} // constructor
    IntClass1& operator ++() { // Prefix notation ++ operator multiple definitions
        ++a;
        return *this;
    }
    int getValue() const return a;
};

