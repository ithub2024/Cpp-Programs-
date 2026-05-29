# include<iosteram>
using namespace std;
class A{
private:
    int A_ka_private;
protected:
    int A_ka_protected;
public: 
    int A_ka_public;
};
class B: protected A{  // (inherited as) A_ka_protected , A_ka_public as protected
public:
   int B_ka_public;
};
int main(){
A b;

}