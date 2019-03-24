#include <string>
using namespace std;
class Employee
{
public:
   Employee( string, string, );
   void setFirstName( string );
   string getFirstName();
   void setLastName( string );
   string getLastName();
   void setMonthlySalary();
   int getMonthlySalary();
private:
   string firstName;
   string lastName;
   int monthlySalary;
};

