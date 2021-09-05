// Call by reference in for loop
int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
for (int &a: arr) // a is a reference variable
    ++a; 