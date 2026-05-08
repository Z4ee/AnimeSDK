#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Wave.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class Cubemap; }
namespace UnityEngine { class Gradient; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::Rendering::Universal { class BasicWaves; }
namespace UnityEngine::Rendering::Universal { class FoamSettings; }

#define UNITYENGINE_RENDERING_UNIVERSAL_SINGLEWEATHERCONFIGWATER_CLEARRAMPTEXTURE_OFFSET UNITYSDK_OFFSET(0x192AFBA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SINGLEWEATHERCONFIGWATER_DEFAULTABSORPTIONGRAD_OFFSET UNITYSDK_OFFSET(0x192AEB10)
#define UNITYENGINE_RENDERING_UNIVERSAL_SINGLEWEATHERCONFIGWATER_DEFAULTSCATTERGRAD_OFFSET UNITYSDK_OFFSET(0x192AECF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SINGLEWEATHERCONFIGWATER_GENERATERAMPTEXTURE_OFFSET UNITYSDK_OFFSET(0x192AF1F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SINGLEWEATHERCONFIGWATER_GET_LEFTCUBE_OFFSET UNITYSDK_OFFSET(0x192AEA10)
#define UNITYENGINE_RENDERING_UNIVERSAL_SINGLEWEATHERCONFIGWATER_GET_LERPVALUE_OFFSET UNITYSDK_OFFSET(0x192AEA50)
#define UNITYENGINE_RENDERING_UNIVERSAL_SINGLEWEATHERCONFIGWATER_GET_RIGHTCUBE_OFFSET UNITYSDK_OFFSET(0x192AEA30)
#define UNITYENGINE_RENDERING_UNIVERSAL_SINGLEWEATHERCONFIGWATER_REFRESHRAMPTEXTURE_OFFSET UNITYSDK_OFFSET(0x192AF250)
#define UNITYENGINE_RENDERING_UNIVERSAL_SINGLEWEATHERCONFIGWATER_SETUPWAVES_OFFSET UNITYSDK_OFFSET(0x192AEEA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SINGLEWEATHERCONFIGWATER_SET_LEFTCUBE_OFFSET UNITYSDK_OFFSET(0x192AEA20)
#define UNITYENGINE_RENDERING_UNIVERSAL_SINGLEWEATHERCONFIGWATER_SET_LERPVALUE_OFFSET UNITYSDK_OFFSET(0x192AEA60)
#define UNITYENGINE_RENDERING_UNIVERSAL_SINGLEWEATHERCONFIGWATER_SET_RIGHTCUBE_OFFSET UNITYSDK_OFFSET(0x192AEA40)
#define UNITYENGINE_RENDERING_UNIVERSAL_SINGLEWEATHERCONFIGWATER__CTOR_OFFSET UNITYSDK_OFFSET(0x192AEA70)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int SingleWeatherConfigWater_TypeDefinitionIndex = 29808;

	class SingleWeatherConfigWater : public ::System::Object
	{
	public:
		::System::Single _waterMaxVisibility; // 0x10
		::System::Single sssBaseIntensity; // 0x14
		::System::Single sssSunIntensity; // 0x18
		::System::Single reflectionDistortion; // 0x1C
		::System::Single reflectionFresnel; // 0x20
		::UnityEngine::Gradient* _absorptionRamp; // 0x28
		::UnityEngine::Gradient* _scatterRamp; // 0x30
		::Il2CppArray<::UnityEngine::Rendering::Universal::Wave>* _waves; // 0x38
		::System::Boolean _customWaves; // 0x40
		::UnityEngine::Rendering::Universal::BasicWaves* _basicWaveSettings; // 0x48
		::System::Int32 randomSeed; // 0x50
		::UnityEngine::Rendering::Universal::FoamSettings* _foamSettings; // 0x58
		::UnityEngine::Cubemap* cubeMapRef; // 0x60
		::UnityEngine::Vector3 cubeProxyPos; // 0x68
		::UnityEngine::Vector3 cubeProxyExtension; // 0x74
		::UnityEngine::Cubemap* _leftCube_k__BackingField; // 0x80
		::UnityEngine::Cubemap* _rightCube_k__BackingField; // 0x88
		::System::Single _lerpValue_k__BackingField; // 0x90
		::System::Boolean isDynamic; // 0x94
		::System::Boolean _init; // 0x95
		::System::Boolean rampTextureDirty; // 0x96
		::UnityEngine::Texture2D* cachedRampTexture; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SINGLEWEATHERCONFIGWATER__CTOR_OFFSET))(this);
		}

		::UnityEngine::Cubemap* get_leftCube()
		{
			return ((::UnityEngine::Cubemap*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SINGLEWEATHERCONFIGWATER_GET_LEFTCUBE_OFFSET))(this);
		}

		::System::Void set_leftCube(::UnityEngine::Cubemap* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Cubemap*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SINGLEWEATHERCONFIGWATER_SET_LEFTCUBE_OFFSET))(this, value);
		}

		::UnityEngine::Cubemap* get_rightCube()
		{
			return ((::UnityEngine::Cubemap*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SINGLEWEATHERCONFIGWATER_GET_RIGHTCUBE_OFFSET))(this);
		}

		::System::Void set_rightCube(::UnityEngine::Cubemap* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Cubemap*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SINGLEWEATHERCONFIGWATER_SET_RIGHTCUBE_OFFSET))(this, value);
		}

		::System::Single get_lerpValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SINGLEWEATHERCONFIGWATER_GET_LERPVALUE_OFFSET))(this);
		}

		::System::Void set_lerpValue(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SINGLEWEATHERCONFIGWATER_SET_LERPVALUE_OFFSET))(this, value);
		}

		::UnityEngine::Gradient* DefaultAbsorptionGrad()
		{
			return ((::UnityEngine::Gradient*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SINGLEWEATHERCONFIGWATER_DEFAULTABSORPTIONGRAD_OFFSET))(this);
		}

		::UnityEngine::Gradient* DefaultScatterGrad()
		{
			return ((::UnityEngine::Gradient*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SINGLEWEATHERCONFIGWATER_DEFAULTSCATTERGRAD_OFFSET))(this);
		}

		::System::Void SetupWaves()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SINGLEWEATHERCONFIGWATER_SETUPWAVES_OFFSET))(this);
		}

		::System::Void GenerateRampTexture(::System::String* name, ::System::Boolean isTemp)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SINGLEWEATHERCONFIGWATER_GENERATERAMPTEXTURE_OFFSET))(this, name, isTemp);
		}

		::System::Void RefreshRampTexture()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SINGLEWEATHERCONFIGWATER_REFRESHRAMPTEXTURE_OFFSET))(this);
		}

		::System::Void ClearRampTexture()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SINGLEWEATHERCONFIGWATER_CLEARRAMPTEXTURE_OFFSET))(this);
		}
	};
}
