#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/SynchronizationContextProperties.h"

namespace System::Threading { class SendOrPostCallback; }

#define SYSTEM_THREADING_SYNCHRONIZATIONCONTEXT_CREATECOPY_OFFSET UNITYSDK_OFFSET(0x1A0BEA50)
#define SYSTEM_THREADING_SYNCHRONIZATIONCONTEXT_GETTHREADLOCALCONTEXT_OFFSET UNITYSDK_OFFSET(0x1A0BE870)
#define SYSTEM_THREADING_SYNCHRONIZATIONCONTEXT_GET_CURRENTNOFLOW_OFFSET UNITYSDK_OFFSET(0x1A0BE910)
#define SYSTEM_THREADING_SYNCHRONIZATIONCONTEXT_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A0BE730)
#define SYSTEM_THREADING_SYNCHRONIZATIONCONTEXT_OPERATIONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1A0BE610)
#define SYSTEM_THREADING_SYNCHRONIZATIONCONTEXT_OPERATIONSTARTED_OFFSET UNITYSDK_OFFSET(0x1A0BE600)
#define SYSTEM_THREADING_SYNCHRONIZATIONCONTEXT_POST_OFFSET UNITYSDK_OFFSET(0x1A0BE5A0)
#define SYSTEM_THREADING_SYNCHRONIZATIONCONTEXT_SEND_OFFSET UNITYSDK_OFFSET(0x1A0BE580)
#define SYSTEM_THREADING_SYNCHRONIZATIONCONTEXT_SETSYNCHRONIZATIONCONTEXT_OFFSET UNITYSDK_OFFSET(0x1A0BE620)
#define SYSTEM_THREADING_SYNCHRONIZATIONCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0BE570)

namespace System::Threading
{
	inline static constexpr unsigned int SynchronizationContext_TypeDefinitionIndex = 828;

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
