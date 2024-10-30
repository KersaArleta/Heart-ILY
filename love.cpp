#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    string s = "I Love You! ";
    
    // Mengatur tinggi hati dari atas ke bawah
    for(float y = 1.3; y >= -1.1; y -= 0.06) {
        int index = 0;
        // Mengatur lebar hati dari kiri ke kanan
        for(float x = -1.2; x <= 1.2; x += 0.025) {
            // Persamaan matematika untuk membentuk hati
            if(pow((x * x + y * y - 1.0), 3) - (x * x * y * y * y) <= 0.0) {
                cout << s[index % s.size()]; 
                index++;
            } else {
                cout << ' '; 
            }
        }
        cout << endl; 
    }
    
    return 0;
}
