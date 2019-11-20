/*
 Helen Huang, Nov. 19th, 2019
 Designed for MCDB 126AL Pharmacology Lab Experiment 7 Data Analysis
**/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    
    // General Info
    cout << endl;
    cout << "---->This program will help you calculate the t value to compare the mean edema weight of the control group and of one treatment group." << endl;
    cout << endl;
    
    
    // Control Group -------------------------------------------
    
    //Control Variables
    int ctrlNumIndi;
    double ctrlSum = 0;
    double ctrlVariance = 0;
    double ctrlMean;
    double ctrlSD;
    
    cout << "Enter the number of individuals in your CONTROL group: ";
    cin >> ctrlNumIndi;
    cout << endl;
    
    //Create an array to hold the value
    double ctrlV[ctrlNumIndi];
    
    //Get raw data
    cout << "Enter the edema value (in mg) and press enter for" << endl;
    for(int i=0; i<ctrlNumIndi; i++){
        cout << "Individual " << i+1 << ": ";
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
    
    //Calculate Standard Deviation
    ctrlSD = sqrt(ctrlVariance);
    
    //Display Control Calculation Results
    cout << "----Control Group Analysis----" << endl;
    
    cout << "Mean:                  " << fixed << setprecision(3) << ctrlMean << endl;
    cout << "Variance:              " << fixed << setprecision(3) << ctrlVariance << endl;
    cout << "Standard Deviation:    " << fixed << setprecision(3) << ctrlVariance << endl;
    
};
