#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Threading { class WaitCallback; }

#define SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCCCFB0)
#define SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCCCFF0)
#define SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION___C__THROWASYNCIFNECESSARY_B__17_0_OFFSET UNITYSDK_OFFSET(0x1CCCD000)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int AwaitTaskContinuation___c_TypeDefinitionIndex = 929;

	class AwaitTaskContinuation___c : public ::System::Object
	{
	public:
		static ::System::Threading::WaitCallback** StaticGet___9__17_0()
		{
			return (::System::Threading::WaitCallback**)Il2CppClass::FromTypeDefinitionIndex(AwaitTaskContinuation___c_TypeDefinitionIndex)->GetStaticField(0x770);
		}
		static ::System::Threading::Tasks::AwaitTaskContinuation___c** StaticGet___9()
		{
			return (::System::Threading::Tasks::AwaitTaskContinuation___c**)Il2CppClass::FromTypeDefinitionIndex(AwaitTaskContinuation___c_TypeDefinitionIndex)->GetStaticField(0x778);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION___C__CTOR_OFFSET))(this);
		}

		::System::Void _ThrowAsyncIfNecessary_b__17_0(::System::Object* s)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION___C__THROWASYNCIFNECESSARY_B__17_0_OFFSET))(this, s);
		}
	};
}
