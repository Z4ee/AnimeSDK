#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"

namespace UnityEngine { class LightmapData; }

#define UNITYENGINE_LIGHTMAPSETTINGS_SET_LIGHTMAPS_OFFSET UNITYSDK_OFFSET(0x1B29E560)

namespace UnityEngine
{
	inline static constexpr unsigned int LightmapSettings_TypeDefinitionIndex = 4112;

	class LightmapSettings : public ::UnityEngine::Object
	{
	public:
		static ::System::Void set_lightmaps(::Il2CppArray<::UnityEngine::LightmapData*>* a1)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::LightmapData*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTMAPSETTINGS_SET_LIGHTMAPS_OFFSET))(a1);
		}
	};
}
