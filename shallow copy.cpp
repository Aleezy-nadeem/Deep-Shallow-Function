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
	cout<<endl;
	student* s2= new student (*s1);
	s2->name="jill";
	cout<<s2->name; 
	return 0;
}
