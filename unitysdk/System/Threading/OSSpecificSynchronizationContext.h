#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/SynchronizationContext.h"

namespace System { class Object; }
namespace System::Runtime::CompilerServices { template <typename T1, typename T2> class ConditionalWeakTable_2; }
namespace System::Threading { class SendOrPostCallback; }

#define SYSTEM_THREADING_OSSPECIFICSYNCHRONIZATIONCONTEXT_CREATECOPY_OFFSET UNITYSDK_OFFSET(0x1D0687C0)
#define SYSTEM_THREADING_OSSPECIFICSYNCHRONIZATIONCONTEXT_GETOSCONTEXT_OFFSET UNITYSDK_OFFSET(0x1D0687B0)
#define SYSTEM_THREADING_OSSPECIFICSYNCHRONIZATIONCONTEXT_GET_OFFSET UNITYSDK_OFFSET(0x1D068750)
#define SYSTEM_THREADING_OSSPECIFICSYNCHRONIZATIONCONTEXT_INVOCATIONENTRY_OFFSET UNITYSDK_OFFSET(0x1D0684F0)
#define SYSTEM_THREADING_OSSPECIFICSYNCHRONIZATIONCONTEXT_POSTINTERNAL_OFFSET UNITYSDK_OFFSET(0x1D068900)
#define SYSTEM_THREADING_OSSPECIFICSYNCHRONIZATIONCONTEXT_POST_OFFSET UNITYSDK_OFFSET(0x1D068850)
#define SYSTEM_THREADING_OSSPECIFICSYNCHRONIZATIONCONTEXT_SEND_OFFSET UNITYSDK_OFFSET(0x1D068800)
#define SYSTEM_THREADING_OSSPECIFICSYNCHRONIZATIONCONTEXT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D068910)
#define SYSTEM_THREADING_OSSPECIFICSYNCHRONIZATIONCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D068740)

namespace System::Threading
{
	inline static constexpr unsigned int OSSpecificSynchronizationContext_TypeDefinitionIndex = 829;

	class OSSpecificSynchronizationContext : public ::System::Threading::SynchronizationContext
	{
	public:
		static ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Threading::OSSpecificSynchronizationContext*>** StaticGet_s_ContextCache()
		{
			return (::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Threading::OSSpecificSynchronizationContext*>**)Il2CppClass::FromTypeDefinitionIndex(OSSpecificSynchronizationContext_TypeDefinitionIndex)->GetStaticField(0x1470);
		}
		::System::Object* m_OSSynchronizationContext; // 0x18

		::System::Void _ctor(::System::Object* osContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_OSSPECIFICSYNCHRONIZATIONCONTEXT__CTOR_OFFSET))(this, osContext);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_OSSPECIFICSYNCHRONIZATIONCONTEXT__CCTOR_OFFSET))();
		}

		static ::System::Threading::OSSpecificSynchronizationContext* Get()
		{
			return ((::System::Threading::OSSpecificSynchronizationContext*(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_OSSPECIFICSYNCHRONIZATIONCONTEXT_GET_OFFSET))();
		}

		::System::Threading::SynchronizationContext* CreateCopy()
		{
			return ((::System::Threading::SynchronizationContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_OSSPECIFICSYNCHRONIZATIONCONTEXT_CREATECOPY_OFFSET))(this);
		}

		::System::Void Send(::System::Threading::SendOrPostCallback* d, ::System::Object* state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::SendOrPostCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_OSSPECIFICSYNCHRONIZATIONCONTEXT_SEND_OFFSET))(this, d, state);
		}

		::System::Void Post(::System::Threading::SendOrPostCallback* d, ::System::Object* state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::SendOrPostCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_OSSPECIFICSYNCHRONIZATIONCONTEXT_POST_OFFSET))(this, d, state);
		}

		static ::System::Void InvocationEntry(::System::IntPtr arg)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_OSSPECIFICSYNCHRONIZATIONCONTEXT_INVOCATIONENTRY_OFFSET))(arg);
		}

		static ::System::Object* GetOSContext()
		{
			return ((::System::Object*(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_OSSPECIFICSYNCHRONIZATIONCONTEXT_GETOSCONTEXT_OFFSET))();
		}

		static ::System::Void PostInternal(::System::Object* osSynchronizationContext, ::System::IntPtr callback, ::System::IntPtr arg)
		{
			return ((::System::Void(*)(::System::Object*, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_OSSPECIFICSYNCHRONIZATIONCONTEXT_POSTINTERNAL_OFFSET))(osSynchronizationContext, callback, arg);
		}
	};
}
