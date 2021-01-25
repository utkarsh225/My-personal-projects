   //edited by Utkarsh Agarwal
   
    #include<iostream>
    #include<cmath>
    using namespace std;
    class start{
        private:
        int x[1] ;
        int y[1] ;
        float total;
        public:
        start(void);
        void take(){
                cout <<"please enter the value of x ordinate"<<endl;
                cin >>x[0];
                cout <<"("<<x[0]<<","<<"?"<<")"<<endl;
                cout <<"please enter the value of y ordinate"<<endl;
                cin >>y[0];
                cout <<"("<<x[0]<<","<<y[0]<<")"<<endl;

                cout <<"please enter the value of x ordinate"<<endl;
                cin >>x[1];
                cout <<"("<<x[0]<<","<<y[0]<<") and "<<"("<<x[1]<<","<<"?"<<")"<<endl;
                cout <<"please enter the value of y ordinate"<<endl;
                cin >>y[1];
                cout <<"("<<x[0]<<","<<y[0]<<") and "<<"("<<x[1]<<","<<y[1]<<")"<<endl;
        
    }
    void calc(){
    total = sqrt(((x[1] - x[0])*(x[1] - x[0])) + ((y[1] - y[0])*(y[1] - y[0])));
    cout <<"Distance between these two points is "<<total<<endl;
    }
    };
    start::start(){
    for (int i = 0; i < 2; i++)
    {
        x[i] = 0;
        y[i] = 0;
    }

    }
    int main(){
        start v;
        v.take();
        v.calc();

        return 0;
    }
