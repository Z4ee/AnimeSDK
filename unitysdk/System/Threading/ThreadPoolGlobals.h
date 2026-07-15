#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Threading { class ThreadPoolWorkQueue; }

#define SYSTEM_THREADING_THREADPOOLGLOBALS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A739310)

namespace System::Threading
{
	inline static constexpr unsigned int ThreadPoolGlobals_TypeDefinitionIndex = 853;

	class ThreadPoolGlobals : public ::System::Object
	{
	public:
		static ::System::Threading::ThreadPoolWorkQueue** StaticGet_workQueue()
		{
			return (::System::Threading::ThreadPoolWorkQueue**)Il2CppClass::FromTypeDefinitionIndex(ThreadPoolGlobals_TypeDefinitionIndex)->GetStaticField(0x21A20);
		}
		static ::System::Int32* StaticGet_processorCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ThreadPoolGlobals_TypeDefinitionIndex)->GetStaticField(0x6AC0);
		}
		static ::System::Boolean* StaticGet_vmTpInitialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ThreadPoolGlobals_TypeDefinitionIndex)->GetStaticField(0x6AC4);
		}
		static ::System::Boolean* StaticGet_tpHosted()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ThreadPoolGlobals_TypeDefinitionIndex)->GetStaticField(0x6AC5);
		}
		static ::System::Boolean* StaticGet_enableWorkerTracking()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ThreadPoolGlobals_TypeDefinitionIndex)->GetStaticField(0x6AC6);
		}
		static ::System::UInt32* StaticGet_tpQuantum()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(ThreadPoolGlobals_TypeDefinitionIndex)->GetStaticField(0x6AC8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOLGLOBALS__CCTOR_OFFSET))();
		}
	};
}
