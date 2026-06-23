#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BF85135934DD45B5;
class Class_3_8840398725162854;
class TaskTreeTest;

#define TASKTREETEST___C__DISPLAYCLASS5_0__BUILDTREE_B__0_OFFSET UNITYSDK_OFFSET(0x1DA4D4E0)
#define TASKTREETEST___C__DISPLAYCLASS5_0__BUILDTREE_B__1_OFFSET UNITYSDK_OFFSET(0x1DA4D5A0)
#define TASKTREETEST___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA4D4D0)

inline static constexpr unsigned int TaskTreeTest___c__DisplayClass5_0_TypeDefinitionIndex = 76080;

class TaskTreeTest___c__DisplayClass5_0 : public ::System::Object
{
public:
	::Class_1_BF85135934DD45B5* taskTree; // 0x10
	::TaskTreeTest* __4__this; // 0x18
	::Class_3_8840398725162854* taskLayer; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TASKTREETEST___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
	}

	::System::Void _BuildTree_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TASKTREETEST___C__DISPLAYCLASS5_0__BUILDTREE_B__0_OFFSET))(this);
	}

	::System::Void _BuildTree_b__1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TASKTREETEST___C__DISPLAYCLASS5_0__BUILDTREE_B__1_OFFSET))(this);
	}
};
