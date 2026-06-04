#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_AUDIOCLIP_PCMREADERCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B26E390)
#define UNITYENGINE_AUDIOCLIP_PCMREADERCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B26E3C0)
#define UNITYENGINE_AUDIOCLIP_PCMREADERCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B26E2E0)
#define UNITYENGINE_AUDIOCLIP_PCMREADERCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B26E320)

namespace UnityEngine
{
	inline static constexpr unsigned int AudioClip_PCMReaderCallback_TypeDefinitionIndex = 5188;

	class AudioClip_PCMReaderCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_PCMREADERCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Il2CppArray<::System::Single>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_PCMREADERCALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Il2CppArray<::System::Single>* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Single>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_PCMREADERCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_PCMREADERCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
