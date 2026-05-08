#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Delegate; }
namespace System::Threading { class ContextCallback; }
namespace System::Threading { class ExecutionContext; }

#define SYSTEM_THREADING_THREADHELPER_THREADSTART_1_OFFSET UNITYSDK_OFFSET(0x18C8BB00)
#define SYSTEM_THREADING_THREADHELPER_THREADSTART_CONTEXT_OFFSET UNITYSDK_OFFSET(0x18C8B980)
#define SYSTEM_THREADING_THREADHELPER_THREADSTART_OFFSET UNITYSDK_OFFSET(0x18C8BA30)
#define SYSTEM_THREADING_THREADHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18C8B910)
#define SYSTEM_THREADING_THREADHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x18C8B970)

namespace System::Threading
{
	inline static constexpr unsigned int ThreadHelper_TypeDefinitionIndex = 835;

	class ThreadHelper : public ::System::Object
	{
	public:
		static ::System::Threading::ContextCallback** StaticGet__ccb()
		{
			return (::System::Threading::ContextCallback**)Il2CppClass::FromTypeDefinitionIndex(ThreadHelper_TypeDefinitionIndex)->GetStaticField(0x1140);
		}
		::System::Delegate* _start; // 0x10
		::System::Object* _startArg; // 0x18
		::System::Threading::ExecutionContext* _executionContext; // 0x20

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADHELPER__CCTOR_OFFSET))();
		}

		::System::Void _ctor(::System::Delegate* start)
		{
			return ((::System::Void(*)(::PVOID, ::System::Delegate*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADHELPER__CTOR_OFFSET))(this, start);
		}

		static ::System::Void ThreadStart_Context(::System::Object* state)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADHELPER_THREADSTART_CONTEXT_OFFSET))(state);
		}

		::System::Void ThreadStart(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADHELPER_THREADSTART_OFFSET))(this, obj);
		}

		::System::Void ThreadStart_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADHELPER_THREADSTART_1_OFFSET))(this);
		}
	};
}
