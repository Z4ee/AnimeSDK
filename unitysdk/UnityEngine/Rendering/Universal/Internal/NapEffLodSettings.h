#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/ENapLodType.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/ENapRenderItemType.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/NapLodProxy.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Renderer; }
namespace UnityEngine::Rendering::Universal { class UniversalRenderPipelineAsset; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPEFFLODSETTINGS_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1C407770)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPEFFLODSETTINGS_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1C4072B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPEFFLODSETTINGS_REFRESHVALUE_OFFSET UNITYSDK_OFFSET(0x1C4074C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPEFFLODSETTINGS_UPDATELODINFO_OFFSET UNITYSDK_OFFSET(0x1C407690)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPEFFLODSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4077F0)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int NapEffLodSettings_TypeDefinitionIndex = 27238;

	class NapEffLodSettings : public ::UnityEngine::Rendering::Universal::Internal::NapLodProxy
	{
	public:
		::UnityEngine::Rendering::Universal::Internal::ENapRenderItemType m_RenderItemType; // 0x18
		::UnityEngine::Rendering::Universal::Internal::ENapLodType m_LodType; // 0x1C
		::UnityEngine::Renderer* m_Renderer; // 0x20
		::System::Boolean isStaticMesh; // 0x28
		::UnityEngine::Vector3 thisPositionWS; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPEFFLODSETTINGS__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPEFFLODSETTINGS_ONENABLE_OFFSET))(this);
		}

		::System::Void UpdateLodInfo(::UnityEngine::Vector3 triggerPos, ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* globalSettings)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPEFFLODSETTINGS_UPDATELODINFO_OFFSET))(this, triggerPos, globalSettings);
		}

		::System::Void RefreshValue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPEFFLODSETTINGS_REFRESHVALUE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPEFFLODSETTINGS_ONDISABLE_OFFSET))(this);
		}
	};
}
