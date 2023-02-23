#include <iostream>

using namespace std;

class computer{//creating a class computer
public://class access modifier of type public
    void use(){//creating a method/function called use
        cout <<"A computer can be used to access information on the internet\n";
    }


};

class client : public computer{// The class client has inherited class computer
public://class access modifier of type public
    void location(){//creating a method/function called location
        cout <<"client machine is located on the local area network\n";
    }
};
class server : public computer{// The class client has inherited class computer
    public:
    void access(){//creating a method/function called use
        cout <<"To access a server you need an internet connection\n";
    }
};


int main()
{
computer hp;//creating an object named hp in the class computer
hp.use();// accessing the function use found on the class computer
client proxy;
proxy.location();
server apache;
apache.access();
    return 0;
}
