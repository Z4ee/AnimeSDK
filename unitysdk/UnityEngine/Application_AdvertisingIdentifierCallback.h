#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_APPLICATION_ADVERTISINGIDENTIFIERCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x189EFFA0)
#define UNITYENGINE_APPLICATION_ADVERTISINGIDENTIFIERCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x189F0010)
#define UNITYENGINE_APPLICATION_ADVERTISINGIDENTIFIERCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x189EDA40)
#define UNITYENGINE_APPLICATION_ADVERTISINGIDENTIFIERCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x189EFF80)

namespace UnityEngine
{
	inline static constexpr unsigned int Application_AdvertisingIdentifierCallback_TypeDefinitionIndex = 3838;

	class Application_AdvertisingIdentifierCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_ADVERTISINGIDENTIFIERCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::String* advertisingId, ::System::Boolean trackingEnabled, ::System::String* errorMsg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_ADVERTISINGIDENTIFIERCALLBACK_INVOKE_OFFSET))(this, advertisingId, trackingEnabled, errorMsg);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* advertisingId, ::System::Boolean trackingEnabled, ::System::String* errorMsg, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_ADVERTISINGIDENTIFIERCALLBACK_BEGININVOKE_OFFSET))(this, advertisingId, trackingEnabled, errorMsg, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_ADVERTISINGIDENTIFIERCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
