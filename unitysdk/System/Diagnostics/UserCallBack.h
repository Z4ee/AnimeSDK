#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_DIAGNOSTICS_USERCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B403240)
#define SYSTEM_DIAGNOSTICS_USERCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B403270)
#define SYSTEM_DIAGNOSTICS_USERCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B402D40)
#define SYSTEM_DIAGNOSTICS_USERCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B402D20)

namespace System::Diagnostics
{
	inline static constexpr unsigned int UserCallBack_TypeDefinitionIndex = 2776;

	class UserCallBack : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_USERCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::String* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_USERCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_USERCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_USERCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
