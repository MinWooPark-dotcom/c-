// 4-8
#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED
class Person  {
    char *name;
    char *addr;
public:
    Person(const char *name, const char *addr); // constructor 
    ~Person(); // destructor
    void print() const;
    void chAddr(const char *newAddr);
};
#endif