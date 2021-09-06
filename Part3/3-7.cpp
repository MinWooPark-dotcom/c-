void RtnA(int x);
void RtnB(int &x);
const int a = 10;

RtnA(a);
// RtnB(a); // error
RtnB(const_cast<int &>(a)); // OK