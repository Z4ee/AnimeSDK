#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Profiling { class CustomSampler; }
namespace UnityEngine::Rendering::Universal { class UniversalRenderPipelineAsset; }
namespace UnityEngine::Rendering::Universal::Internal { class NapLodProxy; }
namespace UnityEngine::Rendering::Universal::Internal { class NapMaterialLodSettings; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLODSYSTEM_LATEUPDATELOD_OFFSET UNITYSDK_OFFSET(0x1B895520)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLODSYSTEM_ONSCENEEFFECTQUALITYSETTINGCHANGE_OFFSET UNITYSDK_OFFSET(0x1B893BE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLODSYSTEM_REGISTERLODPROXY_1_OFFSET UNITYSDK_OFFSET(0x1B894560)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLODSYSTEM_REGISTERLODPROXY_OFFSET UNITYSDK_OFFSET(0x1B893FF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLODSYSTEM_UNREGISTERLODPROXY_1_OFFSET UNITYSDK_OFFSET(0x1B894690)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLODSYSTEM_UNREGISTERLODPROXY_OFFSET UNITYSDK_OFFSET(0x1B8942A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLODSYSTEM_UPDATELOD_OFFSET UNITYSDK_OFFSET(0x1B8947C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLODSYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B8957C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLODSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8957B0)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int NapLodSystem_TypeDefinitionIndex = 26415;

	class NapLodSystem : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Internal::NapLodProxy*>** StaticGet_s_OnceTimeLodList()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Internal::NapLodProxy*>**)Il2CppClass::FromTypeDefinitionIndex(NapLodSystem_TypeDefinitionIndex)->GetStaticField(0x21DB0);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Internal::NapMaterialLodSettings*>** StaticGet_s_MaterialLodSettingsList()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Internal::NapMaterialLodSettings*>**)Il2CppClass::FromTypeDefinitionIndex(NapLodSystem_TypeDefinitionIndex)->GetStaticField(0x21DB8);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Internal::NapLodProxy*>** StaticGet_s_UnProcessedOnceTimeLodList()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Internal::NapLodProxy*>**)Il2CppClass::FromTypeDefinitionIndex(NapLodSystem_TypeDefinitionIndex)->GetStaticField(0x21DC0);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Internal::NapLodProxy*>** StaticGet_s_PerFrameLodList()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Internal::NapLodProxy*>**)Il2CppClass::FromTypeDefinitionIndex(NapLodSystem_TypeDefinitionIndex)->GetStaticField(0x21DC8);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_s_NapLodSystemUpdateLod()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapLodSystem_TypeDefinitionIndex)->GetStaticField(0x21DD0);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_s_NapLodSystemLateUpdateLod()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapLodSystem_TypeDefinitionIndex)->GetStaticField(0x21DD8);
		}
		static ::System::Int32* StaticGet_UPDATE_COUNT_LIMIT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapLodSystem_TypeDefinitionIndex)->GetStaticField(0x6E30);
		}
		static ::System::Int32* StaticGet_s_UpdateMatLodIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapLodSystem_TypeDefinitionIndex)->GetStaticField(0x6E34);
		}
		static ::System::Int32* StaticGet_s_UpdateLodIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapLodSystem_TypeDefinitionIndex)->GetStaticField(0x6E38);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLODSYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLODSYSTEM__CCTOR_OFFSET))();
		}

		static ::System::Void OnSceneEffectQualitySettingChange()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLODSYSTEM_ONSCENEEFFECTQUALITYSETTINGCHANGE_OFFSET))();
		}

		static ::System::Void RegisterLodProxy(::UnityEngine::Rendering::Universal::Internal::NapLodProxy* napLodProxy)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::Internal::NapLodProxy*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLODSYSTEM_REGISTERLODPROXY_OFFSET))(napLodProxy);
		}

		static ::System::Void UnregisterLodProxy(::UnityEngine::Rendering::Universal::Internal::NapLodProxy* napLodProxy)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::Internal::NapLodProxy*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLODSYSTEM_UNREGISTERLODPROXY_OFFSET))(napLodProxy);
		}

		static ::System::Void RegisterLodProxy_1(::UnityEngine::Rendering::Universal::Internal::NapMaterialLodSettings* lodProxy)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::Internal::NapMaterialLodSettings*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLODSYSTEM_REGISTERLODPROXY_1_OFFSET))(lodProxy);
		}

		static ::System::Void UnregisterLodProxy_1(::UnityEngine::Rendering::Universal::Internal::NapMaterialLodSettings* lodProxy)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::Internal::NapMaterialLodSettings*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLODSYSTEM_UNREGISTERLODPROXY_1_OFFSET))(lodProxy);
		}

		static ::System::Void UpdateLod(::UnityEngine::Transform* trigger, ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* globalSetting, ::System::Single localVolumeLightLodBias, ::System::Boolean useConstLodBiasValue, ::UnityEngine::LayerMask triggerLayerMask, ::System::Boolean triggerActive, ::System::Boolean groundDiscard, ::System::Single groundDiscardPosition)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*, ::System::Single, ::System::Boolean, ::UnityEngine::LayerMask, ::System::Boolean, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLODSYSTEM_UPDATELOD_OFFSET))(trigger, globalSetting, localVolumeLightLodBias, useConstLodBiasValue, triggerLayerMask, triggerActive, groundDiscard, groundDiscardPosition);
		}

		static ::System::Void LateUpdateLod(::UnityEngine::Transform* trigger, ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* globalSetting, ::System::Single localLightLodBias, ::UnityEngine::LayerMask triggerLayerMask, ::System::Boolean triggerActive)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*, ::System::Single, ::UnityEngine::LayerMask, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLODSYSTEM_LATEUPDATELOD_OFFSET))(trigger, globalSetting, localLightLodBias, triggerLayerMask, triggerActive);
		}
	};
}
