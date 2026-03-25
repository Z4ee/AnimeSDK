#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_AUDIOCLIP_PCMREADERCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x189E1930)
#define UNITYENGINE_AUDIOCLIP_PCMREADERCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x189E1960)
#define UNITYENGINE_AUDIOCLIP_PCMREADERCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x189E10C0)
#define UNITYENGINE_AUDIOCLIP_PCMREADERCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x189E1910)

namespace UnityEngine
{
	inline static constexpr unsigned int AudioClip_PCMReaderCallback_TypeDefinitionIndex = 5086;

	class AudioClip_PCMReaderCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_PCMREADERCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Il2CppArray<::System::Single>* data)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_PCMREADERCALLBACK_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Il2CppArray<::System::Single>* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Single>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_PCMREADERCALLBACK_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_PCMREADERCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
