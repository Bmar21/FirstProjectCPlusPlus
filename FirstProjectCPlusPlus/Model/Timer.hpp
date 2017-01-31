//
//  Timer.hpp
//  FirstProjectCPlusPlus
//
//  Created by Marlor, Brandon on 1/31/17.
//  Copyright © 2017 Marlor, Brandon. All rights reserved.
//

#ifndef Timer_hpp
#define Timer_hpp

#include <time.h>

class Timer
{
private:
    clock_t executionTime;
public:
    Timer();
    void startTimer();
    void stopTimer();
    void resetTimer();
    void diplayTimerInformation();
    void getExecutionTimeInMicroseconds();
};

#endif /* Timer_hpp */
