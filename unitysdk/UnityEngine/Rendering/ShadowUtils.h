#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Rendering/ShadowRenderingLayers.h"
#include "unitysdk/UnityEngine/Rendering/ShadowRuntimeSettings.h"
#include "unitysdk/UnityEngine/Rendering/VsmSettings.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Light; }

#define UNITYENGINE_RENDERING_SHADOWUTILS_ADDVIRTUALPOSITIONSHADOW_OFFSET UNITYSDK_OFFSET(0x18A49170)
#define UNITYENGINE_RENDERING_SHADOWUTILS_BINDSELFSHADOWLIGHT_OFFSET UNITYSDK_OFFSET(0x18A491A0)
#define UNITYENGINE_RENDERING_SHADOWUTILS_CLEANUPSHADOWCACHE_OFFSET UNITYSDK_OFFSET(0x18A490E0)
#define UNITYENGINE_RENDERING_SHADOWUTILS_ENABLELIGHTSHADOW_OFFSET UNITYSDK_OFFSET(0x18A49100)
#define UNITYENGINE_RENDERING_SHADOWUTILS_FORCEUPDATESHADOW_OFFSET UNITYSDK_OFFSET(0x18A490F0)
#define UNITYENGINE_RENDERING_SHADOWUTILS_GETSHADOWRUNTINGSETTINGS_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A490A0)
#define UNITYENGINE_RENDERING_SHADOWUTILS_GETSHADOWRUNTINGSETTINGS_OFFSET UNITYSDK_OFFSET(0x18A49050)
#define UNITYENGINE_RENDERING_SHADOWUTILS_GETVSMSETTINGS_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A49240)
#define UNITYENGINE_RENDERING_SHADOWUTILS_GETVSMSETTINGS_OFFSET UNITYSDK_OFFSET(0x18A491C0)
#define UNITYENGINE_RENDERING_SHADOWUTILS_ISPOSMVISIBLE_OFFSET UNITYSDK_OFFSET(0x18A49130)
#define UNITYENGINE_RENDERING_SHADOWUTILS_ISVSMDEBUG_OFFSET UNITYSDK_OFFSET(0x18A49260)
#define UNITYENGINE_RENDERING_SHADOWUTILS_ONLOADINGFINISHED_OFFSET UNITYSDK_OFFSET(0x18A49280)
#define UNITYENGINE_RENDERING_SHADOWUTILS_REMOVEVIRTUALPOSITIONSHADOW_OFFSET UNITYSDK_OFFSET(0x18A49190)
#define UNITYENGINE_RENDERING_SHADOWUTILS_RESETTODEFAULTCSMUPDATESETTING_OFFSET UNITYSDK_OFFSET(0x18A49160)
#define UNITYENGINE_RENDERING_SHADOWUTILS_SETCSMCASCADECOUNT_OFFSET UNITYSDK_OFFSET(0x18A49140)
#define UNITYENGINE_RENDERING_SHADOWUTILS_SETCSMUPDATEFRAMES_OFFSET UNITYSDK_OFFSET(0x18A49150)
#define UNITYENGINE_RENDERING_SHADOWUTILS_SETCUSTOMSHADOW_OFFSET UNITYSDK_OFFSET(0x18A49110)
#define UNITYENGINE_RENDERING_SHADOWUTILS_SETOVERRIDESELFSHADOWBOUNDS_OFFSET UNITYSDK_OFFSET(0x18A491B0)
#define UNITYENGINE_RENDERING_SHADOWUTILS_SETPEROBJECTSHADOWPRORITY_OFFSET UNITYSDK_OFFSET(0x18A49120)
#define UNITYENGINE_RENDERING_SHADOWUTILS_SETPEROBJECTSHADOWVOLUMEEXTENT_OFFSET UNITYSDK_OFFSET(0x18A49290)
#define UNITYENGINE_RENDERING_SHADOWUTILS_SETRENDERLAYERMASK_OFFSET UNITYSDK_OFFSET(0x18A490D0)
#define UNITYENGINE_RENDERING_SHADOWUTILS_SETSHADOWPLAYER_OFFSET UNITYSDK_OFFSET(0x18A490C0)
#define UNITYENGINE_RENDERING_SHADOWUTILS_SETSHADOWRUNTINGSETTINGS_OFFSET UNITYSDK_OFFSET(0x18A490B0)
#define UNITYENGINE_RENDERING_SHADOWUTILS_SETVSMCULLINGMASK_OFFSET UNITYSDK_OFFSET(0x18A49270)
#define UNITYENGINE_RENDERING_SHADOWUTILS_SETVSMSETTINGS_OFFSET UNITYSDK_OFFSET(0x18A49250)
#define UNITYENGINE_RENDERING_SHADOWUTILS_UPDATEVIRTUALPOSITIONSHADOW_OFFSET UNITYSDK_OFFSET(0x18A49180)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ShadowUtils_TypeDefinitionIndex = 4689;

	class ShadowUtils : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::ShadowRuntimeSettings GetShadowRuntingSettings()
		{
			return ((::UnityEngine::Rendering::ShadowRuntimeSettings(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADOWUTILS_GETSHADOWRUNTINGSETTINGS_OFFSET))();
		}

		static ::System::Void SetShadowRuntingSettings(::UnityEngine::Rendering::ShadowRuntimeSettings& settings)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ShadowRuntimeSettings&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADOWUTILS_SETSHADOWRUNTINGSETTINGS_OFFSET))(settings);
		}

		static ::System::Void SetShadowPlayer(::System::Boolean bStoryMode, ::System::Int32 stroyCharacterCount, ::UnityEngine::GameObject* obj)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Int32, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADOWUTILS_SETSHADOWPLAYER_OFFSET))(bStoryMode, stroyCharacterCount, obj);
		}

		static ::System::Void SetRenderLayerMask(::UnityEngine::Rendering::ShadowRenderingLayers& shadowRenderingLayers)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ShadowRenderingLayers&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADOWUTILS_SETRENDERLAYERMASK_OFFSET))(shadowRenderingLayers);
		}

		static ::System::Void CleanupShadowCache(::System::Boolean clearCSM, ::System::Boolean includeCasterCache)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADOWUTILS_CLEANUPSHADOWCACHE_OFFSET))(clearCSM, includeCasterCache);
		}

		static ::System::Void ForceUpdateShadow(::System::Boolean csm, ::System::Boolean posm, ::System::Boolean localSceneShadow)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADOWUTILS_FORCEUPDATESHADOW_OFFSET))(csm, posm, localSceneShadow);
		}

		static ::System::Void EnableLightShadow(::System::Int32 instanceID, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADOWUTILS_ENABLELIGHTSHADOW_OFFSET))(instanceID, enable);
		}

		static ::System::Void SetCustomShadow(::System::Int32 instanceID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* shadowDirections)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADOWUTILS_SETCUSTOMSHADOW_OFFSET))(instanceID, shadowDirections);
		}

		static ::System::Boolean SetPerObjectShadowPrority(::UnityEngine::GameObject* obj, ::System::Int32 prority)
		{
			return ((::System::Boolean(*)(::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADOWUTILS_SETPEROBJECTSHADOWPRORITY_OFFSET))(obj, prority);
		}

		static ::System::Boolean IsPOSMVisible(::System::Int32 instanceID)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADOWUTILS_ISPOSMVISIBLE_OFFSET))(instanceID);
		}

		static ::System::Void SetCSMCascadeCount(::System::Int32 CascacdeCount, ::System::Int32 cycle)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADOWUTILS_SETCSMCASCADECOUNT_OFFSET))(CascacdeCount, cycle);
		}

		static ::System::Boolean SetCSMUpdateFrames(::System::Int32 cascadeIndex, ::System::Collections::Generic::List_1<::System::Int32>* updateFrames)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADOWUTILS_SETCSMUPDATEFRAMES_OFFSET))(cascadeIndex, updateFrames);
		}

		static ::System::Void ResetToDefaultCSMUpdateSetting()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADOWUTILS_RESETTODEFAULTCSMUPDATESETTING_OFFSET))();
		}

		static ::System::Int32 AddVirtualPositionShadow(::System::Int32 casterID, ::UnityEngine::Vector3& position)
		{
			return ((::System::Int32(*)(::System::Int32, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADOWUTILS_ADDVIRTUALPOSITIONSHADOW_OFFSET))(casterID, position);
		}

		static ::System::Boolean UpdateVirtualPositionShadow(::System::Int32 casterID, ::System::Int32 positionID, ::UnityEngine::Vector3& position)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADOWUTILS_UPDATEVIRTUALPOSITIONSHADOW_OFFSET))(casterID, positionID, position);
		}

		static ::System::Boolean RemoveVirtualPositionShadow(::System::Int32 casterID, ::System::Int32 positionID)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADOWUTILS_REMOVEVIRTUALPOSITIONSHADOW_OFFSET))(casterID, positionID);
		}

		static ::System::Void BindSelfShadowLight(::UnityEngine::GameObject* obj, ::UnityEngine::Light* light)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::Light*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADOWUTILS_BINDSELFSHADOWLIGHT_OFFSET))(obj, light);
		}

		static ::System::Boolean SetOverrideSelfShadowBounds(::UnityEngine::GameObject* obj, ::System::Boolean bOverride, ::UnityEngine::Bounds& boundWS)
		{
			return ((::System::Boolean(*)(::UnityEngine::GameObject*, ::System::Boolean, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADOWUTILS_SETOVERRIDESELFSHADOWBOUNDS_OFFSET))(obj, bOverride, boundWS);
		}

		static ::UnityEngine::Rendering::VsmSettings GetVsmSettings()
		{
			return ((::UnityEngine::Rendering::VsmSettings(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADOWUTILS_GETVSMSETTINGS_OFFSET))();
		}

		static ::System::Void SetVsmSettings(::UnityEngine::Rendering::VsmSettings& settings)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::VsmSettings&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADOWUTILS_SETVSMSETTINGS_OFFSET))(settings);
		}

		static ::System::Boolean IsVsmDebug()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADOWUTILS_ISVSMDEBUG_OFFSET))();
		}

		static ::System::Void SetVsmCullingMask(::System::UInt32 layerMask)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADOWUTILS_SETVSMCULLINGMASK_OFFSET))(layerMask);
		}

		static ::System::Void OnLoadingFinished()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADOWUTILS_ONLOADINGFINISHED_OFFSET))();
		}

		static ::System::Void SetPerObjectShadowVolumeExtent(::System::Int32 instanceID, ::System::Single length)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADOWUTILS_SETPEROBJECTSHADOWVOLUMEEXTENT_OFFSET))(instanceID, length);
		}

		static ::System::Void GetShadowRuntingSettings_Injected(::UnityEngine::Rendering::ShadowRuntimeSettings& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ShadowRuntimeSettings&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADOWUTILS_GETSHADOWRUNTINGSETTINGS_INJECTED_OFFSET))(ret);
		}

		static ::System::Void GetVsmSettings_Injected(::UnityEngine::Rendering::VsmSettings& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::VsmSettings&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADOWUTILS_GETVSMSETTINGS_INJECTED_OFFSET))(ret);
		}
	};
}
