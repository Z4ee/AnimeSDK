#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_AUDIOSETTINGS_AUDIOCONFIGURATIONCHANGEHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1ECFB570)
#define UNITYENGINE_AUDIOSETTINGS_AUDIOCONFIGURATIONCHANGEHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1ECFB5C0)
#define UNITYENGINE_AUDIOSETTINGS_AUDIOCONFIGURATIONCHANGEHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1ECFB4F0)
#define UNITYENGINE_AUDIOSETTINGS_AUDIOCONFIGURATIONCHANGEHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1ECFB500)

namespace UnityEngine
{
	inline static constexpr unsigned int AudioSettings_AudioConfigurationChangeHandler_TypeDefinitionIndex = 5136;

	class AudioSettings_AudioConfigurationChangeHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSETTINGS_AUDIOCONFIGURATIONCHANGEHANDLER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSETTINGS_AUDIOCONFIGURATIONCHANGEHANDLER_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::Boolean a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSETTINGS_AUDIOCONFIGURATIONCHANGEHANDLER_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSETTINGS_AUDIOCONFIGURATIONCHANGEHANDLER_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
