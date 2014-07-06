
#include <iostream>
using namespace std;

void main(int argc, char ** argv)
{
  errno_t ec;
  FILE * file;
  cout << "Hello World!" << endl;
  ec = fopen_s(&file, "file.txt", "r");
  /*ec > 0 ? cout << "EC > 0 ? Yes" : cout << "EC > 0 ? No" << endl;
  if(file != 0)
  {
	fclose(file);
  }
  getchar();*/
}
