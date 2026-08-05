#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Light; }

#define UNITYENGINE_RENDERING_UNIVERSAL_CUBELIGHTBAKEONLY_LIGHTPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5F1B70)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int CubeLightBakeOnly_LightProxy_TypeDefinitionIndex = 27648;

	class CubeLightBakeOnly_LightProxy : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* owner; // 0x10
		::UnityEngine::Light* light; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CUBELIGHTBAKEONLY_LIGHTPROXY__CTOR_OFFSET))(this);
		}
	};
}
