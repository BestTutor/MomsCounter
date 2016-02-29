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
//    bool Overflow()
//    {
//        int ThouHundred;
//        int TenOne;
//        int Num_firsttwo;
//        int Num_lasttwo;
//        
//        TenOne = n_count % 100;
//        ThouHundred = (n_count - TenOne) / 100;
//        Num_firsttwo = (ThouHundred - 100);
//        Num_lasttwo = (n_count - 9999);
//        
//        if (n_count >= 9999) {
//            cout<<"The amount of overflow is "<<(Num_firsttwo)<<"."<<(Num_lasttwo)<<endl;
//            return false;
//        }
//        else
//        {
//            return true;
//        }
//    }
};

#endif /* MomsCounter_h */
