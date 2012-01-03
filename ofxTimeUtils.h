//
//  ofxTimeUtils.h
//  
//
//  Created by Martial Geoffre-Rouland on 22/09/2011.
//

#ifndef OFXTMUTLS
#define OFXTMUTLS

#include "ofMain.h"

class ofxTimeUtils {
    
public:
    
    ofxTimeUtils();
    string getCurrentDate();
    
    int convertHoursToSeconds(int hour, int minuts);
    int convertHoursToSeconds(int hour);
    int convertMinutsToSeconds(int minuts);
    
    void update(long unixTime);
    void update(ofEventArgs & e);
    
private:
    
    int currentUnixTime, currentYear, currentMonth,currentDay, currentHour, currentMinut;
    
};


#endif
