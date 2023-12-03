/* CH-231-A
   hm2_p3.cpp
   Matheas Roland Borsos
   m.borsos@constructor.univerity
*/

#include <iostream>
#include <deque>

using namespace std;

class WindGauge {
    public:
        WindGauge(int period = 12); // constructor

        void currentWindSpeed(int speed);
        
        int highest() const; // returns the highest value 
      
        int lowest() const;  // returns the lowest value 
        
        int average() const; // returns the average value 

        // dump() method implemented under public access 
        void dump() const; 

    private:

        deque<int> history;
        int period;
};