//
// Created by Андрей on 11.06.2022.
//
#include <iostream>
#include <cassert>


float travelTime(float distance, float speed){

    assert (distance > 0);
    assert (speed > 0);
    return distance/speed;
}