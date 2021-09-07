// #ifndef COUNTER_H_INCLUDED

// #define COUNTER_H_INCLUDED

// class Counter {
//     int value;
// public:
//     void reset()
//         {
//             value = 0;
//         }
//     void count()
//         {
//             ++value;
//         }
//     int getValue() const
//     {
//         return value;
//     }
// };

// #endif 

// After adding the contsructor

#ifndef COUNTER_H_INCLUDED
#define COUNTER_H_INCLUDED

class Counter {
    int value;
public:
    Counter()  // constructor
        { value = 0; }
    void reset()
    { value = 0; }
    void count()
    { ++value; }
    int getValue() const
    { return value; }
};

#endif 