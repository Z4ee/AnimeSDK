#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SYSTEM_THREADING_OSSPECIFICSYNCHRONIZATIONCONTEXT_INVOCATIONENTRYDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x16238150)
#define SYSTEM_THREADING_OSSPECIFICSYNCHRONIZATIONCONTEXT_INVOCATIONENTRYDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x162381A0)
#define SYSTEM_THREADING_OSSPECIFICSYNCHRONIZATIONCONTEXT_INVOCATIONENTRYDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x16237E60)
#define SYSTEM_THREADING_OSSPECIFICSYNCHRONIZATIONCONTEXT_INVOCATIONENTRYDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x162377D0)

namespace System::Threading
{
	inline static constexpr unsigned int OSSpecificSynchronizationContext_InvocationEntryDelegate_TypeDefinitionIndex = 839;

	class OSSpecificSynchronizationContext_InvocationEntryDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_OSSPECIFICSYNCHRONIZATIONCONTEXT_INVOCATIONENTRYDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::IntPtr arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_OSSPECIFICSYNCHRONIZATIONCONTEXT_INVOCATIONENTRYDELEGATE_INVOKE_OFFSET))(this, arg);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr arg, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_OSSPECIFICSYNCHRONIZATIONCONTEXT_INVOCATIONENTRYDELEGATE_BEGININVOKE_OFFSET))(this, arg, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_OSSPECIFICSYNCHRONIZATIONCONTEXT_INVOCATIONENTRYDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
