//
//  FirstProjectController.cpp
//  FirstProjectCPlusPlus
//
//  Created by Marlor, Brandon on 1/23/17.
//  Copyright © 2017 Marlor, Brandon. All rights reserved.
//

#include <iostream>
#include "FirstProjectController.h"

using namespace std;

void FirstProjectController :: start()
{
    cout << "words here please :D" << endl;
    specialOutput();
}

void FirstProjectController :: specialOutput()
{
    cout << "Hi how old are you?" << endl;
    int age;
    cin >> age;
    cout << "you typed in " << age << endl;
    cout << "type in your name :D" << endl;
    string name;
    cin >> name;
    cout << "your name is " << name << " wow cool - :P" << endl;
}
