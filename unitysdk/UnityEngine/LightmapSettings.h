#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"

namespace UnityEngine { class LightmapData; }

#define UNITYENGINE_LIGHTMAPSETTINGS_SET_LIGHTMAPS_OFFSET UNITYSDK_OFFSET(0x1A44D780)

namespace UnityEngine
{
	inline static constexpr unsigned int LightmapSettings_TypeDefinitionIndex = 3938;

	class LightmapSettings : public ::UnityEngine::Object
	{
	public:
		static ::System::Void set_lightmaps(::Il2CppArray<::UnityEngine::LightmapData*>* value)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::LightmapData*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTMAPSETTINGS_SET_LIGHTMAPS_OFFSET))(value);
		}
	};
}
