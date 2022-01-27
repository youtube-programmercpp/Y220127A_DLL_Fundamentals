#include "pch.h"

//リンケージ指定
extern "C" int __declspec(dllexport) test()
{
	return 123;
}
