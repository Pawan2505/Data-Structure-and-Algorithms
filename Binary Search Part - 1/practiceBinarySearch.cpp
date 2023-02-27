

//                                               // Binary Search Array.
//                                              // [Method - 1]



// #include<iostream>
// using namespace std;

// int binarySearch(int arr[], int size, int target){
//     int start = 0;
//     int end = size-1;

//     int mid = (start+end)/2;

//     while(start<=end){
//         int element = arr[mid];

//         if(element == target){
//             return mid;
//         }

//         else if(target < element){
//             // Search in left.

//             end = mid+1;
//         }
//         else{
//             // Search in right.

//             start = mid+1;
//         }

//         mid = (start + end)/2;
//     }

//     // Target not found
//     return -1;
// }

// int main(){
//     int arr[] = {2,3,4,5,34,6,7,8,9};
//     int size = 9;
//     int target = 104;

//     int indexOftarget = binarySearch(arr,size,target);

//     if(indexOftarget == -1){
//         cout<<"target not found"<<endl;
//     }
//     else{
//         cout<<"target found at"<<indexOftarget<<" index"<<endl;
//     }
//     return 0;
// }



                                              // Binary Search Array.
                                             // [Method - 2]




// #include <iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;

// int binarySearch(int arr[], int size, int target) {
//   int start = 0;
//   int end = size - 1;

//   int mid = start + (end - start ) / 2;

//   while(start <= end) {
//     int element = arr[mid];

//     if(element == target) {//element found, then return index
//       return mid;
//     }
    
//     if(target < element) {
//       //search in left
//       end = mid - 1;
//     }
//     else {
//       //search in right
//       start = mid + 1;
//     }

//     mid = start + (end - start ) / 2;

//   }

//   //element not found
//   return -1;

// }

// int main() {
//   // int arr[] = {2,4,6,8,10,12,16};
//   // int size = 7;
//   // int target = 20;

//   // int indexOftarget = binarySearch(arr, size, target);

//   // if(indexOftarget == -1) {
//   //   cout << "target not found" << endl;
//   // }
//   // else  {
//   //   cout << "target found at " << indexOftarget <<" index " << endl;
//   // }

//   vector<int> v{1,2,3,4,5,6,9};
//   // int arr[] = {1,2,3,4,5,6,7 };
//   int size = 7;

//   if(binary_search(v.begin(), v.end(), 10)) {
//     cout << "Found" << endl;
//   }
//   else {
//     cout << "Not found. " << endl;
//   }


//   return 0;
// }       




                        // Binary Search [Method-3 - First Occurance of target using binary search. ]


// #include<iostream>
// #include<vector>
// using namespace std;


// int firstOccurence(vector<int>v,int target){
//     int s = 0;
//     int e = v.size() - 1;

//     int mid = (s+e)/2;
//     int ans = -1;

//     while(s<=e){
//         if(v[mid] == target){

//             //ans store and then left

//             ans = mid;
//             e=mid-1;
//         }
//         else if(target>v[mid]){

//             //right me search.

//             s = mid + 1;
//         }
//         else if(target<v[mid]){
//             e = mid - 1;
//         }
//         mid = (s+e)/2;
//     }
//     return ans;
// }

// int main(){
// vector<int>v{1,3,4,4,4,4,4,6,7};
// int target = 4;
// int indexOfFirstOcc = firstOccurence(v,target);

// cout<<"ans is "<<indexOfFirstOcc<<endl;

// return 0;
// }