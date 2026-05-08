#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_AUDIOSETTINGS_AUDIOCONFIGURATIONCHANGEHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C25BAE0)
#define UNITYENGINE_AUDIOSETTINGS_AUDIOCONFIGURATIONCHANGEHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C25BB50)
#define UNITYENGINE_AUDIOSETTINGS_AUDIOCONFIGURATIONCHANGEHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C25B750)
#define UNITYENGINE_AUDIOSETTINGS_AUDIOCONFIGURATIONCHANGEHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C25BAD0)

namespace UnityEngine
{
	inline static constexpr unsigned int AudioSettings_AudioConfigurationChangeHandler_TypeDefinitionIndex = 9625;

	class AudioSettings_AudioConfigurationChangeHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSETTINGS_AUDIOCONFIGURATIONCHANGEHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Boolean deviceWasChanged)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSETTINGS_AUDIOCONFIGURATIONCHANGEHANDLER_INVOKE_OFFSET))(this, deviceWasChanged);
		}

		::System::IAsyncResult* BeginInvoke(::System::Boolean deviceWasChanged, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSETTINGS_AUDIOCONFIGURATIONCHANGEHANDLER_BEGININVOKE_OFFSET))(this, deviceWasChanged, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSETTINGS_AUDIOCONFIGURATIONCHANGEHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
