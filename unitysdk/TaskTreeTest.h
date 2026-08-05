#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_BF85135934DD45B5;
class Class_2_D6F9B792012303A1;
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Threading::Tasks { template <typename T> class TaskCompletionSource_1; }

#define TASKTREETEST_BUILDTASK_OFFSET UNITYSDK_OFFSET(0x1E3530F0)
#define TASKTREETEST_BUILDTREE_OFFSET UNITYSDK_OFFSET(0x1E352E60)
#define TASKTREETEST_DELAYTEST_OFFSET UNITYSDK_OFFSET(0x1E352D30)
#define TASKTREETEST_ROOTBEGIN_OFFSET UNITYSDK_OFFSET(0x1E3531E0)
#define TASKTREETEST_ROOTCANCEL_OFFSET UNITYSDK_OFFSET(0x1E353460)
#define TASKTREETEST_ROOTEND_OFFSET UNITYSDK_OFFSET(0x1E353320)
#define TASKTREETEST_SETTASK_OFFSET UNITYSDK_OFFSET(0x1E352DB0)
#define TASKTREETEST_START_OFFSET UNITYSDK_OFFSET(0x1E3529D0)
#define TASKTREETEST_TESTCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1E352A90)
#define TASKTREETEST_TEST_OFFSET UNITYSDK_OFFSET(0x1E352900)
#define TASKTREETEST__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3535A0)

inline static constexpr unsigned int TaskTreeTest_TypeDefinitionIndex = 48926;

class TaskTreeTest : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TASKTREETEST__CTOR_OFFSET))(this);
	}

	::System::Void Test()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TASKTREETEST_TEST_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TASKTREETEST_START_OFFSET))(this);
	}

	::System::Void TestComplete()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TASKTREETEST_TESTCOMPLETE_OFFSET))(this);
	}

	::System::Collections::IEnumerator* DelayTest(::System::Threading::Tasks::TaskCompletionSource_1<::System::Int32>* completionSource)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Threading::Tasks::TaskCompletionSource_1<::System::Int32>*))((::PBYTE)hIl2Cpp + TASKTREETEST_DELAYTEST_OFFSET))(this, completionSource);
	}

	::System::Void SetTask(::System::Threading::Tasks::TaskCompletionSource_1<::System::Int32>* taskCompletionSource)
	{
		return ((::System::Void(*)(::PVOID, ::System::Threading::Tasks::TaskCompletionSource_1<::System::Int32>*))((::PBYTE)hIl2Cpp + TASKTREETEST_SETTASK_OFFSET))(this, taskCompletionSource);
	}

	::Class_1_BF85135934DD45B5* BuildTree(::System::String* name)
	{
		return ((::Class_1_BF85135934DD45B5*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + TASKTREETEST_BUILDTREE_OFFSET))(this, name);
	}

	::System::Void RootBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TASKTREETEST_ROOTBEGIN_OFFSET))(this);
	}

	::System::Void RootEnd()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TASKTREETEST_ROOTEND_OFFSET))(this);
	}

	::System::Void RootCancel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TASKTREETEST_ROOTCANCEL_OFFSET))(this);
	}

	::Class_2_D6F9B792012303A1* BuildTask(::Class_1_BF85135934DD45B5* taskTree, ::System::String* name, ::System::Int32 ms)
	{
		return ((::Class_2_D6F9B792012303A1*(*)(::PVOID, ::Class_1_BF85135934DD45B5*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + TASKTREETEST_BUILDTASK_OFFSET))(this, taskTree, name, ms);
	}
};
