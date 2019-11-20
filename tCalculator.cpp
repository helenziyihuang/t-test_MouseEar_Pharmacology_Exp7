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
    int ctrlNum;
    double ctrlSum = 0;
    double ctrlVariance = 0;
    double ctrlMean;
    double ctrlSD;
    double ctrlSE;
    
    cout << "Enter the number of individuals in your CONTROL group: ";
    cin >> ctrlNum;
    cout << endl;
    
    //Create an array to hold the value
    double ctrlV[ctrlNum];
    
    //Get raw data
    cout << "Enter the edema value (in mg) and press enter for" << endl;
    for(int i=0; i<ctrlNum; i++){
        cout << "Individual " << i+1 << ": ";
        cin >> ctrlV[i];
        
        ctrlSum += ctrlV[i];
    }
    cout << endl;
    
    //Calculate Mean
    ctrlMean = ctrlSum / ctrlNum;
    
    //Calculate Variance
    for(int i=0; i<ctrlNum; i++){
        ctrlVariance += pow((ctrlV[i] - ctrlMean), 2);
    }
    ctrlVariance /= (ctrlNum - 1);
    
    //Calculate Standard Deviation
    ctrlSD = sqrt(ctrlVariance);
    
    //Calculate Standard Error
    ctrlSE = sqrt(ctrlVariance/ctrlNum);
    
    //Display Control Calculation Results
    cout << "----Control Group Analysis----" << endl;
    
    cout << "Mean:                  " << fixed << setprecision(3) << ctrlMean << endl;
    cout << "Variance:              " << fixed << setprecision(3) << ctrlVariance << endl;
    cout << "Standard Deviation:    " << fixed << setprecision(3) << ctrlSD << endl;
    cout << "Standard Error:        " << fixed << setprecision(3) << ctrlSE << endl;
    cout << endl;
    
    
    // Treatment Group -------------------------------------------
    
    //Treatment Variables
    int trNum;
    double trSum = 0;
    double trVariance = 0;
    double trMean;
    double trSD;
    double trSE;
    
    cout << "Enter the number of individuals in your TREATMENT group: ";
    cin >> trNum;
    cout << endl;
    
    //Create an array to hold the value
    double trV[trNum];
    
    //Get raw data
    cout << "Enter the edema value (in mg) and press enter for" << endl;
    for(int i=0; i<trNum; i++){
        cout << "Individual " << i+1 << ": ";
        cin >> trV[i];
        
        trSum += trV[i];
    }
    cout << endl;
    
    //Calculate Mean
    trMean = trSum / trNum;
    
    //Calculate Variance
    for(int i=0; i<trNum; i++){
        trVariance += pow((trV[i] - trMean), 2);
    }
    trVariance /= (trNum - 1);
    
    //Calculate Standard Deviation
    trSD = sqrt(trVariance);
    
    //Calculate Standard Error
    trSE = sqrt(trVariance/trNum);
    
    //Display Control Calculation Results
    cout << "----Treatment Group Analysis----" << endl;
    
    cout << "Mean:                  " << fixed << setprecision(3) << trMean << endl;
    cout << "Variance:              " << fixed << setprecision(3) << trVariance << endl;
    cout << "Standard Deviation:    " << fixed << setprecision(3) << trSD << endl;
    cout << "Standard Error:        " << fixed << setprecision(3) << trSE << endl;
    cout << endl;
    
    
};
