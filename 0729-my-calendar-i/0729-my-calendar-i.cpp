class MyCalendar {
public:
set<pair<int,int>>f;
    MyCalendar() {

    }
    
    bool book(int startTime, int endTime) {
        for(auto it= f.begin() ; it != f.end() ; it++){
            if(!(endTime <= it->first || startTime >= it->second ))return false;
        }
        
        f.insert({startTime, endTime});
        return true;
    }

};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(startTime,endTime);
 */