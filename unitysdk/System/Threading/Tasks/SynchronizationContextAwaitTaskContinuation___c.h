#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_THREADING_TASKS_SYNCHRONIZATIONCONTEXTAWAITTASKCONTINUATION___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1623E480)
#define SYSTEM_THREADING_TASKS_SYNCHRONIZATIONCONTEXTAWAITTASKCONTINUATION___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1623E4B0)
#define SYSTEM_THREADING_TASKS_SYNCHRONIZATIONCONTEXTAWAITTASKCONTINUATION___C___CCTOR_B__7_0_OFFSET UNITYSDK_OFFSET(0x1623E4C0)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int SynchronizationContextAwaitTaskContinuation___c_TypeDefinitionIndex = 916;

	class SynchronizationContextAwaitTaskContinuation___c : public ::System::Object
	{
	public:
		static ::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation___c** StaticGet___9()
		{
			return (::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation___c**)Il2CppClass::FromTypeDefinitionIndex(SynchronizationContextAwaitTaskContinuation___c_TypeDefinitionIndex)->GetStaticField(0x6490);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_SYNCHRONIZATIONCONTEXTAWAITTASKCONTINUATION___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_SYNCHRONIZATIONCONTEXTAWAITTASKCONTINUATION___C__CTOR_OFFSET))(this);
		}

		::System::Void __cctor_b__7_0(::System::Object* state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_SYNCHRONIZATIONCONTEXTAWAITTASKCONTINUATION___C___CCTOR_B__7_0_OFFSET))(this, state);
		}
	};
}
