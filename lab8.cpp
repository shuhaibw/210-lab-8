// COMSC-210 | Lab 8 | Shuhaib Walahi

#include <iostream>
#include <vector>

using namespace std;

// definition for vector elements
struct Color
{
    string name;
    int number;
};

int main()
{
    // declare and populate colors vector with 4 elements
    vector<Color> colors;
    Color red = {"red", 40};
    Color green = {"green", 3};
    Color blue = {"blue", 1};
    Color yellow = {"yellow", 5};

    colors.push_back(red);
    colors.push_back(green);
    colors.push_back(blue);
    colors.push_back(yellow);

    cout << "These color dyes are often used in food products: " << endl;

    // output the elements seperated by a comma
    for (size_t i = 0; i < colors.size(); i++)
    {
        cout << colors[i].name << " " << colors[i].number;
        if ( i < colors.size() - 1)
        {
            cout << ", ";
        }
    }

    cout << "." << endl;

    return 0;
}