#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SYSTEM_THREADING_SENDORPOSTCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x178685B0)
#define SYSTEM_THREADING_SENDORPOSTCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x178685E0)
#define SYSTEM_THREADING_SENDORPOSTCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x17864110)
#define SYSTEM_THREADING_SENDORPOSTCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1785E880)

namespace System::Threading
{
	inline static constexpr unsigned int SendOrPostCallback_TypeDefinitionIndex = 837;

	class SendOrPostCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SENDORPOSTCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SENDORPOSTCALLBACK_INVOKE_OFFSET))(this, state);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* state, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SENDORPOSTCALLBACK_BEGININVOKE_OFFSET))(this, state, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SENDORPOSTCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
