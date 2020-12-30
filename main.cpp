/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>

using namespace std;

class EMPLOYEE

{
    public:
    string surname;
    int dinh;
    int hour;
    
    EMPLOYEE(string s, int n, int a, int d)
    {
        surname = s; 
        dinh = a;
        hour = d;
        stage = n;
        
    }
    
    void setStage(int stage)
    {
        if(stage > 0) 
        {
           this -> stage = stage;
        }
    }
    
    void display()
    {
        cout << "______________________" << endl;
        cout << "SURNAME: " << surname << endl;
        cout << "START WORK " << stage << "\tYEARS AGO" << endl;
        cout << "$ IN HOUR: " << dinh << endl;
        cout << "AMOUNT OF HOURS: " << hour << endl;
        cout << "PROFIT: " << dinh * hour << "$" << endl;
        cout << "______________________" << endl;
        cout << endl;
    }
    ~EMPLOYEE() {};
    
    private:
    int stage;
    int n;
    
    
};


int main()
{
    EMPLOYEE ONE = EMPLOYEE("ZUBANOVA",3,7,110);
    EMPLOYEE TWO = EMPLOYEE("TROSHINA",6,4,150);
    EMPLOYEE THREE = EMPLOYEE("KOSTIN",11,8,180);
    EMPLOYEE FOUR = EMPLOYEE("BARANOV",2,5,90);
    EMPLOYEE FIVE = EMPLOYEE("IVANOVA",1,2,70);
    
    ONE.setStage(8);
    
    
    ONE.display();
    TWO.display();
    THREE.display();
    FOUR.display();
    FIVE.display();
    
    EMPLOYEE* Presnov = new EMPLOYEE ("Presnov",6,7,200);
    Presnov -> display();

    return 0;
}
