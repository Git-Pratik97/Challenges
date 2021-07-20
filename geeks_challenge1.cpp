
// C++ Program for the above approach
#include <iostream>
using namespace std;
 
// Function to find the N players
// the game against each other or not
string calculate(int N, int T)
{
   
   // Base Case
    if (N <= 1 || T <= 0) {
       
      // Return -1 if not valid
        return "-1";
    }
   
  // Converting hours into minutes
    int minutes = T * 60;
   
   // Calculating maximum games that
    // can be played.
    int max_match = N - 1;
   
  // Time required for conducting
    // maximum games
    int max_time = max_match * 30;
 
  // Checking if it is possible
    // to conduct maximum games
    if (max_time <= minutes) {
       
      // Return possible
        return "Possible";
    }
 
  // Calculating minimum games
    int min_match = N / 2;
    min_match = N - min_match;
   
  // Time required for conducting
    // minimum games
    int min_time = min_match * 30;
 
  // Checking if it is possible
   // to conduct minimum games
    if (min_time <= minutes) {
       
      // Return possible
        return "Possible";
    }
 
  // Return not possible if time
   // is less than required time
    return "Not Possible";
}
 
 // Driver Code
 // Total count of players
int main()
{
    int N = 3, T = 1;
   
  // function call
    cout << calculate(N, T);
    return 0;
}