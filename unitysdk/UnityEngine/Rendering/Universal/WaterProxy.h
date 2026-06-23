#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rendering/SphericalHarmonicsL2.h"
#include "unitysdk/UnityEngine/Vector4.h"

class WeatherConfig;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class Cubemap; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class SingleWeatherConfigWater; }
namespace UnityEngine::Rendering::Universal { class WaterRippleTrigger; }

#define UNITYENGINE_RENDERING_UNIVERSAL_WATERPROXY_BAKEGI_OFFSET UNITYSDK_OFFSET(0x1C453590)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERPROXY_CLEANUP_OFFSET UNITYSDK_OFFSET(0x1C452F50)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERPROXY_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1C450DC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERPROXY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1C453430)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERPROXY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1C452EC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERPROXY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1C452C50)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERPROXY_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1C4534C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERPROXY_REGISTERRIPPLETRIGGER_OFFSET UNITYSDK_OFFSET(0x1C4510E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERPROXY_UNREGISTERRIPPLETRIGGER_OFFSET UNITYSDK_OFFSET(0x1C4511C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERPROXY_UPDATEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1C451270)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERPROXY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C453D00)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C453C70)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int WaterProxy_TypeDefinitionIndex = 26202;

	class WaterProxy : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::UnityEngine::Rendering::Universal::WaterProxy** StaticGet__instance()
		{
			return (::UnityEngine::Rendering::Universal::WaterProxy**)Il2CppClass::FromTypeDefinitionIndex(WaterProxy_TypeDefinitionIndex)->GetStaticField(0x22220);
		}
		static ::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::Universal::WaterRippleTrigger*>** StaticGet_rippleTriggers()
		{
			return (::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::Universal::WaterRippleTrigger*>**)Il2CppClass::FromTypeDefinitionIndex(WaterProxy_TypeDefinitionIndex)->GetStaticField(0x22228);
		}
		static ::System::Int32* StaticGet__UseCubemapArrayReflection()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterProxy_TypeDefinitionIndex)->GetStaticField(0x7390);
		}
		static ::System::Int32* StaticGet__WaveCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterProxy_TypeDefinitionIndex)->GetStaticField(0x7394);
		}
		static ::System::Int32* StaticGet_WaterDepthMap()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterProxy_TypeDefinitionIndex)->GetStaticField(0x7398);
		}
		static ::System::Int32* StaticGet__LerpValue()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterProxy_TypeDefinitionIndex)->GetStaticField(0x739C);
		}
		static ::System::Int32* StaticGet__CubeProxyPosAndWeight()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterProxy_TypeDefinitionIndex)->GetStaticField(0x73A0);
		}
		static ::System::Int32* StaticGet__CubemapTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterProxy_TypeDefinitionIndex)->GetStaticField(0x73A4);
		}
		static ::System::Int32* StaticGet__WaveParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterProxy_TypeDefinitionIndex)->GetStaticField(0x73A8);
		}
		static ::System::Int32* StaticGet__CubemapTexture2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterProxy_TypeDefinitionIndex)->GetStaticField(0x73AC);
		}
		static ::System::Int32* StaticGet_CausticsProjection()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterProxy_TypeDefinitionIndex)->GetStaticField(0x73B0);
		}
		static ::System::Int32* StaticGet__WaterSSSParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterProxy_TypeDefinitionIndex)->GetStaticField(0x73B4);
		}
		static ::System::Int32* StaticGet__RippleCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterProxy_TypeDefinitionIndex)->GetStaticField(0x73B8);
		}
		static ::System::Int32* StaticGet_InvViewProjection()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterProxy_TypeDefinitionIndex)->GetStaticField(0x73BC);
		}
		static ::System::Int32* StaticGet__RTXReflectionScale()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterProxy_TypeDefinitionIndex)->GetStaticField(0x73C0);
		}
		static ::System::Int32* StaticGet_CameraRoll()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterProxy_TypeDefinitionIndex)->GetStaticField(0x73C4);
		}
		static ::System::Int32* StaticGet__ReflectionProbeIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterProxy_TypeDefinitionIndex)->GetStaticField(0x73C8);
		}
		static ::System::Int32* StaticGet__AbsorptionScatteringRamp2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterProxy_TypeDefinitionIndex)->GetStaticField(0x73CC);
		}
		static ::System::Int32* StaticGet_SurfaceMap()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterProxy_TypeDefinitionIndex)->GetStaticField(0x73D0);
		}
		static ::System::Int32* StaticGet__WaveDataBuffer()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterProxy_TypeDefinitionIndex)->GetStaticField(0x73D4);
		}
		static ::System::Int32* StaticGet_FoamMap()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterProxy_TypeDefinitionIndex)->GetStaticField(0x73D8);
		}
		static ::System::Int32* StaticGet__RippleData()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterProxy_TypeDefinitionIndex)->GetStaticField(0x73DC);
		}
		static ::System::Int32* StaticGet_WaveData()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterProxy_TypeDefinitionIndex)->GetStaticField(0x73E0);
		}
		static ::System::Int32* StaticGet__CubeProxyExtensionAndBlend()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterProxy_TypeDefinitionIndex)->GetStaticField(0x73E4);
		}
		static ::System::Int32* StaticGet_DepthCamZParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterProxy_TypeDefinitionIndex)->GetStaticField(0x73E8);
		}
		static ::System::Int32* StaticGet__AbsorptionScatteringRamp()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterProxy_TypeDefinitionIndex)->GetStaticField(0x73EC);
		}
		::UnityEngine::Rendering::Universal::SingleWeatherConfigWater* localWaterConfig; // 0x18
		::System::Boolean useGlobalWeatherConfig; // 0x20
		::UnityEngine::Cubemap* cubeMapRef; // 0x28
		::System::Boolean computeOverride; // 0x30
		::UnityEngine::RenderTexture* _depthTex; // 0x38
		::UnityEngine::Texture* bakedDepthTex; // 0x40
		::System::Single rippleLifeTimeOffset; // 0x48
		::System::Single rippleLifeTime; // 0x4C
		::Il2CppArray<::UnityEngine::Matrix4x4>* rippleData; // 0x50
		::UnityEngine::Camera* _depthCam; // 0x58
		::UnityEngine::ComputeBuffer* waveBuffer; // 0x60
		::UnityEngine::MeshRenderer* meshRender; // 0x68
		::UnityEngine::MaterialPropertyBlock* block; // 0x70
		::UnityEngine::Rendering::SphericalHarmonicsL2 bakeResult; // 0x78
		::UnityEngine::Vector4 depthParams; // 0xE4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERPROXY__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERPROXY__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Rendering::Universal::WaterProxy* get_Instance()
		{
			return ((::UnityEngine::Rendering::Universal::WaterProxy*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERPROXY_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void RegisterRippleTrigger(::UnityEngine::Rendering::Universal::WaterRippleTrigger* trigger)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::WaterRippleTrigger*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERPROXY_REGISTERRIPPLETRIGGER_OFFSET))(trigger);
		}

		static ::System::Void UnregisterRippleTrigger(::UnityEngine::Rendering::Universal::WaterRippleTrigger* trigger)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::WaterRippleTrigger*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERPROXY_UNREGISTERRIPPLETRIGGER_OFFSET))(trigger);
		}

		::System::Void UpdateMaterial(::WeatherConfig* weatherConfig)
		{
			return ((::System::Void(*)(::PVOID, ::WeatherConfig*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERPROXY_UPDATEMATERIAL_OFFSET))(this, weatherConfig);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERPROXY_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERPROXY_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERPROXY_ONDESTROY_OFFSET))(this);
		}

		::System::Void Cleanup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERPROXY_CLEANUP_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERPROXY_ONVALIDATE_OFFSET))(this);
		}

		::System::Void BakeGI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERPROXY_BAKEGI_OFFSET))(this);
		}
	};
}
