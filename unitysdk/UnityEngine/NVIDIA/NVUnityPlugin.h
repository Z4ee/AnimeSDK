#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define UNITYENGINE_NVIDIA_NVUNITYPLUGIN_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1A4C92B0)
#define UNITYENGINE_NVIDIA_NVUNITYPLUGIN_ISLOADED_OFFSET UNITYSDK_OFFSET(0x1A4C92A0)

namespace UnityEngine::NVIDIA
{
	inline static constexpr unsigned int NVUnityPlugin_TypeDefinitionIndex = 5171;

	class NVUnityPlugin : public ::System::Object
	{
	public:
		static ::System::Boolean IsLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_NVUNITYPLUGIN_ISLOADED_OFFSET))();
		}

		static ::System::Void Initialize(::System::String* pluginsFolder)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_NVUNITYPLUGIN_INITIALIZE_OFFSET))(pluginsFolder);
		}
	};
}
