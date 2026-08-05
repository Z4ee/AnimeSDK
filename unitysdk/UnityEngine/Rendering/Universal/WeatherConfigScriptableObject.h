#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/UnityEngine/Vector4.h"

class WeatherConfig;
namespace UnityEngine { class Texture; }

#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERCONFIGSCRIPTABLEOBJECT_GET_LOCALRAINHEIGHTMAPENABLE_OFFSET UNITYSDK_OFFSET(0x1E7A4320)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERCONFIGSCRIPTABLEOBJECT_GET_LOCALRAINHEIGHTMAPPARAMS_OFFSET UNITYSDK_OFFSET(0x1E7A4360)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERCONFIGSCRIPTABLEOBJECT_GET_LOCALRAINHEIGHTMAPTEXTURE_OFFSET UNITYSDK_OFFSET(0x1E7A4340)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERCONFIGSCRIPTABLEOBJECT_GET_LOCALRAINHEIGHTMAPYOFFSET_OFFSET UNITYSDK_OFFSET(0x1E7A4380)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERCONFIGSCRIPTABLEOBJECT_SET_LOCALRAINHEIGHTMAPENABLE_OFFSET UNITYSDK_OFFSET(0x1E7A4330)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERCONFIGSCRIPTABLEOBJECT_SET_LOCALRAINHEIGHTMAPPARAMS_OFFSET UNITYSDK_OFFSET(0x1E7A4370)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERCONFIGSCRIPTABLEOBJECT_SET_LOCALRAINHEIGHTMAPTEXTURE_OFFSET UNITYSDK_OFFSET(0x1E7A4350)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERCONFIGSCRIPTABLEOBJECT_SET_LOCALRAINHEIGHTMAPYOFFSET_OFFSET UNITYSDK_OFFSET(0x1E7A4390)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERCONFIGSCRIPTABLEOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7A43A0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int WeatherConfigScriptableObject_TypeDefinitionIndex = 27885;

	class WeatherConfigScriptableObject : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Boolean IsPartialOverride; // 0x18
		::WeatherConfig* WeatherConfig; // 0x20
		::System::Boolean gap; // 0x28
		::System::Boolean _localRainHeightMapEnable_k__BackingField; // 0x29
		::UnityEngine::Texture* _localRainHeightMapTexture_k__BackingField; // 0x30
		::UnityEngine::Vector4 _localRainHeightMapParams_k__BackingField; // 0x38
		::System::Single _localRainHeightMapYOffset_k__BackingField; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERCONFIGSCRIPTABLEOBJECT__CTOR_OFFSET))(this);
		}

		::System::Boolean get_localRainHeightMapEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERCONFIGSCRIPTABLEOBJECT_GET_LOCALRAINHEIGHTMAPENABLE_OFFSET))(this);
		}

		::System::Void set_localRainHeightMapEnable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERCONFIGSCRIPTABLEOBJECT_SET_LOCALRAINHEIGHTMAPENABLE_OFFSET))(this, value);
		}

		::UnityEngine::Texture* get_localRainHeightMapTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERCONFIGSCRIPTABLEOBJECT_GET_LOCALRAINHEIGHTMAPTEXTURE_OFFSET))(this);
		}

		::System::Void set_localRainHeightMapTexture(::UnityEngine::Texture* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERCONFIGSCRIPTABLEOBJECT_SET_LOCALRAINHEIGHTMAPTEXTURE_OFFSET))(this, value);
		}

		::UnityEngine::Vector4 get_localRainHeightMapParams()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERCONFIGSCRIPTABLEOBJECT_GET_LOCALRAINHEIGHTMAPPARAMS_OFFSET))(this);
		}

		::System::Void set_localRainHeightMapParams(::UnityEngine::Vector4 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERCONFIGSCRIPTABLEOBJECT_SET_LOCALRAINHEIGHTMAPPARAMS_OFFSET))(this, value);
		}

		::System::Single get_localRainHeightMapYOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERCONFIGSCRIPTABLEOBJECT_GET_LOCALRAINHEIGHTMAPYOFFSET_OFFSET))(this);
		}

		::System::Void set_localRainHeightMapYOffset(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERCONFIGSCRIPTABLEOBJECT_SET_LOCALRAINHEIGHTMAPYOFFSET_OFFSET))(this, value);
		}
	};
}
