//
// Created by Андрей on 10.06.2022.
//
#include <iostream>
using namespace std;

void heapsort (){
    cout << "Input 15 float numbers: ";
    float unsort [15];
    for (int i = 0;i<15;++i ){
        cin >> unsort [i];
    }

    for (int i = 0; i <15;++i){
        //находим макс
        int x = i; // индекс мах значения
        for (int j = x+1;j<15;j++){ // счетчик для нахождения мах значения
            if (unsort[j]>unsort[x]){x=j;} // если найдено х = номеру элемента
        }

        // реализация сортировки пирамидой.
            float oldValue = 0.f;
            if (x!=14){ // если большее не последнее, меняем большее с последним
                oldValue = unsort [14];
                unsort[14] = unsort[x];
                unsort[x] = oldValue;
            }
            // меняем большее (последнее в массиве) с элементом под номером i
            oldValue = unsort [i];
            unsort[i] = unsort[14];
            unsort[14] = oldValue;
        //

    }
    for (int i = 0; i<14;i++){  // вывод массива
        cout << unsort [i]<< " | ";
    }
}