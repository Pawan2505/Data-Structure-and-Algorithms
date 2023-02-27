
                                            // Nearly Sorted Array.


// #include<iostream>
// #include<vector>
// using namespace std;

// int binarySearch(vector<int>arr, int target)
// {
//     int s = 0;
//     int e = arr.size()-1;
//     int mid = s+(e-s)/2;

//     while(s<=e){
//         if(arr[mid] == target)
//         {
//              return mid;
//         }
       
//         if(mid-1 >= 0 && arr[mid-1] == target)
//         {
//          return mid-1;
//          }
//         if(mid+1 < arr.size() && arr[mid+1] == target)
//         {
//          return mid+1;
//          }
//         if(arr[mid] < target)
//           {
//           s = mid+2;
//          }
//         // if(arr[mid] > target)
//         else
//          {
//             e = mid-2; 
//           }
//         mid = s+(e-s)/2;
       
//     }
//     return -1;
// }

// int main(){
//     vector<int>arr{10,3,40,20,50,80,70};
//     int target = 10;
//     int ans = binarySearch(arr,target);
//     cout<<"index of "<<target<<" is "<<ans<<endl;

//     return 0;
// }




             // Divide 2 number using Binary Search.


// #include<iostream>
// using namespace std;


// int solve(int dividend, int divisor){
//     int s = 0;
//     int e = dividend;

//     int mid = s+(e-s)/2;

//     while(s<=e){

//         // Perfect Solution.

//         if(mid*divisor == dividend)
//         {
//             return mid;
//         }

//         // Not Perfect solution.

//         if(mid*divisor > dividend)
//         {
//             // Search Left.
//             e = mid-1;
//         }
//         else{

//             // Ans Store.

//             ans = mid;

//             // Right search.

//             s = mid + 1;
//         }
//         mid = s+(e-s)/2;
//     }
//     return -1;
// }

// int main(){
//     int dividend = 35;
//     int divisor = 7;

//     int ans = solve(dividend, divisor);

//     cout<<" Ans is  "<<ans<<endl;
//     return 0;
// }



                                        // Find the odd occuring element in an array.



                                        