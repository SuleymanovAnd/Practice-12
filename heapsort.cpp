//
// Created by Андрей on 10.06.2022.
//
#include <iostream>
#include "overflow.h"
using namespace std;

void heapsort (){
    cout << "Input 15 float numbers: ";
    float unsortArray [15];
    for (int i = 0;i<15;++i ){ // ввод в массив
        cin >> unsortArray [i];
        while (overflow()){cin >> unsortArray [i];}
    }

    for (int i = 0; i <15;++i){
        //находим макс
        int Index_Max = i; // индекс мах значения
        for (int j = Index_Max+1;j<15;j++){ // счетчик для нахождения мах значения
            if (unsortArray[j]>unsortArray[Index_Max]){Index_Max=j;} // если найдено, то Index_Max = номеру элемента
        }

        // реализация сортировки пирамидой.
            float oldValue = 0.f; // сохраняем в переменной старое значение элемента массива
            if (Index_Max!= 14){ // если большее не последнее, меняем большее с последним
                oldValue = unsortArray [14];
                unsortArray[14] = unsortArray[Index_Max];
                unsortArray[Index_Max] = oldValue;
            }
            // меняем большее (последнее в массиве) с элементом под номером i
            oldValue = unsortArray [i];
            unsortArray[i] = unsortArray[14];
            unsortArray[14] = oldValue;
        //

    }
    for (int i = 0; i<15;i++){  // вывод массива
        cout << unsortArray [i]<< " | ";
    }
}