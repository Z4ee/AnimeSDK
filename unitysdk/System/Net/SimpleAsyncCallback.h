#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Net { class SimpleAsyncResult; }

#define SYSTEM_NET_SIMPLEASYNCCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D476550)
#define SYSTEM_NET_SIMPLEASYNCCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D476580)
#define SYSTEM_NET_SIMPLEASYNCCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D476030)
#define SYSTEM_NET_SIMPLEASYNCCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D476010)

namespace System::Net
{
	inline static constexpr unsigned int SimpleAsyncCallback_TypeDefinitionIndex = 3556;

	class SimpleAsyncCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_NET_SIMPLEASYNCCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Net::SimpleAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::SimpleAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SIMPLEASYNCCALLBACK_INVOKE_OFFSET))(this, result);
		}

		::System::IAsyncResult* BeginInvoke(::System::Net::SimpleAsyncResult* result, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Net::SimpleAsyncResult*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SIMPLEASYNCCALLBACK_BEGININVOKE_OFFSET))(this, result, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SIMPLEASYNCCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
