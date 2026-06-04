#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_AUDIOCLIP_PCMSETPOSITIONCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B26E440)
#define UNITYENGINE_AUDIOCLIP_PCMSETPOSITIONCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B26E490)
#define UNITYENGINE_AUDIOCLIP_PCMSETPOSITIONCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B26E310)
#define UNITYENGINE_AUDIOCLIP_PCMSETPOSITIONCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B26E3D0)

namespace UnityEngine
{
	inline static constexpr unsigned int AudioClip_PCMSetPositionCallback_TypeDefinitionIndex = 5189;

	class AudioClip_PCMSetPositionCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_PCMSETPOSITIONCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_PCMSETPOSITIONCALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_PCMSETPOSITIONCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_PCMSETPOSITIONCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
