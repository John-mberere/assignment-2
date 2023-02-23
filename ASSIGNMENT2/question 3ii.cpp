#include <iostream>

using namespace std;

class ICT{
public:
    void name(){
        cout <<"Faculty of ICT";
    }


};

class certificate : public ICT{
public:
    void level(){
    cout <<"certificate level\n";
    }


};

class diploma : public ICT{
public:
    void level(){
    cout <<"diploma level\n";
    }
};

class degree : public ICT{
public:
void level(){
    cout <<"degree level\n";
}

};
class BSC_IT : public degree{
public:
    void stage_1(){
     cout <<"BSC IT stage 1\n";
    }
     void stage_2(){
    cout <<"BSC IT stage 2\n";
    }
     void stage_3(){
    cout <<"BSC IT stage 3\n";
    }

};
int main()
{

BSC_IT get;
get.name();
    return 0;
}
