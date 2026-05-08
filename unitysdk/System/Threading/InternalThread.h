#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/ConstrainedExecution/CriticalFinalizerObject.h"
#include "unitysdk/System/Threading/ThreadState.h"

namespace System { class Object; }

#define SYSTEM_THREADING_INTERNALTHREAD_FINALIZE_OFFSET UNITYSDK_OFFSET(0x18BB2DC0)
#define SYSTEM_THREADING_INTERNALTHREAD_THREAD_FREE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x18BB2D10)
#define SYSTEM_THREADING_INTERNALTHREAD__CTOR_OFFSET UNITYSDK_OFFSET(0x18BB2EB0)

namespace System::Threading
{
	inline static constexpr unsigned int InternalThread_TypeDefinitionIndex = 864;

	class InternalThread : public ::System::Runtime::ConstrainedExecution::CriticalFinalizerObject
	{
	public:
		::System::Int32 lock_thread_id; // 0x10
		::System::IntPtr handle; // 0x18
		::System::IntPtr native_handle; // 0x20
		::System::IntPtr unused3; // 0x28
		::System::IntPtr name; // 0x30
		::System::Int32 name_len; // 0x38
		::System::Threading::ThreadState state; // 0x3C
		::System::Object* abort_exc; // 0x40
		::System::Int32 abort_state_handle; // 0x48
		::System::Int64 thread_id; // 0x50
		::System::IntPtr debugger_thread; // 0x58
		::System::UIntPtr static_data; // 0x60
		::System::IntPtr runtime_thread_info; // 0x68
		::System::Object* current_appcontext; // 0x70
		::System::Object* root_domain_thread; // 0x78
		::Il2CppArray<::System::Byte>* _serialized_principal; // 0x80
		::System::Int32 _serialized_principal_version; // 0x88
		::System::IntPtr appdomain_refs; // 0x90
		::System::Int32 interruption_requested; // 0x98
		::System::IntPtr synch_cs; // 0xA0
		::System::Boolean threadpool_thread; // 0xA8
		::System::Boolean thread_interrupt_requested; // 0xA9
		::System::Int32 stack_size; // 0xAC
		::System::Byte apartment_state; // 0xB0
		::System::Int32 critical_region_level; // 0xB4
		::System::Int32 managed_id; // 0xB8
		::System::Int32 small_id; // 0xBC
		::System::IntPtr manage_callback; // 0xC0
		::System::IntPtr unused4; // 0xC8
		::System::IntPtr flags; // 0xD0
		::System::IntPtr thread_pinning_ref; // 0xD8
		::System::IntPtr abort_protected_block_count; // 0xE0
		::System::Int32 priority; // 0xE8
		::System::IntPtr owned_mutex; // 0xF0
		::System::IntPtr suspended_event; // 0xF8
		::System::Int32 self_suspended; // 0x100
		::System::IntPtr unused1; // 0x108
		::System::IntPtr unused2; // 0x110
		::System::IntPtr last; // 0x118

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_INTERNALTHREAD__CTOR_OFFSET))(this);
		}

		::System::Void Thread_free_internal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_INTERNALTHREAD_THREAD_FREE_INTERNAL_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_INTERNALTHREAD_FINALIZE_OFFSET))(this);
		}
	};
}
