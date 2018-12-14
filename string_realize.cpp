#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class String{
    public:
/*     String(){
            ps =  new char[1];
            *ps = '\0';
        }
        String(const char *str){
            ps = new char[strlen(str) + 1];
            strcpy(ps, str);
        }

*/
        String(const char *str = nullptr){
            if(str == nullptr){
                ps = new char[1];
                *ps = '\0';
            }
            else{
                ps = new char[strlen(str) + 1];
                strcpy(ps, str);
            }
            cout << "string construct is called " << endl;
        }

        String(const String &other){
            cout << "copy construct is called " << endl;
            int len = strlen(other.ps);
            ps  = new char[len + 1];
            strcpy(ps, other.ps);
        }

        String& operator=(const String &other){
            cout << "assign copy construct is called " << endl;
            if(&other == this)
                return *this;
            delete ps;
            int len = strlen(other.ps);
            ps = new char[len + 1];
            strcpy(ps, other.ps);
            return *this;
            
        }
        ~String(){
            cout << "desturct is called " << endl;
            delete[] ps;
        }

       void String_pr(){
           char *tmp = ps;
           while(*tmp != '\0'){
               cout << *tmp;
               tmp++;
           }
           cout << endl;
        }

    private:
        char *ps;
};

int main(int argc, char const *argv[])
{
    String S1;
    cout <<"---s1---" << endl;
    String S2("ABC");
    S2.String_pr();
    cout <<"---s2---" << endl;
    String S3(S2);
    S3.String_pr();
    cout <<"---s3---" << endl;
    String S4 = S2;
    S4.String_pr();
    cout <<"---s4---" << endl;
    String S5;
    S5 = S2;
    S5.String_pr();
    cout <<"---s5---" << endl;
    
    

    return 0;
}
