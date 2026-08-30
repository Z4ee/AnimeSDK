#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"

namespace UnityEngine { class Light; }

#define UNITYENGINE_RENDERSETTINGS_GET_SUN_OFFSET UNITYSDK_OFFSET(0x1EAC1660)

namespace UnityEngine
{
	inline static constexpr unsigned int RenderSettings_TypeDefinitionIndex = 4137;

	class RenderSettings : public ::UnityEngine::Object
	{
	public:
		static ::UnityEngine::Light* get_sun()
		{
			return ((::UnityEngine::Light*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_GET_SUN_OFFSET))();
		}
	};
}
