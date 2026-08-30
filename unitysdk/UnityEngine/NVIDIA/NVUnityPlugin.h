#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define UNITYENGINE_NVIDIA_NVUNITYPLUGIN_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1EFF9090)
#define UNITYENGINE_NVIDIA_NVUNITYPLUGIN_ISLOADED_OFFSET UNITYSDK_OFFSET(0x1EFF9080)

namespace UnityEngine::NVIDIA
{
	inline static constexpr unsigned int NVUnityPlugin_TypeDefinitionIndex = 5013;

	class NVUnityPlugin : public ::System::Object
	{
	public:
		static ::System::Boolean IsLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_NVUNITYPLUGIN_ISLOADED_OFFSET))();
		}

		static ::System::Void Initialize(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_NVUNITYPLUGIN_INITIALIZE_OFFSET))(a1);
		}
	};
}
