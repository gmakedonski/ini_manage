#include "ini_manage.h"

void main()
{
/*	init_content();
	add_section("TEST1","test data");
	_append("TEST1","A","AAAA","");
	_append("TEST1","B","BBBB","");
	_append("TEST1","D","BBBB","");	
	printf("sizeof section TEST1 %d\n",section_size("TEST1"));
//	add_section("TEST2","test data2");
	_append("TEST2","C","ZZZZ","");
	_append("TEST2","D","YYYY","");	
	printf("sizeof section TEST2 %d\n",section_size("TEST2"));
	_remove("TEST2","D");
	printf("sizeof section TEST2 %d\n",section_size("TEST2"));
	//print_content();
	//_remove_all("TEST1");
	//remove_section("TEST2");
	printf("sizeof content : %d\n",content_size());
	clear();
	print_content();*/
	char *buffer;
#ifdef _WIN32
	printf("Window version\n");
#endif
	ini_start("sample.ini");
	//save_as("test.ini");
	buffer = get_value("Main","PLC");
	printf("value : %s\n",buffer);
	printf("last error is %s\n",get_last_error());
	//print_content();	
	ini_end();
}