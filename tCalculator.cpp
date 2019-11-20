/*
 Helen Huang, Nov. 19th, 2019
 Designed for MCDB 126AL Pharmacology Lab Experiment 7 Data Analysis
**/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    int ctrlNumIndi;
    double ctrlSum = 0;
    double ctrlVariance = 0;
    double ctrlMean;
    
    // General Info
    cout << endl;
    cout << "---->This program will help you calculate the t value to compare the mean edema weight of the control group and of one treatment group." << endl;
    cout << endl;
    
    
    // Control Group -------------------------------------------
    
    cout << "Enter the number of individuals in your CONTROL group: ";
    cin >> ctrlNumIndi;
    cout << endl;
    
    //Create an array to hold the value
    double ctrlV[ctrlNumIndi];
    
    //Get raw data
    for(int i=0; i<ctrlNumIndi; i++){
        cout << "Enter the data for individual " << i << ": ";
        cin >> ctrlV[i];
        
        ctrlSum += ctrlV[i];
    }
    cout << endl;
    
    //Calculate Mean
    ctrlMean = ctrlSum / ctrlNumIndi;
    
    //Calculate Variance
    for(int i=0; i<ctrlNumIndi; i++){
        ctrlVariance += pow((ctrlV[i] - ctrlMean), 2);
    }
    ctrlVariance /= (ctrlNumIndi - 1);
    
    cout << "Mean of the Control: " << fixed << setprecision(3) << ctrlMean << endl;
    cout << "Variance of the Control: " << fixed << setprecision(3) << ctrlVariance << endl;
    
};
