#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_REMOTESETTINGS_UPDATEDEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1E8686A0)
#define UNITYENGINE_REMOTESETTINGS_UPDATEDEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1E8686D0)
#define UNITYENGINE_REMOTESETTINGS_UPDATEDEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E868340)
#define UNITYENGINE_REMOTESETTINGS_UPDATEDEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E868680)

namespace UnityEngine
{
	inline static constexpr unsigned int RemoteSettings_UpdatedEventHandler_TypeDefinitionIndex = 89799;

	class RemoteSettings_UpdatedEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_REMOTESETTINGS_UPDATEDEVENTHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_REMOTESETTINGS_UPDATEDEVENTHANDLER_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_REMOTESETTINGS_UPDATEDEVENTHANDLER_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_REMOTESETTINGS_UPDATEDEVENTHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
