class IntClass2 {
    int a;
public:
    IntClass2(int n=0): a(n) {} // constructor
    IntClass2 operator ++ (int) { // Postfix notation ++ operator multiple definitions
        ++a;
        return tmp;
    }
    int getValue() const { retrun a; }
};
