#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_APPLICATION_LOWMEMORYCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1ED09DD0)
#define UNITYENGINE_APPLICATION_LOWMEMORYCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1ED09E00)
#define UNITYENGINE_APPLICATION_LOWMEMORYCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1ED075D0)
#define UNITYENGINE_APPLICATION_LOWMEMORYCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED09D60)

namespace UnityEngine
{
	inline static constexpr unsigned int Application_LowMemoryCallback_TypeDefinitionIndex = 4028;

	class Application_LowMemoryCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_LOWMEMORYCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_LOWMEMORYCALLBACK_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_LOWMEMORYCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_LOWMEMORYCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
