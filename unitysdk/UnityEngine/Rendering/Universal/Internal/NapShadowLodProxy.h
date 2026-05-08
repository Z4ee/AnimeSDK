#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/NapLodProxy.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Rendering::Universal { class UniversalRenderPipelineAsset; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPSHADOWLODPROXY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1AD0AE20)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPSHADOWLODPROXY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1AD0ABD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPSHADOWLODPROXY_UPDATELODINFO_OFFSET UNITYSDK_OFFSET(0x1AD0AEA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPSHADOWLODPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD0B070)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int NapShadowLodProxy_TypeDefinitionIndex = 30454;

	class NapShadowLodProxy : public ::UnityEngine::Rendering::Universal::Internal::NapLodProxy
	{
	public:
		::Il2CppArray<::UnityEngine::MeshRenderer*>* renderList; // 0x18
		::Il2CppArray<::UnityEngine::Transform*>* transformList; // 0x20
		::System::Single m_HideDistanceSqr; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPSHADOWLODPROXY__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPSHADOWLODPROXY_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPSHADOWLODPROXY_ONDISABLE_OFFSET))(this);
		}

		::System::Void UpdateLodInfo(::UnityEngine::Vector3 triggerPos, ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* globalSettings)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPSHADOWLODPROXY_UPDATELODINFO_OFFSET))(this, triggerPos, globalSettings);
		}
	};
}
