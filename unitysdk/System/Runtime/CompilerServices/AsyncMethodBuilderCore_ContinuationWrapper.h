#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System::Threading::Tasks { class Task; }

#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE_CONTINUATIONWRAPPER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C455AD0)
#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE_CONTINUATIONWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C455770)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int AsyncMethodBuilderCore_ContinuationWrapper_TypeDefinitionIndex = 1355;

	class AsyncMethodBuilderCore_ContinuationWrapper : public ::System::Object
	{
	public:
		::System::Action* m_invokeAction; // 0x10
		::System::Threading::Tasks::Task* m_innerTask; // 0x18
		::System::Action* m_continuation; // 0x20

		::System::Void _ctor(::System::Action* a1, ::System::Action* a2, ::System::Threading::Tasks::Task* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*, ::System::Threading::Tasks::Task*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE_CONTINUATIONWRAPPER__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE_CONTINUATIONWRAPPER_INVOKE_OFFSET))(this);
		}
	};
}
