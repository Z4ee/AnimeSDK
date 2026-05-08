#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/EDecalHideType.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/EEmissionType.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/ELightTriggerAnimationType.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/ELightTriggerType.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/EPresetTVScreenIntensity.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/ESceneObjectProxyType.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/LevelWeatherType.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class KodamaRealtimeLight; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine::NAPRenderPipeline0 { template <typename T> class ObjectPool_1; }
namespace UnityEngine::Rendering::Universal::Internal { class DecalProjector; }
namespace UnityEngine::Rendering::Universal::Internal { class RuntimePostLight; }
namespace UnityEngine::Rendering::Universal::Internal { class SceneObjectProxy_LightAnimation; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCENEOBJECTPROXY_AWAKE_OFFSET UNITYSDK_OFFSET(0x1A2FEFC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCENEOBJECTPROXY_CLEARSCENEPROXYPOOL_OFFSET UNITYSDK_OFFSET(0x1A2FC540)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCENEOBJECTPROXY_GET_CODECONTROLEDEMISSIONINTENSITY_OFFSET UNITYSDK_OFFSET(0x1A2FC780)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCENEOBJECTPROXY_INITVALUE_OFFSET UNITYSDK_OFFSET(0x1A2FF250)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCENEOBJECTPROXY_LERP_OFFSET UNITYSDK_OFFSET(0x1A2FC850)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCENEOBJECTPROXY_LIGHTTRIGGERTYPETOMASK_OFFSET UNITYSDK_OFFSET(0x1A2FEB30)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCENEOBJECTPROXY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1A2FDB20)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCENEOBJECTPROXY_ONLIGHTTRIGGERDISABLE_OFFSET UNITYSDK_OFFSET(0x1A2FDE70)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCENEOBJECTPROXY_ONLIGHTTRIGGERENABLE_OFFSET UNITYSDK_OFFSET(0x1A2FD7E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCENEOBJECTPROXY_ONWEATHERTRIGGERDESTROY_OFFSET UNITYSDK_OFFSET(0x1A2FE370)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCENEOBJECTPROXY_ONWITHERTRIGGERENABLE_OFFSET UNITYSDK_OFFSET(0x1A2FE690)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCENEOBJECTPROXY_PLAYALLANIM_OFFSET UNITYSDK_OFFSET(0x1A301AD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCENEOBJECTPROXY_PLAYANIMATION_OFFSET UNITYSDK_OFFSET(0x1A2FEB90)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCENEOBJECTPROXY_PLAYANIM_OFFSET UNITYSDK_OFFSET(0x1A301870)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCENEOBJECTPROXY_REBINDCHILD_OFFSET UNITYSDK_OFFSET(0x1A2FE760)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCENEOBJECTPROXY_REGISTERANIMATIONCURVE_OFFSET UNITYSDK_OFFSET(0x1A301520)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCENEOBJECTPROXY_REGISTERTOSCENEPROXYMATERIALPOOL_OFFSET UNITYSDK_OFFSET(0x1A2FC020)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCENEOBJECTPROXY_SETLIGHTTRIGGERTYPE_OFFSET UNITYSDK_OFFSET(0x1A2FE880)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCENEOBJECTPROXY_SET_CODECONTROLEDEMISSIONINTENSITY_OFFSET UNITYSDK_OFFSET(0x1A2FC790)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCENEOBJECTPROXY_SHOWORHIDEWEATHERTRIGGER_OFFSET UNITYSDK_OFFSET(0x1A2FEE20)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCENEOBJECTPROXY_START_OFFSET UNITYSDK_OFFSET(0x1A2FD790)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCENEOBJECTPROXY_STOPANIMIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x1A2FE440)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCENEOBJECTPROXY_STOPANIM_OFFSET UNITYSDK_OFFSET(0x1A301EB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCENEOBJECTPROXY_TRIGGERLIGHTOFF_OFFSET UNITYSDK_OFFSET(0x1A302090)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCENEOBJECTPROXY_TRIGGERLIGHTON_OFFSET UNITYSDK_OFFSET(0x1A302010)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCENEOBJECTPROXY_TRIGGERLIGHT_OFFSET UNITYSDK_OFFSET(0x1A301740)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCENEOBJECTPROXY_TRIGGERSPARK_OFFSET UNITYSDK_OFFSET(0x1A3011B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCENEOBJECTPROXY_UPDATEBUILDINGBOTLIGHT_OFFSET UNITYSDK_OFFSET(0x1A300C60)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCENEOBJECTPROXY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A302260)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCENEOBJECTPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A302120)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int SceneObjectProxy_TypeDefinitionIndex = 30422;

	class SceneObjectProxy : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::UnityEngine::NAPRenderPipeline0::ObjectPool_1<::UnityEngine::Rendering::Universal::Internal::SceneObjectProxy_LightAnimation*>** StaticGet_s_AnimationPool()
		{
			return (::UnityEngine::NAPRenderPipeline0::ObjectPool_1<::UnityEngine::Rendering::Universal::Internal::SceneObjectProxy_LightAnimation*>**)Il2CppClass::FromTypeDefinitionIndex(SceneObjectProxy_TypeDefinitionIndex)->GetStaticField(0x24920);
		}
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Material*>*>** StaticGet_s_ProxiesPool()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Material*>*>**)Il2CppClass::FromTypeDefinitionIndex(SceneObjectProxy_TypeDefinitionIndex)->GetStaticField(0x24928);
		}
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::Universal::Internal::SceneObjectProxy*, ::UnityEngine::Rendering::Universal::Internal::SceneObjectProxy_LightAnimation*>** StaticGet_s_AnimationList()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::Universal::Internal::SceneObjectProxy*, ::UnityEngine::Rendering::Universal::Internal::SceneObjectProxy_LightAnimation*>**)Il2CppClass::FromTypeDefinitionIndex(SceneObjectProxy_TypeDefinitionIndex)->GetStaticField(0x24930);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Internal::SceneObjectProxy*>** StaticGet_s_DeadAnimationList()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Internal::SceneObjectProxy*>**)Il2CppClass::FromTypeDefinitionIndex(SceneObjectProxy_TypeDefinitionIndex)->GetStaticField(0x24938);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Material*>** StaticGet_s_NewCreatedMaterialForPool()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Material*>**)Il2CppClass::FromTypeDefinitionIndex(SceneObjectProxy_TypeDefinitionIndex)->GetStaticField(0x24940);
		}
		static ::System::Boolean* StaticGet_canUsePool()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SceneObjectProxy_TypeDefinitionIndex)->GetStaticField(0x7580);
		}
		// static const ::System::Single kPresetTVScreenIntensity_Dark; // 0x0
		// static const ::System::Single kPresetTVScreenIntensity_Dark2; // 0x0
		// static const ::System::Single kPresetTVScreenIntensity_Dark3; // 0x0
		// static const ::System::Single kPresetTVScreenIntensity_Dark4; // 0x0
		// static const ::System::Single kPresetTVScreenIntensity_Standard; // 0x0
		::UnityEngine::Rendering::Universal::Internal::EPresetTVScreenIntensity m_PresetTVScreenIntensity; // 0x18
		::UnityEngine::Rendering::Universal::Internal::ESceneObjectProxyType m_SceneObjectProxyType; // 0x1C
		::UnityEngine::Rendering::Universal::Internal::ELightTriggerType m_LightTriggerType; // 0x20
		::UnityEngine::Rendering::Universal::Internal::ELightTriggerAnimationType m_LightTriggerStartAnimationType; // 0x24
		::UnityEngine::Rendering::Universal::Internal::ELightTriggerAnimationType m_LightTriggerEndAnimationType; // 0x28
		::UnityEngine::Rendering::Universal::Internal::EDecalHideType m_DecalHideType; // 0x2C
		::UnityEngine::Rendering::Universal::Internal::EEmissionType m_EmissionType; // 0x30
		::System::Int32 m_LightTriggerTime; // 0x34
		::System::Single m_DelayTime; // 0x38
		::System::Boolean m_FixDelayTime; // 0x3C
		::System::Boolean m_ContinueSparkAfterLightOn; // 0x3D
		::System::Boolean m_OverrideInitIntensity; // 0x3E
		::System::Boolean m_DisableGlobalEmissionIntensity; // 0x3F
		::System::Single m_InitIntensity; // 0x40
		::System::Int32 m_OverrideMaterialIndex; // 0x44
		::System::Int32 m_ContinueLightCurveIndex; // 0x48
		::UnityEngine::Rendering::Universal::Internal::LevelWeatherType levelWeatherType; // 0x4C
		::System::Boolean m_HideOnMobile; // 0x50
		::System::Boolean m_MarkAsDynamicObject; // 0x51
		::UnityEngine::MaterialPropertyBlock* matPropBlock; // 0x58
		::System::Boolean m_OverrideBuildingBotLightProp; // 0x60
		::UnityEngine::Vector4 m_BuildingBotLightSpecificParams1; // 0x64
		::UnityEngine::Vector4 m_BuildingBotLightSpecificParams2; // 0x74
		::UnityEngine::Vector4 m_BuildingBotLightSpecificParams3; // 0x84
		::UnityEngine::Vector4 m_BuildingBotLightSpecificParams4; // 0x94
		::System::Single m_BuildingBotLightFaceDirection; // 0xA4
		::System::Single m_BuildingBotLightAmount; // 0xA8
		::System::Single m_BuildingBotLightNoiseWeight; // 0xAC
		::System::Single m_BuildingBotLightNoiseOffset; // 0xB0
		::System::Single m_CodeControledEmissionIntensity; // 0xB4
		::UnityEngine::AnimationCurve* m_CustomLightCurve; // 0xB8
		::System::Single m_CustomCurveLength; // 0xC0
		::System::Boolean m_UseCustomCurve; // 0xC4
		::System::Single m_StartLifeTime; // 0xC8
		::System::Single m_EndLifeTime; // 0xCC
		::UnityEngine::AnimationCurve* m_LightTriggerStartCurve; // 0xD0
		::UnityEngine::AnimationCurve* m_LightTriggerEndCurve; // 0xD8
		::UnityEngine::AnimationCurve* m_ContinueLightTriggerCurve; // 0xE0
		::System::Single m_ContinueSparkLifeTime; // 0xE8
		::UnityEngine::Light* m_Light; // 0xF0
		::UnityEngine::KodamaRealtimeLight* m_RealtimeGIComponent; // 0xF8
		::UnityEngine::Rendering::Universal::Internal::DecalProjector* m_DecalProjector; // 0x100
		::UnityEngine::Rendering::Universal::Internal::RuntimePostLight* m_RuntimePostLight; // 0x108
		::UnityEngine::MeshRenderer* m_MeshRenderer; // 0x110
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* m_MeshRenderers; // 0x118
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* m_Materials; // 0x120
		::System::Single m_HistoryLightIntensity; // 0x128
		::System::Single m_HistoryRealtimeGIIntensity; // 0x12C
		::System::Single m_HistoryLightIntensityForChar; // 0x130
		::System::Single m_HistoryDecalEmissionIntensity; // 0x134
		::System::Single m_HistoryDecalFadeFactor; // 0x138
		::Il2CppArray<::UnityEngine::Color>* m_HistoryEmissionColor; // 0x140
		::System::Boolean m_AlwaysNoAnimation; // 0x148
		::System::Int32 WeatherMatrix; // 0x14C
		::System::Collections::Generic::List_1<::System::String*>* WeatherKeys; // 0x150
		::System::Boolean hasRegistered; // 0x158
		::Il2CppArray<::UnityEngine::GameObject*>* childList; // 0x160
		::System::Int32 emissionPropertyId; // 0x168
		::System::Boolean isInLightOnAnimation; // 0x16C
		::System::Boolean isInLightOffAnimation; // 0x16D
		::System::Single lightOnTime; // 0x170
		::System::Boolean isBindOver; // 0x174

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCENEOBJECTPROXY__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCENEOBJECTPROXY__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Material* RegisterToSceneProxyMaterialPool(::UnityEngine::Rendering::Universal::Internal::SceneObjectProxy* proxy)
		{
			return ((::UnityEngine::Material*(*)(::UnityEngine::Rendering::Universal::Internal::SceneObjectProxy*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCENEOBJECTPROXY_REGISTERTOSCENEPROXYMATERIALPOOL_OFFSET))(proxy);
		}

		static ::System::Void ClearSceneProxyPool()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCENEOBJECTPROXY_CLEARSCENEPROXYPOOL_OFFSET))();
		}

		::System::Single get_CodeControledEmissionIntensity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCENEOBJECTPROXY_GET_CODECONTROLEDEMISSIONINTENSITY_OFFSET))(this);
		}

		::System::Void set_CodeControledEmissionIntensity(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCENEOBJECTPROXY_SET_CODECONTROLEDEMISSIONINTENSITY_OFFSET))(this, value);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCENEOBJECTPROXY_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCENEOBJECTPROXY_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnWitherTriggerEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCENEOBJECTPROXY_ONWITHERTRIGGERENABLE_OFFSET))(this);
		}

		::System::Void RebindChild()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCENEOBJECTPROXY_REBINDCHILD_OFFSET))(this);
		}

		::System::Void SetLightTriggerType(::UnityEngine::Rendering::Universal::Internal::ELightTriggerType lightTriggerType)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Internal::ELightTriggerType))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCENEOBJECTPROXY_SETLIGHTTRIGGERTYPE_OFFSET))(this, lightTriggerType);
		}

		::System::Void OnWeatherTriggerDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCENEOBJECTPROXY_ONWEATHERTRIGGERDESTROY_OFFSET))(this);
		}

		::System::Void ShowOrHideWeatherTrigger(::System::Boolean show)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCENEOBJECTPROXY_SHOWORHIDEWEATHERTRIGGER_OFFSET))(this, show);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCENEOBJECTPROXY_AWAKE_OFFSET))(this);
		}

		::System::Void InitValue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCENEOBJECTPROXY_INITVALUE_OFFSET))(this);
		}

		::System::Void OnLightTriggerEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCENEOBJECTPROXY_ONLIGHTTRIGGERENABLE_OFFSET))(this);
		}

		::System::Void OnLightTriggerDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCENEOBJECTPROXY_ONLIGHTTRIGGERDISABLE_OFFSET))(this);
		}

		::System::Void TriggerSpark(::System::Single lightTriggerDayTime, ::System::String* weatherKey, ::UnityEngine::AnimationCurve* defaultLightTriggerCurve, ::UnityEngine::AnimationCurve* remoteEmissionCurve, ::Il2CppArray<::UnityEngine::AnimationCurve*>* continueTriggerCurves, ::System::Single maxDelayTime, ::System::Single continueSparkLifeTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::String*, ::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*, ::Il2CppArray<::UnityEngine::AnimationCurve*>*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCENEOBJECTPROXY_TRIGGERSPARK_OFFSET))(this, lightTriggerDayTime, weatherKey, defaultLightTriggerCurve, remoteEmissionCurve, continueTriggerCurves, maxDelayTime, continueSparkLifeTime);
		}

		::System::Void RegisterAnimationCurve(::UnityEngine::AnimationCurve* defaultLightTriggerCurve, ::UnityEngine::AnimationCurve* remoteEmissionCurve, ::Il2CppArray<::UnityEngine::AnimationCurve*>* continueTriggerCurves, ::System::Single maxDelayTime, ::System::Single continueSparkLifeTime)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*, ::Il2CppArray<::UnityEngine::AnimationCurve*>*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCENEOBJECTPROXY_REGISTERANIMATIONCURVE_OFFSET))(this, defaultLightTriggerCurve, remoteEmissionCurve, continueTriggerCurves, maxDelayTime, continueSparkLifeTime);
		}

		::System::Void TriggerLight(::System::Single lightTriggerDayTime, ::System::String* weatherKey, ::System::Boolean noAnimation, ::UnityEngine::AnimationCurve* defaultLightTriggerCurve, ::UnityEngine::AnimationCurve* remoteEmissionCurve, ::Il2CppArray<::UnityEngine::AnimationCurve*>* continueTriggerCurves, ::System::Single maxDelayTime, ::System::Single continueSparkLifeTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::String*, ::System::Boolean, ::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*, ::Il2CppArray<::UnityEngine::AnimationCurve*>*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCENEOBJECTPROXY_TRIGGERLIGHT_OFFSET))(this, lightTriggerDayTime, weatherKey, noAnimation, defaultLightTriggerCurve, remoteEmissionCurve, continueTriggerCurves, maxDelayTime, continueSparkLifeTime);
		}

		::System::Void PlayAnimation(::System::Boolean noAnimation, ::System::Single lightTriggerDayTime, ::System::String* weatherKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCENEOBJECTPROXY_PLAYANIMATION_OFFSET))(this, noAnimation, lightTriggerDayTime, weatherKey);
		}

		static ::System::Void PlayAllAnim(::System::Single currentTime)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCENEOBJECTPROXY_PLAYALLANIM_OFFSET))(currentTime);
		}

		static ::System::Void PlayAnim(::UnityEngine::Rendering::Universal::Internal::SceneObjectProxy* holder, ::System::Boolean isOn)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::Internal::SceneObjectProxy*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCENEOBJECTPROXY_PLAYANIM_OFFSET))(holder, isOn);
		}

		static ::System::Void StopAnimImmediately(::UnityEngine::Rendering::Universal::Internal::SceneObjectProxy* holder)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::Internal::SceneObjectProxy*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCENEOBJECTPROXY_STOPANIMIMMEDIATELY_OFFSET))(holder);
		}

		static ::System::Void StopAnim(::UnityEngine::Rendering::Universal::Internal::SceneObjectProxy* holder)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::Internal::SceneObjectProxy*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCENEOBJECTPROXY_STOPANIM_OFFSET))(holder);
		}

		::System::Collections::IEnumerator* TriggerLightOn()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCENEOBJECTPROXY_TRIGGERLIGHTON_OFFSET))(this);
		}

		::System::Collections::IEnumerator* TriggerLightOff()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCENEOBJECTPROXY_TRIGGERLIGHTOFF_OFFSET))(this);
		}

		::System::Void Lerp(::System::Single lerpV)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCENEOBJECTPROXY_LERP_OFFSET))(this, lerpV);
		}

		::System::Void UpdateBuildingBotLight(::System::Boolean overrideProperty)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCENEOBJECTPROXY_UPDATEBUILDINGBOTLIGHT_OFFSET))(this, overrideProperty);
		}

		::System::Int32 LightTriggerTypeToMask(::UnityEngine::Rendering::Universal::Internal::ELightTriggerType lightTriggerType)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Rendering::Universal::Internal::ELightTriggerType))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCENEOBJECTPROXY_LIGHTTRIGGERTYPETOMASK_OFFSET))(this, lightTriggerType);
		}
	};
}
