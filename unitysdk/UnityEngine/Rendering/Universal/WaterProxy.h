#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rendering/SphericalHarmonicsL2.h"
#include "unitysdk/UnityEngine/Rendering/Universal/WaterProxy_ReflectionSourceSelectionMode.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class WeatherConfig;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class Cubemap; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class ReflectionProbe; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class DeferredReflectionProbe; }
namespace UnityEngine::Rendering::Universal { class SingleWeatherConfigWater; }
namespace UnityEngine::Rendering::Universal { class WaterRippleTrigger; }

#define UNITYENGINE_RENDERING_UNIVERSAL_WATERPROXY_APPLYREFLECTIONSOURCESELECTION_OFFSET UNITYSDK_OFFSET(0x1D60C730)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERPROXY_BAKEGI_OFFSET UNITYSDK_OFFSET(0x1D60D600)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERPROXY_CLEANUP_OFFSET UNITYSDK_OFFSET(0x1D60CFA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERPROXY_EVALUATEPROBEWEIGHT_OFFSET UNITYSDK_OFFSET(0x1D60E3F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERPROXY_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1D609030)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERPROXY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1D60D4A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERPROXY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1D60CF10)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERPROXY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1D60C8F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERPROXY_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1D60D530)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERPROXY_REFRESHSERIALIZEDREFLECTIONPROBEINDEX_OFFSET UNITYSDK_OFFSET(0x1D60CB70)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERPROXY_REGISTERRIPPLETRIGGER_OFFSET UNITYSDK_OFFSET(0x1D609350)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERPROXY_TRYGETMAXWEIGHTPROBE_OFFSET UNITYSDK_OFFSET(0x1D60DCE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERPROXY_UNREGISTERRIPPLETRIGGER_OFFSET UNITYSDK_OFFSET(0x1D609430)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERPROXY_UPDATEGLOBALMPBDATA_OFFSET UNITYSDK_OFFSET(0x1D6094E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERPROXY_UPDATEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1D60ACB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERPROXY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D60E5E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D60E550)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int WaterProxy_TypeDefinitionIndex = 27638;

	class WaterProxy : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::UnityEngine::Rendering::Universal::WaterProxy** StaticGet__instance()
		{
			return (::UnityEngine::Rendering::Universal::WaterProxy**)Il2CppClass::FromTypeDefinitionIndex(WaterProxy_TypeDefinitionIndex)->GetStaticField(0x23A00);
		}
		static ::UnityEngine::ComputeBuffer** StaticGet_s_GlobalWaveBuffer()
		{
			return (::UnityEngine::ComputeBuffer**)Il2CppClass::FromTypeDefinitionIndex(WaterProxy_TypeDefinitionIndex)->GetStaticField(0x23A08);
		}
		static ::UnityEngine::MaterialPropertyBlock** StaticGet_s_GlobalMPB()
		{
			return (::UnityEngine::MaterialPropertyBlock**)Il2CppClass::FromTypeDefinitionIndex(WaterProxy_TypeDefinitionIndex)->GetStaticField(0x23A10);
		}
		static ::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::Universal::WaterRippleTrigger*>** StaticGet_rippleTriggers()
		{
			return (::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::Universal::WaterRippleTrigger*>**)Il2CppClass::FromTypeDefinitionIndex(WaterProxy_TypeDefinitionIndex)->GetStaticField(0x23A18);
		}
		static ::UnityEngine::Cubemap** StaticGet_s_GlobalCubeRef()
		{
			return (::UnityEngine::Cubemap**)Il2CppClass::FromTypeDefinitionIndex(WaterProxy_TypeDefinitionIndex)->GetStaticField(0x23A20);
		}
		static ::System::Int32* StaticGet__ReflectionProbeIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterProxy_TypeDefinitionIndex)->GetStaticField(0x7340);
		}
		static ::System::Int32* StaticGet__WaveCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterProxy_TypeDefinitionIndex)->GetStaticField(0x7344);
		}
		static ::System::Int32* StaticGet__CubemapTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterProxy_TypeDefinitionIndex)->GetStaticField(0x7348);
		}
		static ::System::Int32* StaticGet_SurfaceMap()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterProxy_TypeDefinitionIndex)->GetStaticField(0x734C);
		}
		static ::System::Int32* StaticGet_FoamMap()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterProxy_TypeDefinitionIndex)->GetStaticField(0x7350);
		}
		static ::System::Int32* StaticGet__LerpValue()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterProxy_TypeDefinitionIndex)->GetStaticField(0x7354);
		}
		static ::System::Int32* StaticGet_CameraRoll()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterProxy_TypeDefinitionIndex)->GetStaticField(0x7358);
		}
		static ::System::Int32* StaticGet_WaterDepthMap()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterProxy_TypeDefinitionIndex)->GetStaticField(0x735C);
		}
		static ::System::Int32* StaticGet__WaveParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterProxy_TypeDefinitionIndex)->GetStaticField(0x7360);
		}
		static ::System::Int32* StaticGet__WaveDataBuffer()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterProxy_TypeDefinitionIndex)->GetStaticField(0x7364);
		}
		static ::System::Int32* StaticGet__UseCubemapArrayReflection()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterProxy_TypeDefinitionIndex)->GetStaticField(0x7368);
		}
		static ::System::Int32* StaticGet__RippleCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterProxy_TypeDefinitionIndex)->GetStaticField(0x736C);
		}
		static ::System::Int32* StaticGet__AbsorptionScatteringRamp()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterProxy_TypeDefinitionIndex)->GetStaticField(0x7370);
		}
		static ::System::Int32* StaticGet__RTXReflectionScale()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterProxy_TypeDefinitionIndex)->GetStaticField(0x7374);
		}
		static ::System::Int32* StaticGet_s_ReflectionProbeIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterProxy_TypeDefinitionIndex)->GetStaticField(0x7378);
		}
		static ::System::Int32* StaticGet__RippleData()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterProxy_TypeDefinitionIndex)->GetStaticField(0x737C);
		}
		static ::System::Int32* StaticGet__CubemapTexture2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterProxy_TypeDefinitionIndex)->GetStaticField(0x7380);
		}
		static ::System::Boolean* StaticGet_s_HasCustomReflectionCubemap()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(WaterProxy_TypeDefinitionIndex)->GetStaticField(0x7384);
		}
		static ::System::Int32* StaticGet__CubeProxyExtensionAndBlend()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterProxy_TypeDefinitionIndex)->GetStaticField(0x7388);
		}
		static ::System::Int32* StaticGet_CausticsProjection()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterProxy_TypeDefinitionIndex)->GetStaticField(0x738C);
		}
		static ::System::Int32* StaticGet_InvViewProjection()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterProxy_TypeDefinitionIndex)->GetStaticField(0x7390);
		}
		static ::System::Int32* StaticGet__CubeProxyPosAndWeight()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterProxy_TypeDefinitionIndex)->GetStaticField(0x7394);
		}
		static ::System::Int32* StaticGet__WaterSSSParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterProxy_TypeDefinitionIndex)->GetStaticField(0x7398);
		}
		static ::System::Int32* StaticGet_WaveData()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterProxy_TypeDefinitionIndex)->GetStaticField(0x739C);
		}
		static ::System::Int32* StaticGet_DepthCamZParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterProxy_TypeDefinitionIndex)->GetStaticField(0x73A0);
		}
		static ::System::Int32* StaticGet__AbsorptionScatteringRamp2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WaterProxy_TypeDefinitionIndex)->GetStaticField(0x73A4);
		}
		::UnityEngine::Rendering::Universal::SingleWeatherConfigWater* localWaterConfig; // 0x18
		::System::Boolean useGlobalWeatherConfig; // 0x20
		::UnityEngine::Cubemap* cubeMapRef; // 0x28
		::System::Boolean useReflectionSourceSelectionMode; // 0x30
		::UnityEngine::Rendering::Universal::WaterProxy_ReflectionSourceSelectionMode reflectionSourceMode; // 0x34
		::UnityEngine::Cubemap* reflectionSourceCustomCubemap; // 0x38
		::UnityEngine::Rendering::Universal::DeferredReflectionProbe* reflectionSourceProbe; // 0x40
		::System::Int32 serializedReflectionProbeIndex; // 0x48
		::UnityEngine::Rendering::Universal::DeferredReflectionProbe* serializedReflectionProbe; // 0x50
		::System::Boolean computeOverride; // 0x58
		::UnityEngine::RenderTexture* _depthTex; // 0x60
		::UnityEngine::Texture* bakedDepthTex; // 0x68
		::System::Single rippleLifeTimeOffset; // 0x70
		::System::Single rippleLifeTime; // 0x74
		::Il2CppArray<::UnityEngine::Matrix4x4>* rippleData; // 0x78
		::UnityEngine::Camera* _depthCam; // 0x80
		::UnityEngine::ComputeBuffer* waveBuffer; // 0x88
		::UnityEngine::MeshRenderer* meshRender; // 0x90
		::UnityEngine::MaterialPropertyBlock* localMPB; // 0x98
		::System::Boolean cached_kw_DYNAMIC_TIME; // 0xA0
		::UnityEngine::Rendering::SphericalHarmonicsL2 bakeResult; // 0xA4
		::UnityEngine::Vector4 depthParams; // 0x110

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

		static ::System::Void UpdateGlobalMPBData(::WeatherConfig* weatherConfig)
		{
			return ((::System::Void(*)(::WeatherConfig*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERPROXY_UPDATEGLOBALMPBDATA_OFFSET))(weatherConfig);
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

		::System::Void ApplyReflectionSourceSelection(::UnityEngine::Cubemap*& resolvedReflectionCubemap, ::System::Boolean& hasCustomReflectionCubemap, ::System::Int32& reflectionProbeIndex)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Cubemap*&, ::System::Boolean&, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERPROXY_APPLYREFLECTIONSOURCESELECTION_OFFSET))(this, resolvedReflectionCubemap, hasCustomReflectionCubemap, reflectionProbeIndex);
		}

		::System::Void RefreshSerializedReflectionProbeIndex()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERPROXY_REFRESHSERIALIZEDREFLECTIONPROBEINDEX_OFFSET))(this);
		}

		::System::Boolean TryGetMaxWeightProbe(::UnityEngine::Rendering::Universal::DeferredReflectionProbe*& bestProbe)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::Universal::DeferredReflectionProbe*&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERPROXY_TRYGETMAXWEIGHTPROBE_OFFSET))(this, bestProbe);
		}

		static ::System::Single EvaluateProbeWeight(::UnityEngine::ReflectionProbe* probe, ::System::Single blendDistance, ::UnityEngine::Vector3 worldPos)
		{
			return ((::System::Single(*)(::UnityEngine::ReflectionProbe*, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERPROXY_EVALUATEPROBEWEIGHT_OFFSET))(probe, blendDistance, worldPos);
		}
	};
}
