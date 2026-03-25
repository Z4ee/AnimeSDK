#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/SynchronizationContextProperties.h"

namespace System::Threading { class SendOrPostCallback; }

#define SYSTEM_THREADING_SYNCHRONIZATIONCONTEXT_CREATECOPY_OFFSET UNITYSDK_OFFSET(0x1623CBC0)
#define SYSTEM_THREADING_SYNCHRONIZATIONCONTEXT_GETTHREADLOCALCONTEXT_OFFSET UNITYSDK_OFFSET(0x1623CAD0)
#define SYSTEM_THREADING_SYNCHRONIZATIONCONTEXT_GET_CURRENTNOFLOW_OFFSET UNITYSDK_OFFSET(0x1623CB10)
#define SYSTEM_THREADING_SYNCHRONIZATIONCONTEXT_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1622F8B0)
#define SYSTEM_THREADING_SYNCHRONIZATIONCONTEXT_OPERATIONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1623CA00)
#define SYSTEM_THREADING_SYNCHRONIZATIONCONTEXT_OPERATIONSTARTED_OFFSET UNITYSDK_OFFSET(0x1623C9F0)
#define SYSTEM_THREADING_SYNCHRONIZATIONCONTEXT_POST_OFFSET UNITYSDK_OFFSET(0x1623C990)
#define SYSTEM_THREADING_SYNCHRONIZATIONCONTEXT_SEND_OFFSET UNITYSDK_OFFSET(0x1623C970)
#define SYSTEM_THREADING_SYNCHRONIZATIONCONTEXT_SETSYNCHRONIZATIONCONTEXT_OFFSET UNITYSDK_OFFSET(0x1623CA10)
#define SYSTEM_THREADING_SYNCHRONIZATIONCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16237630)

namespace System::Threading
{
	inline static constexpr unsigned int SynchronizationContext_TypeDefinitionIndex = 837;

	class SynchronizationContext : public ::System::Object
	{
	public:
		::System::Threading::SynchronizationContextProperties _props; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SYNCHRONIZATIONCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void Send(::System::Threading::SendOrPostCallback* d, ::System::Object* state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::SendOrPostCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SYNCHRONIZATIONCONTEXT_SEND_OFFSET))(this, d, state);
		}

		::System::Void Post(::System::Threading::SendOrPostCallback* d, ::System::Object* state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::SendOrPostCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SYNCHRONIZATIONCONTEXT_POST_OFFSET))(this, d, state);
		}

		::System::Void OperationStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SYNCHRONIZATIONCONTEXT_OPERATIONSTARTED_OFFSET))(this);
		}

		::System::Void OperationCompleted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SYNCHRONIZATIONCONTEXT_OPERATIONCOMPLETED_OFFSET))(this);
		}

		static ::System::Void SetSynchronizationContext(::System::Threading::SynchronizationContext* syncContext)
		{
			return ((::System::Void(*)(::System::Threading::SynchronizationContext*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SYNCHRONIZATIONCONTEXT_SETSYNCHRONIZATIONCONTEXT_OFFSET))(syncContext);
		}

		static ::System::Threading::SynchronizationContext* get_Current()
		{
			return ((::System::Threading::SynchronizationContext*(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SYNCHRONIZATIONCONTEXT_GET_CURRENT_OFFSET))();
		}

		static ::System::Threading::SynchronizationContext* get_CurrentNoFlow()
		{
			return ((::System::Threading::SynchronizationContext*(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SYNCHRONIZATIONCONTEXT_GET_CURRENTNOFLOW_OFFSET))();
		}

		static ::System::Threading::SynchronizationContext* GetThreadLocalContext()
		{
			return ((::System::Threading::SynchronizationContext*(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SYNCHRONIZATIONCONTEXT_GETTHREADLOCALCONTEXT_OFFSET))();
		}

		::System::Threading::SynchronizationContext* CreateCopy()
		{
			return ((::System::Threading::SynchronizationContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SYNCHRONIZATIONCONTEXT_CREATECOPY_OFFSET))(this);
		}
	};
}
