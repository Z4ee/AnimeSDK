#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System::Threading::Tasks { class Task; }

#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE_CONTINUATIONWRAPPER_INVOKE_OFFSET UNITYSDK_OFFSET(0x179BE240)
#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE_CONTINUATIONWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x179BDEF0)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int AsyncMethodBuilderCore_ContinuationWrapper_TypeDefinitionIndex = 1347;

	class AsyncMethodBuilderCore_ContinuationWrapper : public ::System::Object
	{
	public:
		::System::Action* m_invokeAction; // 0x10
		::System::Action* m_continuation; // 0x18
		::System::Threading::Tasks::Task* m_innerTask; // 0x20

		::System::Void _ctor(::System::Action* continuation, ::System::Action* invokeAction, ::System::Threading::Tasks::Task* innerTask)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*, ::System::Threading::Tasks::Task*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE_CONTINUATIONWRAPPER__CTOR_OFFSET))(this, continuation, invokeAction, innerTask);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE_CONTINUATIONWRAPPER_INVOKE_OFFSET))(this);
		}
	};
}
