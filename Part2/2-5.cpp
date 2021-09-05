// Range-based for loop
int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int sum = 0;
for (int a: arr) // Repeat to sum the values of all elements in array arr
    sum += a; 
cout << "result = " << sum << endl;