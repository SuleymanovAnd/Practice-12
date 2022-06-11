#include <iostream>
#include "overflow.h"
void apartment ();
void heapsort ();
float travelTime(float distance, float speed);
int main() {
    std:: cout << "Work#1:  Resident in Apartment\n\n";
    apartment ();

    std:: cout << "\n\nWork#2:  Sort Array\n\n";
    heapsort();

    std:: cout << "\n\nWork#3:  Check Assert\nTime on a road\n\n";
    float SpeedOfCar;
    std::cout << "Input Speed of car (km/h):";
    std::cin >> SpeedOfCar;
    while (overflow ()){std::cin >> SpeedOfCar;}

    float TravelDistance;
    std::cout << "Input distance of travel(km):";
    std::cin >> TravelDistance;
    while (overflow ()){std::cin >> TravelDistance;}



    std::cout << "Travel time = "<< travelTime (TravelDistance,SpeedOfCar)<< " hour";
}
