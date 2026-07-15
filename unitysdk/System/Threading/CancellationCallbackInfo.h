#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace System::Threading { class CancellationTokenSource; }
namespace System::Threading { class ContextCallback; }
namespace System::Threading { class ExecutionContext; }
namespace System::Threading { class SynchronizationContext; }

#define SYSTEM_THREADING_CANCELLATIONCALLBACKINFO_EXECUTECALLBACK_OFFSET UNITYSDK_OFFSET(0x1997D110)
#define SYSTEM_THREADING_CANCELLATIONCALLBACKINFO_EXECUTIONCONTEXTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1997D310)
#define SYSTEM_THREADING_CANCELLATIONCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1997D0F0)

namespace System::Threading
{
	inline static constexpr unsigned int CancellationCallbackInfo_TypeDefinitionIndex = 799;

	class CancellationCallbackInfo : public ::System::Object
	{
	public:
		static ::System::Threading::ContextCallback** StaticGet_s_executionContextCallback()
		{
			return (::System::Threading::ContextCallback**)Il2CppClass::FromTypeDefinitionIndex(CancellationCallbackInfo_TypeDefinitionIndex)->GetStaticField(0x1E0C0);
		}
		::System::Action_1<::System::Object*>* Callback; // 0x10
		::System::Object* StateForCallback; // 0x18
		::System::Threading::ExecutionContext* TargetExecutionContext; // 0x20
		::System::Threading::CancellationTokenSource* CancellationTokenSource; // 0x28
		::System::Threading::SynchronizationContext* TargetSyncContext; // 0x30

		::System::Void _ctor(::System::Action_1<::System::Object*>* a1, ::System::Object* a2, ::System::Threading::SynchronizationContext* a3, ::System::Threading::ExecutionContext* a4, ::System::Threading::CancellationTokenSource* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*, ::System::Threading::SynchronizationContext*, ::System::Threading::ExecutionContext*, ::System::Threading::CancellationTokenSource*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONCALLBACKINFO__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void ExecuteCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONCALLBACKINFO_EXECUTECALLBACK_OFFSET))(this);
		}

		static ::System::Void ExecutionContextCallback(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONCALLBACKINFO_EXECUTIONCONTEXTCALLBACK_OFFSET))(a1);
		}
	};
}
