#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/VisibleLight.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_VISIBLELIGHTEXTENSIONMETHODS_GETFORWARD_OFFSET UNITYSDK_OFFSET(0x1C5D2750)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_VISIBLELIGHTEXTENSIONMETHODS_GETPOSITION_OFFSET UNITYSDK_OFFSET(0x1C5D2640)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_VISIBLELIGHTEXTENSIONMETHODS_GETRIGHT_OFFSET UNITYSDK_OFFSET(0x1C5D2970)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_VISIBLELIGHTEXTENSIONMETHODS_GETUP_OFFSET UNITYSDK_OFFSET(0x1C5D2860)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int VisibleLightExtensionMethods_TypeDefinitionIndex = 27608;

	class VisibleLightExtensionMethods : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector3 GetPosition(::UnityEngine::Rendering::VisibleLight value)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Rendering::VisibleLight))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_VISIBLELIGHTEXTENSIONMETHODS_GETPOSITION_OFFSET))(value);
		}

		static ::UnityEngine::Vector3 GetForward(::UnityEngine::Rendering::VisibleLight value)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Rendering::VisibleLight))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_VISIBLELIGHTEXTENSIONMETHODS_GETFORWARD_OFFSET))(value);
		}

		static ::UnityEngine::Vector3 GetUp(::UnityEngine::Rendering::VisibleLight value)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Rendering::VisibleLight))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_VISIBLELIGHTEXTENSIONMETHODS_GETUP_OFFSET))(value);
		}

		static ::UnityEngine::Vector3 GetRight(::UnityEngine::Rendering::VisibleLight value)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Rendering::VisibleLight))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_VISIBLELIGHTEXTENSIONMETHODS_GETRIGHT_OFFSET))(value);
		}
	};
}
