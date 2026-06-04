#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_APPLICATION_ADVERTISINGIDENTIFIERCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B27BD90)
#define UNITYENGINE_APPLICATION_ADVERTISINGIDENTIFIERCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B27BE00)
#define UNITYENGINE_APPLICATION_ADVERTISINGIDENTIFIERCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B279BE0)
#define UNITYENGINE_APPLICATION_ADVERTISINGIDENTIFIERCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B27BD10)

namespace UnityEngine
{
	inline static constexpr unsigned int Application_AdvertisingIdentifierCallback_TypeDefinitionIndex = 4014;

	class Application_AdvertisingIdentifierCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_ADVERTISINGIDENTIFIERCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::String* a1, ::System::Boolean a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_ADVERTISINGIDENTIFIERCALLBACK_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* a1, ::System::Boolean a2, ::System::String* a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_ADVERTISINGIDENTIFIERCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_ADVERTISINGIDENTIFIERCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
