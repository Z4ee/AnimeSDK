#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_AUDIOCLIP_PCMSETPOSITIONCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1F999A40)
#define UNITYENGINE_AUDIOCLIP_PCMSETPOSITIONCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1F999AB0)
#define UNITYENGINE_AUDIOCLIP_PCMSETPOSITIONCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F9996C0)
#define UNITYENGINE_AUDIOCLIP_PCMSETPOSITIONCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1F999A20)

namespace UnityEngine
{
	inline static constexpr unsigned int AudioClip_PCMSetPositionCallback_TypeDefinitionIndex = 18761;

	class AudioClip_PCMSetPositionCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_PCMSETPOSITIONCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Int32 position)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_PCMSETPOSITIONCALLBACK_INVOKE_OFFSET))(this, position);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 position, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_PCMSETPOSITIONCALLBACK_BEGININVOKE_OFFSET))(this, position, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_PCMSETPOSITIONCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
