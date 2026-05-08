#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rendering/SphericalHarmonicsL2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

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

#define UNITYENGINE_RENDERING_UNIVERSAL_WATERPROXY_BAKEGI_OFFSET UNITYSDK_OFFSET(0x1A30F580)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERPROXY_CLEANUP_OFFSET UNITYSDK_OFFSET(0x1A30EF40)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERPROXY_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1A30CCB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERPROXY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1A30F420)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERPROXY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1A30EEB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERPROXY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1A30EC40)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERPROXY_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1A30F4B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERPROXY_REGISTERRIPPLETRIGGER_OFFSET UNITYSDK_OFFSET(0x1A30CFD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERPROXY_UNREGISTERRIPPLETRIGGER_OFFSET UNITYSDK_OFFSET(0x1A30D0B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERPROXY_UPDATEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1A30D160)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERPROXY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A30FCF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A30FC60)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int WaterProxy_TypeDefinitionIndex = 29939;

	class WaterProxy : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::Universal::WaterRippleTrigger*>** StaticGet_rippleTriggers()
		{
			return (::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::Universal::WaterRippleTrigger*>**)Il2CppClass::FromTypeDefinitionIndex(WaterProxy_TypeDefinitionIndex)->GetStaticField(0x24970);
		}
		static ::UnityEngine::Rendering::Universal::WaterProxy** StaticGet__instance()
		{
			return (::UnityEngine::Rendering::Universal::WaterProxy**)Il2CppClass::FromTypeDefinitionIndex(WaterProxy_TypeDefinitionIndex)->GetStaticField(0x24978);
		}
		static ::System::Int32* StaticGet__CubemapTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterProxy_TypeDefinitionIndex)->GetStaticField(0x7620);
		}
		static ::System::Int32* StaticGet_DepthCamZParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterProxy_TypeDefinitionIndex)->GetStaticField(0x7624);
		}
		static ::System::Int32* StaticGet_WaveData()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterProxy_TypeDefinitionIndex)->GetStaticField(0x7628);
		}
		static ::System::Int32* StaticGet__WaterSSSParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterProxy_TypeDefinitionIndex)->GetStaticField(0x762C);
		}
		static ::System::Int32* StaticGet__CubeProxyExtensionAndBlend()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterProxy_TypeDefinitionIndex)->GetStaticField(0x7630);
		}
		static ::System::Int32* StaticGet__WaveParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterProxy_TypeDefinitionIndex)->GetStaticField(0x7634);
		}
		static ::System::Int32* StaticGet__CubeProxyPosAndWeight()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterProxy_TypeDefinitionIndex)->GetStaticField(0x7638);
		}
		static ::System::Int32* StaticGet_CameraRoll()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterProxy_TypeDefinitionIndex)->GetStaticField(0x763C);
		}
		static ::System::Int32* StaticGet_InvViewProjection()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterProxy_TypeDefinitionIndex)->GetStaticField(0x7640);
		}
		static ::System::Int32* StaticGet__LerpValue()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterProxy_TypeDefinitionIndex)->GetStaticField(0x7644);
		}
		static ::System::Int32* StaticGet__WaveDataBuffer()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterProxy_TypeDefinitionIndex)->GetStaticField(0x7648);
		}
		static ::System::Int32* StaticGet_FoamMap()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterProxy_TypeDefinitionIndex)->GetStaticField(0x764C);
		}
		static ::System::Int32* StaticGet_CausticsProjection()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterProxy_TypeDefinitionIndex)->GetStaticField(0x7650);
		}
		static ::System::Int32* StaticGet__WaveCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterProxy_TypeDefinitionIndex)->GetStaticField(0x7654);
		}
		static ::System::Int32* StaticGet_WaterDepthMap()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterProxy_TypeDefinitionIndex)->GetStaticField(0x7658);
		}
		static ::System::Int32* StaticGet_SurfaceMap()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterProxy_TypeDefinitionIndex)->GetStaticField(0x765C);
		}
		static ::System::Int32* StaticGet__CubemapTexture2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterProxy_TypeDefinitionIndex)->GetStaticField(0x7660);
		}
		static ::System::Int32* StaticGet__AbsorptionScatteringRamp()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterProxy_TypeDefinitionIndex)->GetStaticField(0x7664);
		}
		static ::System::Int32* StaticGet__AbsorptionScatteringRamp2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterProxy_TypeDefinitionIndex)->GetStaticField(0x7668);
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

		::System::Void UpdateMaterial(::UnityEngine::Rendering::Universal::SingleWeatherConfigWater* globalConfig, ::UnityEngine::Vector3 mainLightDir)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::SingleWeatherConfigWater*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERPROXY_UPDATEMATERIAL_OFFSET))(this, globalConfig, mainLightDir);
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
