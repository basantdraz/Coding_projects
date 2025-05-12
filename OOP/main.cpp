#include <iostream>

using namespace std;

class abstractEmployee
{
    virtual void askpronotion()= 0;
} ;

class employee : abstractEmployee
{
    private:
    string name ;
    string compony;
    int age ;

    public:
    void setname (string aname){
    name = aname;
    }
    string getname (){
    return name;
    }

     void setcompony (string acompony){
    compony = acompony;
    }
    string getcompony (){
    return compony;
    }

     void setage (int Aage){
    age = Aage;
    }
    int getage (){
    return age;
    }


    void introduceyourself()
    {
        cout<< "Your name is "<< name << endl;
        cout<< "You'r working at "<< compony << endl;
        cout<< "Your age is "<< age << endl;

    }
    employee (string aname , string acompony , int Aage)

    {
        name = aname;
        compony= acompony;
        age = Aage;
    }

    void askpronotion(){

    if (age > 30) {

        cout << "got Promoted"<< endl;
    }
    else {

    cout << "No Promotion for you"<< endl;

    }
    }

};
class developer : public employee

{
public :
   string favProLanguage ;
   developer (string aname , string acompony , int Aage , string afavProLanguage ) : employee (aname , acompony , Aage){
   favProLanguage = afavProLanguage ;
   }
   void fixbug()
{
    cout << getname()<< " fix bug by " << favProLanguage << endl;
}
};

class teacher : public employee
{
public :
    string subject ;
    void prepare (){
    cout << "I'm prepare for " << subject << " lesson " << endl;
    }
    teacher (string aname , string acompony , int Aage , string asubject ) : employee (aname , acompony , Aage){
    subject = asubject;
    }
};

int main()
{
    employee n1 = employee("Basantota" , "Schnider", 23);
    n1.introduceyourself();
    n1.askpronotion();
    cout << endl;

    employee n2 = employee("nahola", "orascom" , 23);
    n2.introduceyourself();
    n2.askpronotion();
        cout << endl;


    developer n3 = developer ("Basant" , "El sewedy", 24 , "C++");
    n3.fixbug();
    n3.askpronotion();
    n3.introduceyourself();
        cout << endl;


    teacher n4 = teacher ("tamer", "el msaay" , 55 , "science");
    n4.prepare();
    n4.introduceyourself();
    n4.askpronotion();
}
