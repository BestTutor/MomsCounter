//
//  MomsCounter.h
//  MomsCounter
//

#ifndef MomsCounter_h
#define MomsCounter_h

// class for a mon's counter object
class MomsCounter {
private:
    int n_count;
    
public:
    MomsCounter() { n_count = 0;}
    ~MomsCounter() { }
    
    int getCount() { return n_count; }
    void Clear() { n_count = 0; }
    void IncrementThousand() { n_count += 1000; }
    void IncrementHundred() { n_count += 100; }
    void IncrementTen() { n_count += 10; }
    void IncrementOne() { n_count++; }
    
    void output(ostream &outs) { outs << "count : " << n_count << endl; }
};

#endif /* MomsCounter_h */
