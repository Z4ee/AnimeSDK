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

#define SYSTEM_THREADING_EXECUTIONCONTEXT_CAPTURE_1_OFFSET UNITYSDK_OFFSET(0x1B3DF860)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_CAPTURE_OFFSET UNITYSDK_OFFSET(0x1B3E4CD0)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_CREATECOPY_OFFSET UNITYSDK_OFFSET(0x1B3E4850)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_CREATEMUTABLECOPY_OFFSET UNITYSDK_OFFSET(0x1B3E4980)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B3E3D30)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_ESTABLISHCOPYONWRITESCOPE_1_OFFSET UNITYSDK_OFFSET(0x1B3E44C0)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_ESTABLISHCOPYONWRITESCOPE_OFFSET UNITYSDK_OFFSET(0x1B3E46E0)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_FASTCAPTURE_OFFSET UNITYSDK_OFFSET(0x1B3E4D00)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_GETLOCALVALUE_OFFSET UNITYSDK_OFFSET(0x1B3E2FB0)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1B3E4D80)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_GET_ILLOGICALCALLCONTEXT_OFFSET UNITYSDK_OFFSET(0x1B3E3C90)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_GET_ISFLOWSUPPRESSED_OFFSET UNITYSDK_OFFSET(0x1B3E2F40)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_GET_ISNEWCAPTURE_OFFSET UNITYSDK_OFFSET(0x1B3E2F20)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_GET_ISPREALLOCATEDDEFAULT_OFFSET UNITYSDK_OFFSET(0x1B3E2F80)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_GET_LOGICALCALLCONTEXT_OFFSET UNITYSDK_OFFSET(0x1B3E3C50)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_GET_PREALLOCATEDDEFAULT_OFFSET UNITYSDK_OFFSET(0x1B3E2F50)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_GET_SYNCHRONIZATIONCONTEXTNOFLOW_OFFSET UNITYSDK_OFFSET(0x1B3E3D10)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_GET_SYNCHRONIZATIONCONTEXT_OFFSET UNITYSDK_OFFSET(0x1B3E3CF0)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_ISDEFAULTFTCONTEXT_OFFSET UNITYSDK_OFFSET(0x1B3E4330)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_ISFLOWSUPPRESSED_OFFSET UNITYSDK_OFFSET(0x1B3E4C40)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_ONASYNCLOCALCONTEXTCHANGED_OFFSET UNITYSDK_OFFSET(0x1B3E35D0)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_RESTOREFLOW_OFFSET UNITYSDK_OFFSET(0x1B3DECB0)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_RUNINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B3E3D90)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_RUN_1_OFFSET UNITYSDK_OFFSET(0x1B3E3D40)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_RUN_OFFSET UNITYSDK_OFFSET(0x1B3DF250)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_SETEXECUTIONCONTEXT_OFFSET UNITYSDK_OFFSET(0x1B3E44F0)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_SETLOCALVALUE_OFFSET UNITYSDK_OFFSET(0x1B3E3110)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_SET_ILLOGICALCALLCONTEXT_OFFSET UNITYSDK_OFFSET(0x1B3E3CE0)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_SET_ISFLOWSUPPRESSED_OFFSET UNITYSDK_OFFSET(0x1B3DEA80)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_SET_ISNEWCAPTURE_OFFSET UNITYSDK_OFFSET(0x1B3E2F30)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_SET_LOGICALCALLCONTEXT_OFFSET UNITYSDK_OFFSET(0x1B3E3C80)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_SET_SYNCHRONIZATIONCONTEXTNOFLOW_OFFSET UNITYSDK_OFFSET(0x1B3E3D20)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_SET_SYNCHRONIZATIONCONTEXT_OFFSET UNITYSDK_OFFSET(0x1B3E3D00)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_SUPPRESSFLOW_OFFSET UNITYSDK_OFFSET(0x1B3E4A70)
#define SYSTEM_THREADING_EXECUTIONCONTEXT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B3E4FA0)
#define SYSTEM_THREADING_EXECUTIONCONTEXT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B3E2FA0)
#define SYSTEM_THREADING_EXECUTIONCONTEXT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1B3E4E30)
#define SYSTEM_THREADING_EXECUTIONCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3E2F90)

namespace System::Threading
{
	inline static constexpr unsigned int ExecutionContext_TypeDefinitionIndex = 831;

	class ExecutionContext : public ::System::Object
	{
	public:
		static ::System::Threading::ExecutionContext** StaticGet_s_dummyDefaultEC()
		{
			return (::System::Threading::ExecutionContext**)Il2CppClass::FromTypeDefinitionIndex(ExecutionContext_TypeDefinitionIndex)->GetStaticField(0x13D40);
		}
		::System::Threading::SynchronizationContext* _syncContextNoFlow; // 0x10
		::System::Runtime::Remoting::Messaging::LogicalCallContext* _logicalCallContext; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Threading::IAsyncLocal*, ::System::Object*>* _localValues; // 0x20
		::System::Threading::SynchronizationContext* _syncContext; // 0x28
		::System::Collections::Generic::List_1<::System::Threading::IAsyncLocal*>* _localChangeNotifications; // 0x30
		::System::Runtime::Remoting::Messaging::IllogicalCallContext* _illogicalCallContext; // 0x38
		::System::Threading::ExecutionContext_Flags _flags; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT__CTOR_2_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT__CCTOR_OFFSET))();
		}

		::System::Boolean get_isNewCapture()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_GET_ISNEWCAPTURE_OFFSET))(this);
		}

		::System::Void set_isNewCapture(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_SET_ISNEWCAPTURE_OFFSET))(this, a1);
		}

		::System::Boolean get_isFlowSuppressed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_GET_ISFLOWSUPPRESSED_OFFSET))(this);
		}

		::System::Void set_isFlowSuppressed(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_SET_ISFLOWSUPPRESSED_OFFSET))(this, a1);
		}

		static ::System::Threading::ExecutionContext* get_PreAllocatedDefault()
		{
			return ((::System::Threading::ExecutionContext*(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_GET_PREALLOCATEDDEFAULT_OFFSET))();
		}

		::System::Boolean get_IsPreAllocatedDefault()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_GET_ISPREALLOCATEDDEFAULT_OFFSET))(this);
		}

		static ::System::Object* GetLocalValue(::System::Threading::IAsyncLocal* a1)
		{
			return ((::System::Object*(*)(::System::Threading::IAsyncLocal*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_GETLOCALVALUE_OFFSET))(a1);
		}

		static ::System::Void SetLocalValue(::System::Threading::IAsyncLocal* a1, ::System::Object* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::Threading::IAsyncLocal*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_SETLOCALVALUE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void OnAsyncLocalContextChanged(::System::Threading::ExecutionContext* a1, ::System::Threading::ExecutionContext* a2)
		{
			return ((::System::Void(*)(::System::Threading::ExecutionContext*, ::System::Threading::ExecutionContext*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_ONASYNCLOCALCONTEXTCHANGED_OFFSET))(a1, a2);
		}

		::System::Runtime::Remoting::Messaging::LogicalCallContext* get_LogicalCallContext()
		{
			return ((::System::Runtime::Remoting::Messaging::LogicalCallContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_GET_LOGICALCALLCONTEXT_OFFSET))(this);
		}

		::System::Void set_LogicalCallContext(::System::Runtime::Remoting::Messaging::LogicalCallContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::Messaging::LogicalCallContext*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_SET_LOGICALCALLCONTEXT_OFFSET))(this, a1);
		}

		::System::Runtime::Remoting::Messaging::IllogicalCallContext* get_IllogicalCallContext()
		{
			return ((::System::Runtime::Remoting::Messaging::IllogicalCallContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_GET_ILLOGICALCALLCONTEXT_OFFSET))(this);
		}

		::System::Void set_IllogicalCallContext(::System::Runtime::Remoting::Messaging::IllogicalCallContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IllogicalCallContext*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_SET_ILLOGICALCALLCONTEXT_OFFSET))(this, a1);
		}

		::System::Threading::SynchronizationContext* get_SynchronizationContext()
		{
			return ((::System::Threading::SynchronizationContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_GET_SYNCHRONIZATIONCONTEXT_OFFSET))(this);
		}

		::System::Void set_SynchronizationContext(::System::Threading::SynchronizationContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::SynchronizationContext*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_SET_SYNCHRONIZATIONCONTEXT_OFFSET))(this, a1);
		}

		::System::Threading::SynchronizationContext* get_SynchronizationContextNoFlow()
		{
			return ((::System::Threading::SynchronizationContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_GET_SYNCHRONIZATIONCONTEXTNOFLOW_OFFSET))(this);
		}

		::System::Void set_SynchronizationContextNoFlow(::System::Threading::SynchronizationContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::SynchronizationContext*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_SET_SYNCHRONIZATIONCONTEXTNOFLOW_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_DISPOSE_OFFSET))(this);
		}

		static ::System::Void Run(::System::Threading::ExecutionContext* a1, ::System::Threading::ContextCallback* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::System::Threading::ExecutionContext*, ::System::Threading::ContextCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_RUN_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Run_1(::System::Threading::ExecutionContext* a1, ::System::Threading::ContextCallback* a2, ::System::Object* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::System::Threading::ExecutionContext*, ::System::Threading::ContextCallback*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_RUN_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void RunInternal(::System::Threading::ExecutionContext* a1, ::System::Threading::ContextCallback* a2, ::System::Object* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::System::Threading::ExecutionContext*, ::System::Threading::ContextCallback*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_RUNINTERNAL_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void EstablishCopyOnWriteScope(::System::Threading::ExecutionContextSwitcher& a1)
		{
			return ((::System::Void(*)(::System::Threading::ExecutionContextSwitcher&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_ESTABLISHCOPYONWRITESCOPE_OFFSET))(a1);
		}

		static ::System::Void EstablishCopyOnWriteScope_1(::System::Threading::Thread* a1, ::System::Boolean a2, ::System::Threading::ExecutionContextSwitcher& a3)
		{
			return ((::System::Void(*)(::System::Threading::Thread*, ::System::Boolean, ::System::Threading::ExecutionContextSwitcher&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_ESTABLISHCOPYONWRITESCOPE_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Threading::ExecutionContextSwitcher SetExecutionContext(::System::Threading::ExecutionContext* a1, ::System::Boolean a2)
		{
			return ((::System::Threading::ExecutionContextSwitcher(*)(::System::Threading::ExecutionContext*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_SETEXECUTIONCONTEXT_OFFSET))(a1, a2);
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

		static ::System::Threading::ExecutionContext* Capture_1(::System::Threading::StackCrawlMark& a1, ::System::Threading::ExecutionContext_CaptureOptions a2)
		{
			return ((::System::Threading::ExecutionContext*(*)(::System::Threading::StackCrawlMark&, ::System::Threading::ExecutionContext_CaptureOptions))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_CAPTURE_1_OFFSET))(a1, a2);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsDefaultFTContext(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_ISDEFAULTFTCONTEXT_OFFSET))(this, a1);
		}
	};
}
