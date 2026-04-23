#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace System::Threading { class CancellationTokenSource; }
namespace System::Threading { class ContextCallback; }
namespace System::Threading { class ExecutionContext; }
namespace System::Threading { class SynchronizationContext; }

#define SYSTEM_THREADING_CANCELLATIONCALLBACKINFO_EXECUTECALLBACK_OFFSET UNITYSDK_OFFSET(0x1785BB40)
#define SYSTEM_THREADING_CANCELLATIONCALLBACKINFO_EXECUTIONCONTEXTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1785BD30)
#define SYSTEM_THREADING_CANCELLATIONCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1785BB20)

namespace System::Threading
{
	inline static constexpr unsigned int CancellationCallbackInfo_TypeDefinitionIndex = 800;

	class CancellationCallbackInfo : public ::System::Object
	{
	public:
		static ::System::Threading::ContextCallback** StaticGet_s_executionContextCallback()
		{
			return (::System::Threading::ContextCallback**)Il2CppClass::FromTypeDefinitionIndex(CancellationCallbackInfo_TypeDefinitionIndex)->GetStaticField(0xBDE0);
		}
		::System::Threading::ExecutionContext* TargetExecutionContext; // 0x10
		::System::Action_1<::System::Object*>* Callback; // 0x18
		::System::Object* StateForCallback; // 0x20
		::System::Threading::CancellationTokenSource* CancellationTokenSource; // 0x28
		::System::Threading::SynchronizationContext* TargetSyncContext; // 0x30

		::System::Void _ctor(::System::Action_1<::System::Object*>* callback, ::System::Object* stateForCallback, ::System::Threading::SynchronizationContext* targetSyncContext, ::System::Threading::ExecutionContext* targetExecutionContext, ::System::Threading::CancellationTokenSource* cancellationTokenSource)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*, ::System::Threading::SynchronizationContext*, ::System::Threading::ExecutionContext*, ::System::Threading::CancellationTokenSource*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONCALLBACKINFO__CTOR_OFFSET))(this, callback, stateForCallback, targetSyncContext, targetExecutionContext, cancellationTokenSource);
		}

		::System::Void ExecuteCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONCALLBACKINFO_EXECUTECALLBACK_OFFSET))(this);
		}

		static ::System::Void ExecutionContextCallback(::System::Object* obj)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONCALLBACKINFO_EXECUTIONCONTEXTCALLBACK_OFFSET))(obj);
		}
	};
}
