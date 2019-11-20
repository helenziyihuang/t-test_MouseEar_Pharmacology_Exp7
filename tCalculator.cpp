/*
 Helen Huang, Nov. 19th, 2019
 Designed for MCDB 126AL Pharmacology Lab Experiment 7 Data Analysis
 
 To run this program:
 Choice 1 (for Mac users):
 - Go to a terminal window
 - Go to the folder with this file by typing "cd" and the path
    - Ex. cd desktop/tCalFolder/
    - Ex. cd desktop/"MCDB 126AL"/"Exp 7"/"Data Analysis"/
 - Do a "make test" and you should see some outputs
 - Put in your data according to the instruction and you will be good
 
 Choice 2:
 - Go to an online C++ compiler (Google it)
 - Copy the code in this tCalculator.cpp file into the online compiler
 - No need to copy the code from the Makefile
 - Press "Run"
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
