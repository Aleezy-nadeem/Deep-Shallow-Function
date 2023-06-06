#include <iostream>
using namespace std;
class student {
	public:
		student () {
			cout<<"Default constructor created!"<<endl;
		}
		student (const student &s )
		{
			name=s.name;
			gpa=s.gpa;
		}
		string name;
		float gpa;
};
main()
{
	student* s1= new student();
	s1->name="Jack";
	cout<<s1->name;
	student* s2= new student (*s1);

	cout<<endl<<s2->name;
}
