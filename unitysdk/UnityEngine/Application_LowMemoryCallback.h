#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_APPLICATION_LOWMEMORYCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A429990)
#define UNITYENGINE_APPLICATION_LOWMEMORYCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A4299C0)
#define UNITYENGINE_APPLICATION_LOWMEMORYCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A426790)
#define UNITYENGINE_APPLICATION_LOWMEMORYCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A429970)

namespace UnityEngine
{
	inline static constexpr unsigned int Application_LowMemoryCallback_TypeDefinitionIndex = 3841;

	class Application_LowMemoryCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_LOWMEMORYCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_LOWMEMORYCALLBACK_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_LOWMEMORYCALLBACK_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_LOWMEMORYCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
