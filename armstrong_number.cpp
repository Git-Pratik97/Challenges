 #include<iostream>
 #include<math.h>

 using namespace std;

 int main()
 {
     int n ;
     cin >> n;
     int sum = 0;

     int original_number = n;

        while (n>0)
        {
            int last_digit = n%10;
             sum += pow(last_digit,3);
             n = n/10;
        }

        if (sum == original_number)
         {
            int armstrong_number = sum;
            cout << armstrong_number << " ";
        }
    

     return 0;
 }