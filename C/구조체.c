#include<stdio.h>
struct MyStruct
{
	char * first_name;
	char * last_name;
};

struct MyStruct2
{
	int telecom;
	int countrynumber;
	int number;
};
struct id
{
	struct MyStruct name;
	struct MyStruct2 phone;
	struct email
	{
		char* mail;
	};
};
void main() {
	struct MyStruct na = { "lee", "jaeung" };
	struct MyStruct2 na2 = { 010,1111,2222 };
	struct id lee;
	lee.name = na;
	lee.phone = na2;
	lee.mail = "wodnd@sdasd";
	printf("%s %d %s", lee.name.first_name,lee.phone.number,lee.mail);
	getchar();
}