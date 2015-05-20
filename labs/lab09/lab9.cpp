#include <vector>
#include <cmath>
#include <iostream>

using namespace std;

void fillVector(vector <double> &);
double average(const vector <double> &);
 
int main()
{
    return 0;
}

/// @brief fill the vector through input
/// @param v a vector of doubles that is empty
void fillVector(vector <double> &v)
{
    double d;
    
    // loop until no more input exists
    while (cin >> d)
    {
        // push a new element on to the vector
        v.push_back(d);
    }
}

/// @brief calculate average of all the elements in a vector
/// @brief v a vector that contains several numbers of type double
double average(const vector <double> &v)
{
    double sum = 0.;
    
    // loop through the vector, element by element
    for (int i = 0; i < v.size(); i++)
    {
        // accumulate a summation of all elements in v
        sum += v.at(i);
    }

    // calculate the floating point average then return
    return sum / v.size();
}
