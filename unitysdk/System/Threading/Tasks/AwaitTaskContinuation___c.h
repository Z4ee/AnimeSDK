#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Threading { class WaitCallback; }

#define SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C658290)
#define SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6582D0)
#define SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION___C__THROWASYNCIFNECESSARY_B__17_0_OFFSET UNITYSDK_OFFSET(0x1C6582E0)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int AwaitTaskContinuation___c_TypeDefinitionIndex = 926;

	class AwaitTaskContinuation___c : public ::System::Object
	{
	public:
		static ::System::Threading::WaitCallback** StaticGet___9__17_0()
		{
			return (::System::Threading::WaitCallback**)Il2CppClass::FromTypeDefinitionIndex(AwaitTaskContinuation___c_TypeDefinitionIndex)->GetStaticField(0x14C60);
		}
		static ::System::Threading::Tasks::AwaitTaskContinuation___c** StaticGet___9()
		{
			return (::System::Threading::Tasks::AwaitTaskContinuation___c**)Il2CppClass::FromTypeDefinitionIndex(AwaitTaskContinuation___c_TypeDefinitionIndex)->GetStaticField(0x14C68);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION___C__CTOR_OFFSET))(this);
		}

		::System::Void _ThrowAsyncIfNecessary_b__17_0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION___C__THROWASYNCIFNECESSARY_B__17_0_OFFSET))(this, a1);
		}
	};
}
