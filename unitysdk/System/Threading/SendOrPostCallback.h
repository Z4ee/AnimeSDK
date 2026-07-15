#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SYSTEM_THREADING_SENDORPOSTCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x19988B20)
#define SYSTEM_THREADING_SENDORPOSTCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x19988B50)
#define SYSTEM_THREADING_SENDORPOSTCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x199855A0)
#define SYSTEM_THREADING_SENDORPOSTCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x19988A30)

namespace System::Threading
{
	inline static constexpr unsigned int SendOrPostCallback_TypeDefinitionIndex = 836;

	class SendOrPostCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SENDORPOSTCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SENDORPOSTCALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SENDORPOSTCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SENDORPOSTCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
