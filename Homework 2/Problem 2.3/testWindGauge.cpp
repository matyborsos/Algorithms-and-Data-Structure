/* CH-231-A
   hm2_p3.cpp
   Matheas Roland Borsos
   m.borsos@constructor.univerity
*/

#include <iostream>
#include "WindGauge.h"

using namespace std;

int main() {
    WindGauge myWindGauge;

    myWindGauge.currentWindSpeed(15);
    myWindGauge.currentWindSpeed(16);
    myWindGauge.currentWindSpeed(12);
    myWindGauge.currentWindSpeed(15);
    myWindGauge.currentWindSpeed(15);

    myWindGauge.dump();

    myWindGauge.currentWindSpeed(16);
    myWindGauge.currentWindSpeed(17);
    myWindGauge.currentWindSpeed(16);
    myWindGauge.currentWindSpeed(16);
    myWindGauge.currentWindSpeed(20);
    myWindGauge.currentWindSpeed(17);
    myWindGauge.currentWindSpeed(16);
    myWindGauge.currentWindSpeed(15);
    myWindGauge.currentWindSpeed(16);
    myWindGauge.currentWindSpeed(20);

    myWindGauge.dump();

    return 0;
}
