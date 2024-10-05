//this program will output the inflation rates for two successive years and determine if the inflation trend is increasing or decreasing. It will also ask the user to input the current price of an item and its price from one year and two years ago
#include <iostream>

using namespace std;

int computeInflation(int oneYearPrice, int twoYearPrice);
double computeInflation(double oneYearPrice, double twoYearPrice);
double computeInflation(double oneYearPrice, int twoYearPrice);
double computeInflation(int oneYearPrice, double twoYearPrice);

int main()

{
    int currPrice, oneYearPrice, twoYearPrice;
    double oneYearInflation, twoYearInflation; 
  
    cout << "What is the current price?" << endl;
    cin >> currPrice;
    cout << "What is the price of one year ago." << endl;
    cin >> oneYearPrice;
    cout << "What is the price of two years ago?" << endl;
    cin >> twoYearPrice;

  
    oneYearInflation=(double)(currPrice - oneYearPrice) / oneYearPrice * 100;
  
    twoYearInflation=(double)(currPrice - twoYearPrice) / twoYearPrice * 100;
  
    if (oneYearInflation > twoYearInflation)
    {
        cout << "The inflation rate is increasing." << endl;
    }
    else if (oneYearInflation < twoYearInflation)
    {
        cout << "The inflation rate is decreasing." << endl;
    }
    else
    {
        cout << "There is no change in the inflation rate." << endl;
    }
  
    cout << "One-year inflation: " << oneYearInflation << "%" << endl;
  
    cout << "Two-year inflation: " << twoYearInflation << "%" << endl;
  
    return 0;
}