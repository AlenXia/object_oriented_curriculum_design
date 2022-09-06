#include<iostream>
#include<fstream>

using namespace std;

struct StruStudent
{
	char id[16];
	char name[16];
	char gender[8];
	float score;
};

class Student
{
private:
	StruStudent data;
public:
	Student();
	Student(StruStudent d );
	~Student();
	friend ostream& operator<<(ostream& out, Student s);
	friend int WriteFileTxt();
	friend int ReadFileTxt();

	friend int WriteFileBin();
	friend int ReadFileBin();
};

Student::Student()
{
	data = { "1","name","男",60.0 };
}

Student::Student(StruStudent d)
{
	data = d;
}

Student::~Student()
{
}

ostream& operator<<(ostream& out, Student s)
{
	out << "学号：" << s.data.id << ",姓名：" << s.data.name << ",性别：" << s.data.gender << ",年龄：" << s.data.score;
	return out;
}

int WriteFileTxt()
{
	StruStudent d1 = { "001", "王一", "男", 100.0 };
	StruStudent d2 = { "002", "王二", "女", 80.0 };
	StruStudent d3 = { "003", "王三", "男", 60.0 };
	StruStudent d4 = { "004", "王四", "女", 88.0 };
	StruStudent d5 = { "005", "王无", "男", 59.0 };
	Student class1[5] = { Student(d1),Student(d2),Student(d3),Student(d4),Student(d5) };
	Student stu;

	ofstream myfile;
	myfile.open("myfile.txt");
	if (myfile.fail())
	{
		cout << "打开文件错误！" << endl;
		return -1;
	}
	myfile << 5 << endl;
	for (int i = 0;i < 5;i++)
	{
		stu = class1[i];
		myfile << stu.data.id << "  " << stu.data.name << "   " << stu.data.gender << "   " << stu.data.score<<endl;
	}
	myfile.close();
	return 0;
}

int ReadFileTxt()
{
	cout << "读出文本文件并显示！" << endl;
	Student class2[10];
	int num;

	ifstream myfile;
	myfile.open("myfile.txt");
	if (myfile.fail())
	{
		cout << "打开文件错误！" << endl;
		return -1;
	}
	myfile >> num;
	Student stu;
	for (int i = 0;i < num;i++)
	{
		myfile >> stu.data.id >> stu.data.name >> stu.data.gender >> stu.data.score;
		class2[i] = stu;
	}
	myfile.close();
	for (int i = 0;i < num;i++)
	{
		cout << class2[i] << endl;
	}
	return 0;
}

int WriteFileBin()
{
	StruStudent d1 = { "001", "王一", "男", 100.0 };
	StruStudent d2 = { "002", "王二", "女", 80.0 };
	StruStudent d3 = { "003", "王三", "男", 60.0 };
	StruStudent d4 = { "004", "王四", "女", 88.0 };
	StruStudent d5 = { "005", "王五", "男", 59.0 };
	Student class1[5] = { Student(d1),Student(d2),Student(d3),Student(d4),Student(d5) };
	Student stu;

	ofstream myfile;
	myfile.open("myfile.dat",ios::binary);
	if (myfile.fail())
	{
		cout << "打开文件错误！" << endl;
		return -1;
	}

	int num = 5;
	myfile.write((char*)&num, sizeof(num));

	for (int i = 0;i < 5;i++)
	{
		stu = class1[i];
		myfile.write((char*)&stu.data, sizeof(StruStudent));
	}
	myfile.close();
	return 0;
}

int ReadFileBin()
{
	cout << "读出二进制文件并显示！" << endl;
	Student class2[10];
	int num;

	ifstream myfile;
	myfile.open("myfile.dat", ios::binary);
	if (myfile.fail())
	{
		cout << "打开文件错误！" << endl;
		return -1;
	}

	myfile.read((char*)&num, sizeof(int));
	Student stu;

	for (int i = 0;i < num;i++)
	{
		myfile.read((char*)&stu.data, sizeof(StruStudent));
		class2[i] = stu;
	}
	myfile.close();
	for (int i = 0;i < num;i++)
	{
		cout << class2[i] << endl;
	}
	return 0;
	return 0;
}






int main()
{
	Student s;
	WriteFileTxt();
	ReadFileTxt();
	WriteFileBin();
	ReadFileBin();
	return 0;
}
