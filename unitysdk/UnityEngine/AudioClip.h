#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"

namespace UnityEngine { class AudioClip_PCMReaderCallback; }
namespace UnityEngine { class AudioClip_PCMSetPositionCallback; }

#define UNITYENGINE_AUDIOCLIP_GET_FREQUENCY_OFFSET UNITYSDK_OFFSET(0x189E10A0)
#define UNITYENGINE_AUDIOCLIP_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x189E0020)
#define UNITYENGINE_AUDIOCLIP_GET_SAMPLES_OFFSET UNITYSDK_OFFSET(0x189E1090)
#define UNITYENGINE_AUDIOCLIP_INVOKEPCMREADERCALLBACK_INTERNAL_OFFSET UNITYSDK_OFFSET(0x189E10B0)
#define UNITYENGINE_AUDIOCLIP_INVOKEPCMSETPOSITIONCALLBACK_INTERNAL_OFFSET UNITYSDK_OFFSET(0x189E1610)

namespace UnityEngine
{
	inline static constexpr unsigned int AudioClip_TypeDefinitionIndex = 5085;

	class AudioClip : public ::UnityEngine::Object
	{
	public:
		::UnityEngine::AudioClip_PCMReaderCallback* m_PCMReaderCallback; // 0x18
		::UnityEngine::AudioClip_PCMSetPositionCallback* m_PCMSetPositionCallback; // 0x20

		::System::Single get_length()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_GET_LENGTH_OFFSET))(this);
		}

		::System::Int32 get_samples()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_GET_SAMPLES_OFFSET))(this);
		}

		::System::Int32 get_frequency()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_GET_FREQUENCY_OFFSET))(this);
		}

		::System::Void InvokePCMReaderCallback_Internal(::Il2CppArray<::System::Single>* data)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_INVOKEPCMREADERCALLBACK_INTERNAL_OFFSET))(this, data);
		}

		::System::Void InvokePCMSetPositionCallback_Internal(::System::Int32 position)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_INVOKEPCMSETPOSITIONCALLBACK_INTERNAL_OFFSET))(this, position);
		}
	};
}
