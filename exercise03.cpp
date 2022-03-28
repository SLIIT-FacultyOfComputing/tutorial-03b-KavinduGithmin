#include <iostream>

using namespace std;

int volume(int height, int width, int length);

// 1. Define a structure called Box

struct box {
  int height;
  int width;
  int length;
};

// have the integer data types Height, Width, Length

// Do not change the main function
int main() {
    // 2. Create a variable called box1 of the Box structure type
    box box1;
    // int box1Height, box1Width, box1Length;
    // 3. Create a variable called box2 of the Box structure type
    box box2;
    // int box2Height, box2Width, box2Length;
    int totalVolume;
    
    // 4. Input the height, width, lenght of box1 and box2
    cout << "Enter Box 1 Height : ";
    cin >> box1.height;
    cout << "Enter Box 1 Width : ";
    cin >> box1.width;
    cout << "Enter Box 1 Length : ";
    cin >> box1.length;
    
    cout << "Enter Box 2 Height : ";
    cin >> box2.height;
    cout << "Enter Box 2 Width : ";
    cin >> box2.width;
    cout << "Enter Box 2 Length : ";
    cin >> box2.length;
    
    // 5. Replace the coding below to pass the Box type structure
    totalVolume = volume(box1.height ,box1.width ,box1.length )
             + volume(box2.height ,box2.width ,box2.length );
    
    cout << "Volume of Box is " << totalVolume << endl;
    
    return 0;
}

// Implement the functions here

int volume(int height, int width, int length){
  return height * width * length;
}

