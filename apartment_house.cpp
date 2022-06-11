//
// Created by Андрей on 08.06.2022.
//
#include <iostream>
#include "overflow.h"
#include <string>
using namespace std;

void apartment (){
cout << "Input 10 surnames apartment residents: ";
string surNames [10];
int number_of_apartment;
for (int i = 0; i < 10;++i){
    cin >> surNames [i];
}
for (int i =0; i<3;++i) {
    cout << "Input number of apartment, for know surname at resident: ";
    cin >> number_of_apartment;
    while (overflow()) { cin >> number_of_apartment; }
    while (number_of_apartment > 10 || number_of_apartment < 1) {
        cout << "Incorrect input. Please try again:";
        cin >> number_of_apartment;
        while (overflow()) { cin >> number_of_apartment; }
    }
    cout << surNames[number_of_apartment - 1] << " lives in " << number_of_apartment << " apartment.\n";
}
}