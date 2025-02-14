#include <iostream>

using namespace std;

int main(void) {
    int angle1;
    int angle2;
    cin >> angle1 >> angle2;
    
    int sum_angle = angle1 + angle2;
    cout << sum_angle % 360 << endl;
    // must return below 360 degree - using % 360 and make the answer always be under 360. 
    
    return 0;
}