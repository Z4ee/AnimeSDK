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

#define UNITYENGINE_RENDERING_UNIVERSAL_SINGLEWEATHERCONFIGWATER_CLEARRAMPTEXTURE_OFFSET UNITYSDK_OFFSET(0x1C5E75D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SINGLEWEATHERCONFIGWATER_DEFAULTABSORPTIONGRAD_OFFSET UNITYSDK_OFFSET(0x1C5E6540)
#define UNITYENGINE_RENDERING_UNIVERSAL_SINGLEWEATHERCONFIGWATER_DEFAULTSCATTERGRAD_OFFSET UNITYSDK_OFFSET(0x1C5E6720)
#define UNITYENGINE_RENDERING_UNIVERSAL_SINGLEWEATHERCONFIGWATER_GENERATERAMPTEXTURE_OFFSET UNITYSDK_OFFSET(0x1C5E6C20)
#define UNITYENGINE_RENDERING_UNIVERSAL_SINGLEWEATHERCONFIGWATER_GET_LEFTCUBE_OFFSET UNITYSDK_OFFSET(0x1C5E6440)
#define UNITYENGINE_RENDERING_UNIVERSAL_SINGLEWEATHERCONFIGWATER_GET_LERPVALUE_OFFSET UNITYSDK_OFFSET(0x1C5E6480)
#define UNITYENGINE_RENDERING_UNIVERSAL_SINGLEWEATHERCONFIGWATER_GET_RIGHTCUBE_OFFSET UNITYSDK_OFFSET(0x1C5E6460)
#define UNITYENGINE_RENDERING_UNIVERSAL_SINGLEWEATHERCONFIGWATER_REFRESHRAMPTEXTURE_OFFSET UNITYSDK_OFFSET(0x1C5E6C80)
#define UNITYENGINE_RENDERING_UNIVERSAL_SINGLEWEATHERCONFIGWATER_SETUPWAVES_OFFSET UNITYSDK_OFFSET(0x1C5E68D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SINGLEWEATHERCONFIGWATER_SET_LEFTCUBE_OFFSET UNITYSDK_OFFSET(0x1C5E6450)
#define UNITYENGINE_RENDERING_UNIVERSAL_SINGLEWEATHERCONFIGWATER_SET_LERPVALUE_OFFSET UNITYSDK_OFFSET(0x1C5E6490)
#define UNITYENGINE_RENDERING_UNIVERSAL_SINGLEWEATHERCONFIGWATER_SET_RIGHTCUBE_OFFSET UNITYSDK_OFFSET(0x1C5E6470)
#define UNITYENGINE_RENDERING_UNIVERSAL_SINGLEWEATHERCONFIGWATER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5E64A0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int SingleWeatherConfigWater_TypeDefinitionIndex = 27182;

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
		::System::Int32 reflectionProbeIndex; // 0x68
		::UnityEngine::Vector3 cubeProxyPos; // 0x6C
		::UnityEngine::Vector3 cubeProxyExtension; // 0x78
		::UnityEngine::Cubemap* _leftCube_k__BackingField; // 0x88
		::UnityEngine::Cubemap* _rightCube_k__BackingField; // 0x90
		::System::Single _lerpValue_k__BackingField; // 0x98
		::System::Boolean isDynamic; // 0x9C
		::System::Boolean _init; // 0x9D
		::System::Boolean rampTextureDirty; // 0x9E
		::UnityEngine::Texture2D* cachedRampTexture; // 0xA0

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
