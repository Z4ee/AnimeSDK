#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/SynchronizationContext.h"
#include "unitysdk/UnityEngine/UnitySynchronizationContext_WorkRequest.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class SendOrPostCallback; }

#define UNITYENGINE_UNITYSYNCHRONIZATIONCONTEXT_CREATECOPY_OFFSET UNITYSDK_OFFSET(0x1EE12E80)
#define UNITYENGINE_UNITYSYNCHRONIZATIONCONTEXT_EXECUTEPENDINGTASKS_OFFSET UNITYSDK_OFFSET(0x1EE133B0)
#define UNITYENGINE_UNITYSYNCHRONIZATIONCONTEXT_EXECUTETASKS_OFFSET UNITYSDK_OFFSET(0x1EE13380)
#define UNITYENGINE_UNITYSYNCHRONIZATIONCONTEXT_EXEC_OFFSET UNITYSDK_OFFSET(0x1EE12EF0)
#define UNITYENGINE_UNITYSYNCHRONIZATIONCONTEXT_HASPENDINGTASKS_OFFSET UNITYSDK_OFFSET(0x1EE13220)
#define UNITYENGINE_UNITYSYNCHRONIZATIONCONTEXT_INITIALIZESYNCHRONIZATIONCONTEXT_OFFSET UNITYSDK_OFFSET(0x1EE13250)
#define UNITYENGINE_UNITYSYNCHRONIZATIONCONTEXT_OPERATIONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1EE12D60)
#define UNITYENGINE_UNITYSYNCHRONIZATIONCONTEXT_OPERATIONSTARTED_OFFSET UNITYSDK_OFFSET(0x1EE12D50)
#define UNITYENGINE_UNITYSYNCHRONIZATIONCONTEXT_POST_OFFSET UNITYSDK_OFFSET(0x1EE12D70)
#define UNITYENGINE_UNITYSYNCHRONIZATIONCONTEXT_SEND_OFFSET UNITYSDK_OFFSET(0x1EE129D0)
#define UNITYENGINE_UNITYSYNCHRONIZATIONCONTEXT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EE12970)
#define UNITYENGINE_UNITYSYNCHRONIZATIONCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE128E0)

namespace UnityEngine
{
	inline static constexpr unsigned int UnitySynchronizationContext_TypeDefinitionIndex = 4361;

	class UnitySynchronizationContext : public ::System::Threading::SynchronizationContext
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::UnitySynchronizationContext_WorkRequest>* m_AsyncWorkQueue; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::UnitySynchronizationContext_WorkRequest>* m_CurrentFrameWork; // 0x20
		::System::Int32 m_MainThreadID; // 0x28
		::System::Int32 m_TrackedCount; // 0x2C

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UNITYSYNCHRONIZATIONCONTEXT__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Collections::Generic::List_1<::UnityEngine::UnitySynchronizationContext_WorkRequest>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::UnitySynchronizationContext_WorkRequest>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UNITYSYNCHRONIZATIONCONTEXT__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void Send(::System::Threading::SendOrPostCallback* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::SendOrPostCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_UNITYSYNCHRONIZATIONCONTEXT_SEND_OFFSET))(this, a1, a2);
		}

		::System::Void OperationStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UNITYSYNCHRONIZATIONCONTEXT_OPERATIONSTARTED_OFFSET))(this);
		}

		::System::Void OperationCompleted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UNITYSYNCHRONIZATIONCONTEXT_OPERATIONCOMPLETED_OFFSET))(this);
		}

		::System::Void Post(::System::Threading::SendOrPostCallback* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::SendOrPostCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_UNITYSYNCHRONIZATIONCONTEXT_POST_OFFSET))(this, a1, a2);
		}

		::System::Threading::SynchronizationContext* CreateCopy()
		{
			return ((::System::Threading::SynchronizationContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UNITYSYNCHRONIZATIONCONTEXT_CREATECOPY_OFFSET))(this);
		}

		::System::Void Exec()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UNITYSYNCHRONIZATIONCONTEXT_EXEC_OFFSET))(this);
		}

		::System::Boolean HasPendingTasks()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UNITYSYNCHRONIZATIONCONTEXT_HASPENDINGTASKS_OFFSET))(this);
		}

		static ::System::Void InitializeSynchronizationContext()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UNITYSYNCHRONIZATIONCONTEXT_INITIALIZESYNCHRONIZATIONCONTEXT_OFFSET))();
		}

		static ::System::Void ExecuteTasks()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UNITYSYNCHRONIZATIONCONTEXT_EXECUTETASKS_OFFSET))();
		}

		static ::System::Boolean ExecutePendingTasks(::System::Int64 a1)
		{
			return ((::System::Boolean(*)(::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_UNITYSYNCHRONIZATIONCONTEXT_EXECUTEPENDINGTASKS_OFFSET))(a1);
		}
	};
}
