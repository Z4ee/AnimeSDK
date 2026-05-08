#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

namespace UnityEngine { class Light; }

#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTEXTENSION_CALCULATELIGHTMATRIX_OFFSET UNITYSDK_OFFSET(0x19F33790)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTEXTENSION_SETAVATARLIGHTCOLOR_OFFSET UNITYSDK_OFFSET(0x19F33600)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTEXTENSION_SETAVATARLIGHTMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x19F336C0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int LightExtension_TypeDefinitionIndex = 30033;

	class LightExtension : public ::System::Object
	{
	public:
		static ::System::Void SetAvatarLightColor(::UnityEngine::Light* light, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::UnityEngine::Light*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTEXTENSION_SETAVATARLIGHTCOLOR_OFFSET))(light, color);
		}

		static ::System::Void SetAvatarLightMultiplier(::UnityEngine::Light* light, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::Light*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTEXTENSION_SETAVATARLIGHTMULTIPLIER_OFFSET))(light, value);
		}

		static ::UnityEngine::Matrix4x4 CalculateLightMatrix(::UnityEngine::Light* light)
		{
			return ((::UnityEngine::Matrix4x4(*)(::UnityEngine::Light*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTEXTENSION_CALCULATELIGHTMATRIX_OFFSET))(light);
		}
	};
}
