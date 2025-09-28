// COMSC-210 | Lab 14 | Kyawt Thinzar Min
// IDE used: Visual Studio Code

#include <iostream>
using namespace std;

class Color{
  private:
    int red;
    int green;
    int blue;
  public:
    void setRed (int r); {red = r;}
    int getRed();        {return red};

    void setBlue (int b); {blue = b;}
    int getBlue();        {return blue;}

    void setGreen (int g); {green = g;}
    int getGreen();        {return green;}

    void print(){
        cout << setw(W15) << "Red: " << red << endl;
        cout << setw(W15) << "Blue: " << blue << endl;
        cout << setw(W15) << "Green: " << green << endl;
    }
};

int main(){
  

