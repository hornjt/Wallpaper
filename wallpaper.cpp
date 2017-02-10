//
//  wallpaper.cpp
//  test
//
//  Created by Jon Horn on 2/7/17.
//  Copyright © 2017 Jon Horn. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;

class Wallpaper
{
public:
    static string wallPaper(double l, double w, double h);
private:
    static double findPaperArea(double, double);
    static double calculateAreaPerRoom(double);
    static string convertAreaToString(int);
};

double Wallpaper::findPaperArea(double a, double b) {
    const double areaPerRoll = 5.2;
    return (a * b) / areaPerRoll;
}

double Wallpaper::calculateAreaPerRoom(double areaOfPaper) {
    double paperArea = (areaOfPaper * 2);
    double waste = paperArea * .15;
    return waste + paperArea;
}

string Wallpaper::convertAreaToString(int area) {
    string areaConversion[] = {
        "zero", "one", "two", "three", "four", "five", "six",
        "seven", "eight", "nine", "ten", "eleven", "twelve",
        "thirteen", "fourteen", "fifteen", "sixteen", "seventeen",
        "eighteen", "nineteen", "twenty"
    };
    cout << areaConversion[area] << endl;
    return areaConversion[area];
}

string Wallpaper::wallPaper(double l, double w, double h){
    double totalPaperNeeded =
    calculateAreaPerRoom(findPaperArea(l, h)) +
    calculateAreaPerRoom(findPaperArea(w, h));
    string paperAreaToString = convertAreaToString(ceil(totalPaperNeeded));
    return paperAreaToString;
};

int main(int argc, const char * argv[]) {
    Wallpaper::wallPaper(6.3, 4.5, 3.29);
}


