
                    // Creating 2D Array row wise and column wise


// #include <iostream>
// using namespace std;
// int main(){

//     // Declare 2D Array.

//     int arr[3][3];

//     // Initialization 

//     int brr[3][3] = {
//         {1,2,3},
//         {4,5,6},
//         {2,4,8}
//     };

//     // Row - wise print.
//     //Outer Loop.

//     for(int i = 0; i<3; i++)
//     {
//         //For every row , we need to print vallue in each column.

//         for(int j=0; j<3; j++){
//             cout<<brr[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//     cout<<"Printing Column wise "<<endl;

//     //column Print.
//   for(int i = 0; i<3; i++)
//     {
//         //For every row , we need to print vallue in each column.

//         for(int j=0; j<3; j++){
//             cout<<brr[j][i]<<" ";
//         }
//         cout<<endl;
//     }

// }




                // Created 2D Array on the basis of user defined.



// #include<iostream>
// using namespace std;

// int main(){
//     int arr[4][3];
//     int rows = 4;
//     int cols = 3;

//     // row wise input.

//     for(int i=0;i<rows;i++)
//     {
//         for(int j=0;j<cols;j++)
//         {
//             cin>>arr[i][j];
//         }
//     }

//     cout<<"Printing row wise"<<endl;
    
//     for(int i=0;i<rows;i++)
//     {
//         for(int j=0;j<cols;j++)
//         {
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }

// }



        //Row wise sum in 2D Array.



//  #include <iostream>
// using namespace std;
// void rowSumArray(int arr[][3], int row, int col)
// {

//     for (int i = 0; i < row; i++)
//     {
//         int sum = 0;
//         for (int j = 0; j < col; j++)
//         {
//             sum += arr[i][j];
//         }
//         cout << sum << endl;
//     }
// }
// int main()
// {
//     int arr[3][3];
//     int row = 3;
//     int col = 3;
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }
//     rowSumArray(arr, row, col);
// }



                                                                  //Column wise sum in 2D Array.

// #include <iostream>
// using namespace std;
// void columnSumArray(int arr[][3], int row, int col)
// {

//     for (int i = 0; i < row; i++)
//     {
//         int sum = 0;
//         for (int j = 0; j < col; j++)
//         {
//             sum += arr[j][i];
//         }
//         cout << sum << endl;
//     }
// }
// int main()
// {
//     int arr[3][3];
//     int row = 3;
//     int col = 3;
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }
//  columnSumArray(arr, row, col);
// }


                                                                    // Linear search in 2D array.


// #include <iostream>
// using namespace std;
// bool find(int arr[][3], int row, int col, int key)
// {

//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             if (arr[i][j] == key)
//             {
//                 return true;
//                 break;
//             }
//         }
//     }
//     return false;
// }
// int main()
// {
//     int arr[3][3];
//     int row = 3;
//     int col = 3;
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }
//     int key;
//     cout << "Enter the key what you want to search: ";
//     cin >> key;
//     if (find(arr, row, col, key))
//     {
//         cout << "found it";
//     }
//     else
//     {
//         cout << "not found it";
//     }
// }




                                        // Maximum and minimum number of element in 2D array.




// #include <iostream>
// #include <limits.h>
// using namespace std;
// int maximum(int arr[][3], int row, int col)
// {
//     int max = INT_MIN;
//     for (int i = 0; i < row; i++)
//     {

//         for (int j = 0; j < col; j++)
//         {
//             if (arr[i][j] > max)
//             {
//                 max = arr[i][j];
//             }
//         }
//     }
//     return max;
// }
// int minimum(int arr[][3], int row, int col)
// {
//     int mini = INT_MAX;
//     for (int i = 0; i < row; i++)
//     {

//         for (int j = 0; j < col; j++)
//         {
//             if (arr[i][j] < mini)
//             {
//                 mini = arr[i][j];
//             }
//         }
//     }
//     return mini;
// }
// int main()
// {
//     int arr[3][3];
//     int row = 3;
//     int col = 3;
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }
//     cout << maximum(arr, row, col)<<endl;
//     cout << minimum(arr, row, col);
// }                 





                            //Transpose



// #include <iostream>
// using namespace std;
// void Transpose(int arr[][3], int row, int col, int transpose[][3])
// {

//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             transpose[j][i] = arr[i][j];
//         }
//     }

//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cout << arr[i][j];
//         }
//         cout << endl;
//     }
// }
// int main()
// {
//     int arr[3][3];
//     int row = 3;
//     int col = 3;
//     int transpose[3][3];
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cin >> arr[j][i];
//         }
//     }
//     Transpose(arr, row, col, transpose);
// }  




                    // Vector 2D Array.



// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<vector<int>>arr;

//     vector<int>a{1,2,3};
//      vector<int>b{2,4,6,4,8};
//       vector<int>c{1,3};


//       arr.push_back(a);
//        arr.push_back(b);
//         arr.push_back(c);


//         for(int i=0; i<arr.size();i++)
//         {
//             for(int j=0; j<arr[i].size();j++)
//             {
//                 cout<<arr[i][j]<<" ";
//             }
//             // cout<<endl;
//         }
// }





                                        // vector into vector(2dvector array).


// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){

// vector<vector<int>>arr(3,vector<int>(5,-9));

// for(int i = 0; i<arr.size();i++)
// {
//     for(int j=0;j<arr[i].size();j++)
//     {
//         cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
// }
// }
