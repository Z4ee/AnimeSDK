#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/SimpRTXSceneResources.h"

#define UNITYENGINE_SIMPRTXGI_SETENABLED_OFFSET UNITYSDK_OFFSET(0x1F42D0E0)
#define UNITYENGINE_SIMPRTXGI_SETSCENERESOURCES_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F42D100)
#define UNITYENGINE_SIMPRTXGI_SETSCENERESOURCES_OFFSET UNITYSDK_OFFSET(0x1F42D0F0)

namespace UnityEngine
{
	inline static constexpr unsigned int SimpRTXGI_TypeDefinitionIndex = 4271;

	class SimpRTXGI : public ::System::Object
	{
	public:
		static ::System::Void SetEnabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_SIMPRTXGI_SETENABLED_OFFSET))(a1);
		}

		static ::System::Void SetSceneResources(::UnityEngine::Rendering::SimpRTXSceneResources a1)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::SimpRTXSceneResources))((::PBYTE)hIl2Cpp + UNITYENGINE_SIMPRTXGI_SETSCENERESOURCES_OFFSET))(a1);
		}

		static ::System::Void SetSceneResources_Injected(::UnityEngine::Rendering::SimpRTXSceneResources& a1)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::SimpRTXSceneResources&))((::PBYTE)hIl2Cpp + UNITYENGINE_SIMPRTXGI_SETSCENERESOURCES_INJECTED_OFFSET))(a1);
		}
	};
}
