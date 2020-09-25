#include <iostream>
using namespace std;
#include <string>

/* I've left the lines with errors uncommented on purpose
 * So this code will not run*/

int types() {
    std::cout << "Hello, World!" << std::endl;
     int num = 12;
     float flt = 10.4;
     bool bb = true;
     char worm = "woo0rm";
     string test = "ooh";

    char x = "5" + 6;
    int x = "5" + 6;
    bool x = "5" + 6;
    float x = "5" + 6;

    cout << num + flt;
    cout << "\n";
    cout << num + (int)flt;
    cout << "\n";
    cout << worm + test;
    cout << "\n";

     cout << num;
    cout << "\n";
     cout << test;





    return 0;
}
