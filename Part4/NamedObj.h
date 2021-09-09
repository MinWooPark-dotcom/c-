#ifndef NAMEDOBJ_H_INCLUDED
#define NAMEDOBJ_H_INCLUDED
#include <iostream>
using namespace std;

class NamedObj {
    char *name;
    int id;
    static int nConstr;
    static int nDestr;
public:
    NamedObj(const char *s);
    ~NamedObj();
    void dispaly() const {
        cout << "ID:" << id << " -->  Name:" << name << endl;
    }
    static int nObj() {
        return nConstr - nDestr;
    }
};
#endif