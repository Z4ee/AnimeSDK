#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/Threading/AsyncFlowControl.h"
#include "unitysdk/System/Threading/ExecutionContextSwitcher.h"
#include "unitysdk/System/Threading/ExecutionContext_CaptureOptions.h"
#include "unitysdk/System/Threading/ExecutionContext_Flags.h"
#include "unitysdk/System/Threading/StackCrawlMark.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::Remoting::Messaging { class IllogicalCallContext; }
namespace System::Runtime::Remoting::Messaging { class LogicalCallContext; }
namespace System::Runtime::Serialization { class SerializationInfo; }
namespace System::Threading { class ContextCallback; }
namespace System::Threading { class IAsyncLocal; }
namespace System::Threading { class SynchronizationContext; }
namespace System::Threading { class Thread; }

#define SYSTEM_THREADING_EXECUTIONCONTEXT_CAPTURE_1_OFFSET UNITYSDK_OFFSET(0x1CD637C0)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_CAPTURE_OFFSET UNITYSDK_OFFSET(0x1CD63760)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_CREATECOPY_OFFSET UNITYSDK_OFFSET(0x1CD630F0)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_CREATEMUTABLECOPY_OFFSET UNITYSDK_OFFSET(0x1CD63240)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CD62790)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_ESTABLISHCOPYONWRITESCOPE_1_OFFSET UNITYSDK_OFFSET(0x1CD62DD0)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_ESTABLISHCOPYONWRITESCOPE_OFFSET UNITYSDK_OFFSET(0x1CD62FF0)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_FASTCAPTURE_OFFSET UNITYSDK_OFFSET(0x1CD63B00)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1CD63B60)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_GET_ILLOGICALCALLCONTEXT_OFFSET UNITYSDK_OFFSET(0x1CD62740)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_GET_ISFLOWSUPPRESSED_OFFSET UNITYSDK_OFFSET(0x1CD61C90)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_GET_ISNEWCAPTURE_OFFSET UNITYSDK_OFFSET(0x1CD61C70)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_GET_ISPREALLOCATEDDEFAULT_OFFSET UNITYSDK_OFFSET(0x1CD61CB0)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_GET_LOGICALCALLCONTEXT_OFFSET UNITYSDK_OFFSET(0x1CD626F0)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_ISDEFAULTFTCONTEXT_OFFSET UNITYSDK_OFFSET(0x1CD62D30)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_ISFLOWSUPPRESSED_OFFSET UNITYSDK_OFFSET(0x1CD63540)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_ONASYNCLOCALCONTEXTCHANGED_OFFSET UNITYSDK_OFFSET(0x1CD62150)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_RESTOREFLOW_OFFSET UNITYSDK_OFFSET(0x1CD635F0)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_RUNINTERNAL_OFFSET UNITYSDK_OFFSET(0x1CD62940)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_RUN_1_OFFSET UNITYSDK_OFFSET(0x1CD628D0)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_RUN_OFFSET UNITYSDK_OFFSET(0x1CD627A0)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_SETEXECUTIONCONTEXT_OFFSET UNITYSDK_OFFSET(0x1CD62E00)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_SETLOCALVALUE_OFFSET UNITYSDK_OFFSET(0x1CD61CE0)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_SET_ISFLOWSUPPRESSED_OFFSET UNITYSDK_OFFSET(0x1CD61CA0)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_SET_ISNEWCAPTURE_OFFSET UNITYSDK_OFFSET(0x1CD61C80)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_SUPPRESSFLOW_OFFSET UNITYSDK_OFFSET(0x1CD633D0)
#define SYSTEM_THREADING_EXECUTIONCONTEXT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD63DA0)
#define SYSTEM_THREADING_EXECUTIONCONTEXT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CD61CD0)
#define SYSTEM_THREADING_EXECUTIONCONTEXT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1CD63C10)
#define SYSTEM_THREADING_EXECUTIONCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD61CC0)

namespace System::Threading
{
	inline static constexpr unsigned int ExecutionContext_TypeDefinitionIndex = 817;

	class ExecutionContext : public ::System::Object
	{
	public:
		static ::System::Threading::ExecutionContext** StaticGet_s_dummyDefaultEC()
		{
			return (::System::Threading::ExecutionContext**)Il2CppClass::FromTypeDefinitionIndex(ExecutionContext_TypeDefinitionIndex)->GetStaticField(0x780);
		}
		::System::Runtime::Remoting::Messaging::IllogicalCallContext* _illogicalCallContext; // 0x10
		::System::Runtime::Remoting::Messaging::LogicalCallContext* _logicalCallContext; // 0x18
		::System::Collections::Generic::List_1<::System::Threading::IAsyncLocal*>* _localChangeNotifications; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Threading::IAsyncLocal*, ::System::Object*>* _localValues; // 0x28
		::System::Threading::SynchronizationContext* _syncContextNoFlow; // 0x30
		::System::Threading::SynchronizationContext* _syncContext; // 0x38
		::System::Threading::ExecutionContext_Flags _flags; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Boolean isPreAllocatedDefault)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT__CTOR_1_OFFSET))(this, isPreAllocatedDefault);
		}

		::System::Void _ctor_2(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT__CTOR_2_OFFSET))(this, info, context);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT__CCTOR_OFFSET))();
		}

		::System::Boolean get_isNewCapture()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_GET_ISNEWCAPTURE_OFFSET))(this);
		}

		::System::Void set_isNewCapture(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_SET_ISNEWCAPTURE_OFFSET))(this, value);
		}

		::System::Boolean get_isFlowSuppressed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_GET_ISFLOWSUPPRESSED_OFFSET))(this);
		}

		::System::Void set_isFlowSuppressed(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_SET_ISFLOWSUPPRESSED_OFFSET))(this, value);
		}

		::System::Boolean get_IsPreAllocatedDefault()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_GET_ISPREALLOCATEDDEFAULT_OFFSET))(this);
		}

		static ::System::Void SetLocalValue(::System::Threading::IAsyncLocal* local, ::System::Object* newValue, ::System::Boolean needChangeNotifications)
		{
			return ((::System::Void(*)(::System::Threading::IAsyncLocal*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_SETLOCALVALUE_OFFSET))(local, newValue, needChangeNotifications);
		}

		static ::System::Void OnAsyncLocalContextChanged(::System::Threading::ExecutionContext* previous, ::System::Threading::ExecutionContext* current)
		{
			return ((::System::Void(*)(::System::Threading::ExecutionContext*, ::System::Threading::ExecutionContext*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_ONASYNCLOCALCONTEXTCHANGED_OFFSET))(previous, current);
		}

		::System::Runtime::Remoting::Messaging::LogicalCallContext* get_LogicalCallContext()
		{
			return ((::System::Runtime::Remoting::Messaging::LogicalCallContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_GET_LOGICALCALLCONTEXT_OFFSET))(this);
		}

		::System::Runtime::Remoting::Messaging::IllogicalCallContext* get_IllogicalCallContext()
		{
			return ((::System::Runtime::Remoting::Messaging::IllogicalCallContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_GET_ILLOGICALCALLCONTEXT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_DISPOSE_OFFSET))(this);
		}

		static ::System::Void Run(::System::Threading::ExecutionContext* executionContext, ::System::Threading::ContextCallback* callback, ::System::Object* state)
		{
			return ((::System::Void(*)(::System::Threading::ExecutionContext*, ::System::Threading::ContextCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_RUN_OFFSET))(executionContext, callback, state);
		}

		static ::System::Void Run_1(::System::Threading::ExecutionContext* executionContext, ::System::Threading::ContextCallback* callback, ::System::Object* state, ::System::Boolean preserveSyncCtx)
		{
			return ((::System::Void(*)(::System::Threading::ExecutionContext*, ::System::Threading::ContextCallback*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_RUN_1_OFFSET))(executionContext, callback, state, preserveSyncCtx);
		}

		static ::System::Void RunInternal(::System::Threading::ExecutionContext* executionContext, ::System::Threading::ContextCallback* callback, ::System::Object* state, ::System::Boolean preserveSyncCtx)
		{
			return ((::System::Void(*)(::System::Threading::ExecutionContext*, ::System::Threading::ContextCallback*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_RUNINTERNAL_OFFSET))(executionContext, callback, state, preserveSyncCtx);
		}

		static ::System::Void EstablishCopyOnWriteScope(::System::Threading::ExecutionContextSwitcher& ecsw)
		{
			return ((::System::Void(*)(::System::Threading::ExecutionContextSwitcher&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_ESTABLISHCOPYONWRITESCOPE_OFFSET))(ecsw);
		}

		static ::System::Void EstablishCopyOnWriteScope_1(::System::Threading::Thread* currentThread, ::System::Boolean knownNullWindowsIdentity, ::System::Threading::ExecutionContextSwitcher& ecsw)
		{
			return ((::System::Void(*)(::System::Threading::Thread*, ::System::Boolean, ::System::Threading::ExecutionContextSwitcher&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_ESTABLISHCOPYONWRITESCOPE_1_OFFSET))(currentThread, knownNullWindowsIdentity, ecsw);
		}

		static ::System::Threading::ExecutionContextSwitcher SetExecutionContext(::System::Threading::ExecutionContext* executionContext, ::System::Boolean preserveSyncCtx)
		{
			return ((::System::Threading::ExecutionContextSwitcher(*)(::System::Threading::ExecutionContext*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_SETEXECUTIONCONTEXT_OFFSET))(executionContext, preserveSyncCtx);
		}

		::System::Threading::ExecutionContext* CreateCopy()
		{
			return ((::System::Threading::ExecutionContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_CREATECOPY_OFFSET))(this);
		}

		::System::Threading::ExecutionContext* CreateMutableCopy()
		{
			return ((::System::Threading::ExecutionContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_CREATEMUTABLECOPY_OFFSET))(this);
		}

		static ::System::Threading::AsyncFlowControl SuppressFlow()
		{
			return ((::System::Threading::AsyncFlowControl(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_SUPPRESSFLOW_OFFSET))();
		}

		static ::System::Void RestoreFlow()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_RESTOREFLOW_OFFSET))();
		}

		static ::System::Boolean IsFlowSuppressed()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_ISFLOWSUPPRESSED_OFFSET))();
		}

		static ::System::Threading::ExecutionContext* Capture()
		{
			return ((::System::Threading::ExecutionContext*(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_CAPTURE_OFFSET))();
		}

		static ::System::Threading::ExecutionContext* FastCapture()
		{
			return ((::System::Threading::ExecutionContext*(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_FASTCAPTURE_OFFSET))();
		}

		static ::System::Threading::ExecutionContext* Capture_1(::System::Threading::StackCrawlMark& stackMark, ::System::Threading::ExecutionContext_CaptureOptions options)
		{
			return ((::System::Threading::ExecutionContext*(*)(::System::Threading::StackCrawlMark&, ::System::Threading::ExecutionContext_CaptureOptions))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_CAPTURE_1_OFFSET))(stackMark, options);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_GETOBJECTDATA_OFFSET))(this, info, context);
		}

		::System::Boolean IsDefaultFTContext(::System::Boolean ignoreSyncCtx)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_ISDEFAULTFTCONTEXT_OFFSET))(this, ignoreSyncCtx);
		}
	};
}
