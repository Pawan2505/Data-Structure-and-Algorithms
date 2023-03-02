
                                             //Fundamental Char Array.

                                             // Example - 1

// #include <iostream>
// #include<string.h>
// using namespace std;

// int main(){
//   char name[100];
//   cout<< "Enter your Name " << endl;

//   cin >> name;

//   cout << "Aapka naam: " << name << " hai " << endl;
// }




                                                // Example - 2


// #include <iostream>
// #include<string.h>
// using namespace std;

// int main(){

//         char ch[100];

//         ch[0] = 'a';
//         ch[1] = 'b';
//         cin >> ch[2];

//         cout << ch[0] << ch[1] << ch[2] << endl;
// }                                             




                                                // Example - 3

// #include <iostream>
// #include<string.h>
// using namespace std;

// int main(){

//        char name[100];

//         cin >> name;

//         for(int i=0; i<7; i++) {
//                 cout << "index: " << i << " value: " << name[i] << endl;
//         }

//         int value = (int)name[6];
//         cout << "value is : " << value << endl;   
                                              // null character cin k time store ho jata hai. Jo Terminator ka kaam krta hai. Jab Cin se input lete hai.

// }    





                                                // Example - 4


// #include <iostream>
// #include<string.h>
// using namespace std;

// int main(){

//   char arr[100];
//         //cin >> arr;
//         //getline(cin, arr);
//         cin.getline(arr, 50);                     // Space k sath apna input cin.getline(arr,50) se print kra skte hai. yaha 50 ka mtlb maximum length of input hai.
//         cout << arr;
// }                                             





                                                // Example - 5


// #include <iostream>
// #include<string.h>
// using namespace std;
// int getLength(char name[]) {
//         int length = 0;
//         int i = 0; 

//         while(name[i] != '\0') {
//                 length++;
//                 i++;
//         }
//         return length;
// }
// int main(){

//   char name[100];
//         cin >> name;

//         cout << "length is: " << getLength(name) << endl;   // Finf length of string by derived function.
//     return 0;
// }                       







                                                // Example - 6


// #include <iostream>
// #include<string.h>
// using namespace std;

// int main(){

//   char name[100];
//         cin >> name;

//         cout << "Length is -> " << strlen(name) << endl;     // Find length by buit-in function.
//     return 0;
// }                                             


                                            // Reverse Char Array.

                                                // Example - 7


// #include <iostream>
// #include<string.h>
// using namespace std;

// int getLength(char name[]) {
//         int length = 0;
//         int i = 0; 

//         while(name[i] != '\0') {
//                 length++;
//                 i++;
//         }
//         return length;
// }
// void reverseCharArray(char name[]) {
//         int i = 0;
//         int n = getLength(name);
//         int j = n - 1;

//         while(i<=j) {
//                 swap(name[i], name[j]);
//                 i++;
//                 j--;
//         }

// }
// int main(){

//         char name[100];
//         cin >> name;
//         cout << "Initially: " << name << endl;
//         reverseCharArray(name);
//         cout << "After reversal process: " << name << endl;

// }                                             



                                           // Replace all Spaces.
                                                // Example - 8


// #include <iostream>
// #include<string.h>
// using namespace std;
// void replaceSpaces(char sentence[ ]){
        
//         int i = 0;
//         int n = strlen(sentence);

//         for(int i=0; i<n; i++) {
//                 if(sentence[i] == ' ') {
//                         sentence[i] = '@';
//                 }
//         }
// }
// int main(){
// char sentence[100];
//         cin.getline(sentence, 100);

//         replaceSpaces(sentence);
//         cout << "printing sentence " << endl << sentence << endl;
// }                                             



                                                                    // Example - 9
                                                                    // Palindrome Number


// #include <iostream>
// #include<string.h>
// using namespace std;

// bool checkPalindrome(char word[] ) {
//         int i=0;
//         int n = strlen(word);
//         int j = n - 1;

//         while(i <= j) {
//                 if(word[i] != word[j]) {
//                         return false;
//                 }
//                 else {
//                         i++;
//                         j--;
//                 }
//         }
//         return true;
// }
// int main(){
//   char arr[100] = "hahahahha";
//         cout<< "palindrome check: " << checkPalindrome(arr);
// }   




//                                                                     // Example - 10
//                                                                     // Convert into Upper Case


// #include <iostream>
// #include<string.h>
// using namespace std;

// int getLength(char name[]) {
//         int length = 0;
//         int i = 0; 

//         while(name[i] != '\0') {
//                 length++;
//                 i++;
//         }
//         return length;
// }

// void convertIntoUpperCase(char arr[]) {
//         int n = getLength(arr);

//         for(int i=0; i<n; i++) {
//                 arr[i] = arr[i] -'a' + 'A';
//         }
// }

// int main(){
//  char arr[100] = "babbar";
//         convertIntoUpperCase(arr);
//         cout << arr << endl;

// }   





                                                                    // Example - 11
                                                                    // Convert into Lower Case


// #include <iostream>
// #include<string.h>
// using namespace std;

// int getLength(char name[]) {
//         int length = 0;
//         int i = 0; 

//         while(name[i] != '\0') {
//                 length++;
//                 i++;
//         }
//         return length;
// }

// void convertIntoUpperCase(char arr[]) {
//         int n = getLength(arr);

//         for(int i=0; i<n; i++) {
//                 arr[i] = arr[i] +'a' - 'A';
//         }
// }

// int main(){
//  char arr[100] = "babbar";
//         convertIntoUpperCase(arr);
//         cout << arr << endl;

// }   





                                                                    // Example - 12
                                                                    // String [Example-1]

                                                                    
// #include <iostream>
// #include<string>
// using namespace std;

// int main() {
//   //string create
//   string str;
//   //input
//    cin >> str;

//   print
//   cout << str;

 

// }

// Input - Pawan Maurya
// Output - Pawan

                                                                          // Example - 13
                                                                    // String [Example-2]


// #include <iostream>
// #include<string>
// using namespace std;

// int main() {
//   //string create
//   string str;
//   //input
 
//    getline(cin, str);
//   //print
//   cout << str;

// }

// // Input - Pawan Maurya
// // Output - Pawan


                                                                        // Example - 14
                                                                    // String [Example-3]


// #include <iostream>
// #include<string>
// using namespace std;

// int main() {
//   //string create
//   string str;
//   //input
 
//    getline(cin, str);
//   //print
//   cout << str;

//   cout << "length: "<< str.length() << endl;
//   cout << "isEmpty: " << str.empty() << endl;

// }



                                                                                // Example - 15
                                                                    // String -> push_back & pop_back() 
                                                                                //[Example-4]


// #include <iostream>
// #include<string>
// using namespace std;

// int main() {
//   //string create
//   string str;
//   //input
 
//    getline(cin, str);
//   //print
//   cout << str;

//   cout << "length: "<< str.length() << endl;
//     str.push_back('A');
//   cout << str << endl;
//   str.pop_back();
//   cout << str << endl;
//   cout << str.substr(1, 3) << endl;
//    str.push_back('b');
//   cout << str << endl;
// }


                                                                                // Example - 16
                                                                    // String -> Compare String.
                                                                                //[Example-5]


// #include <iostream>
// #include<string>
// using namespace std;

// bool compareString(string a, string b) {
//         if(a.length() != b.length())
//                 return false;


//                 for(int i=0; i<a.length(); i++) {
//                         if(a[i] != b[i]) {
//                                 return false;
//                         }
//                 }

//         return true;
// }
// int main() {
//   string a = "love";
//   string b = "love";

//   if(a.compare(b) == 0) {
//           cout << " a and b are exactly same strings" << endl;
//   }
//   else {
//           cout << "a and b are not same" << endl;
//   }
// }





                                                                                // Example - 17
                                                                    // String -> built-in compare function.
                                                                                //[Example-6]




// #include <iostream>
// #include<string>
// using namespace std;

// int main() {

//   string x = "bbbb";
//   string y = "bbbba";

//   cout << x.compare(y) << endl;

//   return 0;
// }



                                                                                // Example - 18
                                                                    // String -> find() function.
                                                                                //[Example-7]




// #include <iostream>
// #include<string>
// using namespace std;

// int main() {

//   string sentence = "hello Jee kaise ho saare";
//   string target = "Everyone";

//   cout << sentence.find(target) << endl;
//   if(sentence.find(target) == string::npos) {
//           cout << "Not Found" << endl;
//   }

//   return 0;
// }



                                                                                // Example - 19
                                                                    // String -> replace() function.
                                                                                //[Example-8]


// #include <iostream>
// #include<string>
// using namespace std;

// int main() {

//         string str = "This is my First Message";
//         string word = "Babbar";

//         str.replace(11, 5 , "Second");
//         cout << str << endl;

//   return 0;
// }



                                                                                // Example - 20
                                                                    // String -> erase() function.
                                                                                //[Example-9]

// #include <iostream>
// #include<string>
// using namespace std;

// int main() {


//         // string str = "This is my First Message";
//         // string word = "Babbar";

//         // str.replace(11, 5 , "Second");
//         // cout << str << endl;

//         string str = "ABCDEFGHIJKLMNOPQRST";
//         str.erase(10,10);
//         cout << str;


//   return 0;
// }