/*
 * Functions.cpp
 * Name: Ryan Wong
 * UCINetID: rswong2
 *
 *  Created on: Jan 6, 2020
 *      Author: ibrahm01
 */


#include "Functions.h"
#include <iostream>

string printPyramid(int num)
{
    string rstring = "";
    // using namespace std;
    int height = num;

    for (int i = 1; i < height + 1; i++){

        //
        // print first row
        for (int s1 = 0; s1 < height + 1 - i; s1++){
            rstring += " ";
        }
        for (int b1 = 0; b1 < 2 * i - 1; b1++){
            rstring += "-";
        }
        rstring += "\n";

        //
        // print second row
        for (int s2 = 0; s2 < height - i; s2++){
            rstring += " ";
        }
        rstring += "|";
        for (int pipe = 0; pipe < i; pipe++){
            rstring += " |";
        }
        rstring += "\n";
    }

    rstring += " ";
    for (int bottom = 0; bottom < 2 * height - 1; bottom++){
        rstring += "-";
    }
    return rstring;
}

int getUserInput()
{
    int num = 0;
    std::cout << "Enter Height of pyramid";
    std::cin >> num;
    return num;
}
