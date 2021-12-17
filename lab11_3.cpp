#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    ifstream score("score.txt");
    double sum = 0,xsquare = 0,Mean,SD;
    int N = 0;
    string text;
    while(getline(score,text)){
        sum += atof(text.c_str());
        xsquare += pow(atof(text.c_str()),2);
        N++;
    }
    Mean = sum/N;
    SD = sqrt((xsquare/N)-pow(Mean,2));

    cout << "Number of data = " << N << "\n";
    cout << setprecision(3);
    cout << "Mean = " << Mean << "\n";
    cout << "Standard deviation = " << SD << "\n";
}