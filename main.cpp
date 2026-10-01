#include <iostream>
#include <array>
using namespace std;

class Color {
    private:

        int red;
        int green;
        int blue;

    public:
        // default constructor
        Color() : red(0), green(0), blue(0) {}
        // parameter constructor
        Color(int r, int g, int b) : red(r), green(g), blue(b) {}
        // partial constructor
        Color(int r, int g) : red(r), green(g), blue(0) {}

        void printColor() {
            cout << "RGB(" << red << "\t, " << green << "\t, " << blue << "\t)" << endl;
        }
        void setColor(int r, int g, int b) {
            red = r;
            green = g;
            blue = b;
        }
        std::array<int, 3> getColor() {
            return {red, green, blue};
        }


};

int main() {
    
    cout << "RGB Values:" << endl;



    Color color1;               // default constructor
    cout << "Default Constructor: \t";
    color1.printColor();
    Color color2(255, 10, 37);    // parameter constructor
    cout << "Parameter Constructor: \t";
    color2.printColor();
    Color color3(0, 255);       // partial constructor
    cout << "Partial Constructor: \t";
    color3.printColor();

    return 0;
}