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

#define UNITYENGINE_RENDERING_SHADOWUTILS_ADDVIRTUALPOSITIONSHADOW_OFFSET UNITYSDK_OFFSET(0x1F3F9E50)
#define UNITYENGINE_RENDERING_SHADOWUTILS_BINDSELFSHADOWLIGHT_OFFSET UNITYSDK_OFFSET(0x1F3F9E80)
#define UNITYENGINE_RENDERING_SHADOWUTILS_CLEANUPSHADOWCACHE_OFFSET UNITYSDK_OFFSET(0x1F3F9DC0)
#define UNITYENGINE_RENDERING_SHADOWUTILS_ENABLELIGHTSHADOW_OFFSET UNITYSDK_OFFSET(0x1F3F9DE0)
#define UNITYENGINE_RENDERING_SHADOWUTILS_FORCEUPDATESHADOW_OFFSET UNITYSDK_OFFSET(0x1F3F9DD0)
#define UNITYENGINE_RENDERING_SHADOWUTILS_GETSHADOWRUNTINGSETTINGS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F3F9D80)
#define UNITYENGINE_RENDERING_SHADOWUTILS_GETSHADOWRUNTINGSETTINGS_OFFSET UNITYSDK_OFFSET(0x1F3F9D30)
#define UNITYENGINE_RENDERING_SHADOWUTILS_GETVSMSETTINGS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F3F9F20)
#define UNITYENGINE_RENDERING_SHADOWUTILS_GETVSMSETTINGS_OFFSET UNITYSDK_OFFSET(0x1F3F9EA0)
#define UNITYENGINE_RENDERING_SHADOWUTILS_ISPOSMVISIBLE_OFFSET UNITYSDK_OFFSET(0x1F3F9E10)
#define UNITYENGINE_RENDERING_SHADOWUTILS_ISVSMDEBUG_OFFSET UNITYSDK_OFFSET(0x1F3F9F40)
#define UNITYENGINE_RENDERING_SHADOWUTILS_ONLOADINGFINISHED_OFFSET UNITYSDK_OFFSET(0x1F3F9F60)
#define UNITYENGINE_RENDERING_SHADOWUTILS_REMOVEVIRTUALPOSITIONSHADOW_OFFSET UNITYSDK_OFFSET(0x1F3F9E70)
#define UNITYENGINE_RENDERING_SHADOWUTILS_RESETTODEFAULTCSMUPDATESETTING_OFFSET UNITYSDK_OFFSET(0x1F3F9E40)
#define UNITYENGINE_RENDERING_SHADOWUTILS_SETCSMCASCADECOUNT_OFFSET UNITYSDK_OFFSET(0x1F3F9E20)
#define UNITYENGINE_RENDERING_SHADOWUTILS_SETCSMUPDATEFRAMES_OFFSET UNITYSDK_OFFSET(0x1F3F9E30)
#define UNITYENGINE_RENDERING_SHADOWUTILS_SETCUSTOMSHADOW_OFFSET UNITYSDK_OFFSET(0x1F3F9DF0)
#define UNITYENGINE_RENDERING_SHADOWUTILS_SETOVERRIDESELFSHADOWBOUNDS_OFFSET UNITYSDK_OFFSET(0x1F3F9E90)
#define UNITYENGINE_RENDERING_SHADOWUTILS_SETPEROBJECTSHADOWPRORITY_OFFSET UNITYSDK_OFFSET(0x1F3F9E00)
#define UNITYENGINE_RENDERING_SHADOWUTILS_SETPEROBJECTSHADOWVOLUMEEXTENT_OFFSET UNITYSDK_OFFSET(0x1F3F9F70)
#define UNITYENGINE_RENDERING_SHADOWUTILS_SETRENDERLAYERMASK_OFFSET UNITYSDK_OFFSET(0x1F3F9DB0)
#define UNITYENGINE_RENDERING_SHADOWUTILS_SETSHADOWPLAYER_OFFSET UNITYSDK_OFFSET(0x1F3F9DA0)
#define UNITYENGINE_RENDERING_SHADOWUTILS_SETSHADOWRUNTINGSETTINGS_OFFSET UNITYSDK_OFFSET(0x1F3F9D90)
#define UNITYENGINE_RENDERING_SHADOWUTILS_SETVSMCULLINGMASK_OFFSET UNITYSDK_OFFSET(0x1F3F9F50)
#define UNITYENGINE_RENDERING_SHADOWUTILS_SETVSMSETTINGS_OFFSET UNITYSDK_OFFSET(0x1F3F9F30)
#define UNITYENGINE_RENDERING_SHADOWUTILS_UPDATEVIRTUALPOSITIONSHADOW_OFFSET UNITYSDK_OFFSET(0x1F3F9E60)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ShadowUtils_TypeDefinitionIndex = 4894;

	class ShadowUtils : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::ShadowRuntimeSettings GetShadowRuntingSettings()
		{
			return ((::UnityEngine::Rendering::ShadowRuntimeSettings(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADOWUTILS_GETSHADOWRUNTINGSETTINGS_OFFSET))();
		}

		static ::System::Void SetShadowRuntingSettings(::UnityEngine::Rendering::ShadowRuntimeSettings& a1)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ShadowRuntimeSettings&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADOWUTILS_SETSHADOWRUNTINGSETTINGS_OFFSET))(a1);
		}

		static ::System::Void SetShadowPlayer(::System::Boolean a1, ::System::Int32 a2, ::UnityEngine::GameObject* a3)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Int32, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADOWUTILS_SETSHADOWPLAYER_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetRenderLayerMask(::UnityEngine::Rendering::ShadowRenderingLayers& a1)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ShadowRenderingLayers&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADOWUTILS_SETRENDERLAYERMASK_OFFSET))(a1);
		}

		static ::System::Void CleanupShadowCache(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADOWUTILS_CLEANUPSHADOWCACHE_OFFSET))(a1, a2);
		}

		static ::System::Void ForceUpdateShadow(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADOWUTILS_FORCEUPDATESHADOW_OFFSET))(a1, a2, a3);
		}

		static ::System::Void EnableLightShadow(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADOWUTILS_ENABLELIGHTSHADOW_OFFSET))(a1, a2);
		}

		static ::System::Void SetCustomShadow(::System::Int32 a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADOWUTILS_SETCUSTOMSHADOW_OFFSET))(a1, a2);
		}

		static ::System::Boolean SetPerObjectShadowPrority(::UnityEngine::GameObject* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADOWUTILS_SETPEROBJECTSHADOWPRORITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsPOSMVisible(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADOWUTILS_ISPOSMVISIBLE_OFFSET))(a1);
		}

		static ::System::Void SetCSMCascadeCount(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADOWUTILS_SETCSMCASCADECOUNT_OFFSET))(a1, a2);
		}

		static ::System::Boolean SetCSMUpdateFrames(::System::Int32 a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADOWUTILS_SETCSMUPDATEFRAMES_OFFSET))(a1, a2);
		}

		static ::System::Void ResetToDefaultCSMUpdateSetting()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADOWUTILS_RESETTODEFAULTCSMUPDATESETTING_OFFSET))();
		}

		static ::System::Int32 AddVirtualPositionShadow(::System::Int32 a1, ::UnityEngine::Vector3& a2)
		{
			return ((::System::Int32(*)(::System::Int32, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADOWUTILS_ADDVIRTUALPOSITIONSHADOW_OFFSET))(a1, a2);
		}

		static ::System::Boolean UpdateVirtualPositionShadow(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Vector3& a3)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADOWUTILS_UPDATEVIRTUALPOSITIONSHADOW_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean RemoveVirtualPositionShadow(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADOWUTILS_REMOVEVIRTUALPOSITIONSHADOW_OFFSET))(a1, a2);
		}

		static ::System::Void BindSelfShadowLight(::UnityEngine::GameObject* a1, ::UnityEngine::Light* a2)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::Light*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADOWUTILS_BINDSELFSHADOWLIGHT_OFFSET))(a1, a2);
		}

		static ::System::Boolean SetOverrideSelfShadowBounds(::UnityEngine::GameObject* a1, ::System::Boolean a2, ::UnityEngine::Bounds& a3)
		{
			return ((::System::Boolean(*)(::UnityEngine::GameObject*, ::System::Boolean, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADOWUTILS_SETOVERRIDESELFSHADOWBOUNDS_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Rendering::VsmSettings GetVsmSettings()
		{
			return ((::UnityEngine::Rendering::VsmSettings(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADOWUTILS_GETVSMSETTINGS_OFFSET))();
		}

		static ::System::Void SetVsmSettings(::UnityEngine::Rendering::VsmSettings& a1)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::VsmSettings&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADOWUTILS_SETVSMSETTINGS_OFFSET))(a1);
		}

		static ::System::Boolean IsVsmDebug()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADOWUTILS_ISVSMDEBUG_OFFSET))();
		}

		static ::System::Void SetVsmCullingMask(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADOWUTILS_SETVSMCULLINGMASK_OFFSET))(a1);
		}

		static ::System::Void OnLoadingFinished()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADOWUTILS_ONLOADINGFINISHED_OFFSET))();
		}

		static ::System::Void SetPerObjectShadowVolumeExtent(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADOWUTILS_SETPEROBJECTSHADOWVOLUMEEXTENT_OFFSET))(a1, a2);
		}

		static ::System::Void GetShadowRuntingSettings_Injected(::UnityEngine::Rendering::ShadowRuntimeSettings& a1)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ShadowRuntimeSettings&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADOWUTILS_GETSHADOWRUNTINGSETTINGS_INJECTED_OFFSET))(a1);
		}

		static ::System::Void GetVsmSettings_Injected(::UnityEngine::Rendering::VsmSettings& a1)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::VsmSettings&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADOWUTILS_GETVSMSETTINGS_INJECTED_OFFSET))(a1);
		}
	};
}
