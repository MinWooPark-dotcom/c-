int a = 10, b = 20;
int &aRef = a; // aRef가 a를 참조하라는 의미, 어떤 변수를 참조하도록 초기화하는 것은 참조를 선언할 때만 가능, 이후에 변경 불가
cout << aRef << endl;
aRef = 100; // aRef에 100을 넣는 것은 a에 100을 넣은 것과 동일
aRef = b;