struct course
{
	char course_name[100];
	double obtained_marks;
	double total_marks;
};
struct result
{
	int student_id;
	int num_of_courses;
	course *courseList;
	double percentage;
};
void computeOneResult(result &);
void computeAllResult(result *, int );