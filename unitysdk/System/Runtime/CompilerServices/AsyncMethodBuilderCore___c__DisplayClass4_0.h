#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System::Threading::Tasks { class Task; }

#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE25340)
#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE___C__DISPLAYCLASS4_0__OUTPUTASYNCCAUSALITYEVENTS_B__0_OFFSET UNITYSDK_OFFSET(0x1BE25350)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int AsyncMethodBuilderCore___c__DisplayClass4_0_TypeDefinitionIndex = 1382;

	class AsyncMethodBuilderCore___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::Action* continuation; // 0x10
		::System::Threading::Tasks::Task* innerTask; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Void _OutputAsyncCausalityEvents_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE___C__DISPLAYCLASS4_0__OUTPUTASYNCCAUSALITYEVENTS_B__0_OFFSET))(this);
		}
	};
}
