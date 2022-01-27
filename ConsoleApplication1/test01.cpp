extern "C" int test();
#pragma comment(lib, "Dll1.lib")

int main()
{
	int n = test();
}
