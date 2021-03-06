Behavior of sizeof operator 

// 1st program to show that array and pointers are different
#include <iostream>
using namespace std;
 
int main()
{
    int arr[] = { 10, 20, 30, 40, 50, 60 };
    int* ptr = arr;
 
    // sizof(int) * (number of element in arr[]) is printed
    cout << "Size of arr[] " << sizeof(arr) << "\n";
 
    // sizeof a pointer is printed which is same for all
    // type of pointers (char *, void *, etc)
    cout << "Size of ptr " << sizeof(ptr);
    return 0;
}

Output
Size of arr[] 24
Size of ptr 8

Assigning any address to an array variable is not allowed. 

// IInd program to show that array and pointers are different
#include <stdio.h>
 
int main()
{
   int arr[] = {10, 20}, x = 10;
   int *ptr = &x; // This is fine
   arr = &x;  // Compiler Error
   return 0;
}

Output: 

 Compiler Error: incompatible types when assigning to 
              type 'int[2]' from type 'int *' 
              
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

Although array and pointer are different things, following properties of array make them look similar. 

Array name gives address of first element of array.

// 1st program to show that array and pointers are different
#include <iostream>
using namespace std;
int main()
{
    int arr[] = { 10, 20, 30, 40, 50, 60 };
 
    // Assigns address of array to ptr
    int* ptr = arr;
    cout << "Value of first element is " << *ptr;
    return 0;
}

Output
Value of first element is 10

Array members are accessed using pointer arithmetic. 

#include <iostream>
using namespace std;
 
int main()
{
    int arr[] = { 10, 20, 30, 40, 50, 60 };
    int* ptr = arr;
    cout << "arr[2] = " << arr[2] << "\n";
    cout << "*(arr + 2) = " << *(arr + 2) << "\n";
    cout << "ptr[2] = " << ptr[2] << "\n";
    cout << "*(ptr + 2) = " << *(ptr + 2) << "\n";
    return 0;
}

Output
arr[2] = 30
*(arr + 2) = 30
ptr[2] = 30
*(ptr + 2) = 30

Array parameters are always passed as pointers, even when we use square brackets. 

#include <bits/stdc++.h>
using namespace std;
 
int fun(int ptr[])
{
    int x = 10;
     
    // Size of a pointer is printed
    cout << "sizeof(ptr) = "
         << (int)sizeof(*ptr) 
         << endl;
 
    // This allowed because ptr is a 
    // pointer, not array
    ptr = &x;
 
    cout <<"*ptr =  " << *ptr;
 
    return 0;
}
 
// Driver code
int main()
{
    int arr[] = { 10, 20, 30, 40, 50, 60 };
     
    // Size of a array is printed
    cout << "sizeof(arr) = "
         << (int)sizeof(arr)
         << endl;
          
    fun(arr);
     
    return 0;
}
