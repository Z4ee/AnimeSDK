#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Texture2D; }

#define UNITYENGINE_LIGHTMAPDATA_SET_AREADIRECT_OFFSET UNITYSDK_OFFSET(0x1B654D80)
#define UNITYENGINE_LIGHTMAPDATA_SET_LIGHTMAPCOLOR_OFFSET UNITYSDK_OFFSET(0x1B654D70)
#define UNITYENGINE_LIGHTMAPDATA_SET_LIGHTSKYOC_OFFSET UNITYSDK_OFFSET(0x1B654D90)
#define UNITYENGINE_LIGHTMAPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B654DA0)

namespace UnityEngine
{
	inline static constexpr unsigned int LightmapData_TypeDefinitionIndex = 5186;

	class LightmapData : public ::System::Object
	{
	public:
		::UnityEngine::Texture2D* m_Light; // 0x10
		::UnityEngine::Texture2D* m_Dir; // 0x18
		::UnityEngine::Texture2D* m_ShadowMask; // 0x20
		::UnityEngine::Texture2D* m_AreaDirect; // 0x28
		::UnityEngine::Texture2D* m_LightSkyOC; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTMAPDATA__CTOR_OFFSET))(this);
		}

		::System::Void set_lightmapColor(::UnityEngine::Texture2D* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTMAPDATA_SET_LIGHTMAPCOLOR_OFFSET))(this, value);
		}

		::System::Void set_areaDirect(::UnityEngine::Texture2D* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTMAPDATA_SET_AREADIRECT_OFFSET))(this, value);
		}

		::System::Void set_lightSkyOC(::UnityEngine::Texture2D* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTMAPDATA_SET_LIGHTSKYOC_OFFSET))(this, value);
		}
	};
}
