#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_8649573A691533F8.h"

class Class_0_16E4307DCC419505_2;
class MonoRenderEntity;
class VolumetricCloudLayoutHelper;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Rendering::Universal { class DeferredReflectionProbe; }
namespace UnityEngine::Rendering::Universal { class UniversalAdditionalCameraData; }
namespace UnityEngine::Rendering::Universal { class UniversalAdditionalLightData; }
namespace UnityEngine::Rendering::Universal::Internal { class DecalProjector; }
namespace UnityEngine::Rendering::Universal::Internal { class RuntimePostLight; }
template <typename T> class Class_1_3B365E645019A36F;

#define UNITYENGINE_RENDERING_UNIVERSAL_GLOBALTICKMANAGERURP_INITDELAYREFRESHLIST_OFFSET UNITYSDK_OFFSET(0x1D3D4430)
#define UNITYENGINE_RENDERING_UNIVERSAL_GLOBALTICKMANAGERURP_ONFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1D3D4640)
#define UNITYENGINE_RENDERING_UNIVERSAL_GLOBALTICKMANAGERURP_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1D3D45D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GLOBALTICKMANAGERURP_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1D3D4540)
#define UNITYENGINE_RENDERING_UNIVERSAL_GLOBALTICKMANAGERURP__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3D46B0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int GlobalTickManagerURP_TypeDefinitionIndex = 26411;

	class GlobalTickManagerURP : public ::Class_2_8649573A691533F8<::UnityEngine::Rendering::Universal::GlobalTickManagerURP*>
	{
	public:
		::Class_1_3B365E645019A36F<::UnityEngine::Rendering::Universal::Internal::DecalProjector*>* _decalProjectors; // 0x18
		::Class_1_3B365E645019A36F<::VolumetricCloudLayoutHelper*>* _volumetricCloudLayoutHelpers; // 0x20
		::Class_1_3B365E645019A36F<::UnityEngine::Rendering::Universal::DeferredReflectionProbe*>* _deferredReflectionProbes; // 0x28
		::Class_1_3B365E645019A36F<::UnityEngine::Rendering::Universal::Internal::RuntimePostLight*>* _runtimePostLights; // 0x30
		::Class_1_3B365E645019A36F<::MonoRenderEntity*>* _monoRenderEntitySet; // 0x38
		::Class_1_3B365E645019A36F<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>* _universalAdditionalCameraData; // 0x40
		::Class_1_3B365E645019A36F<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*>* _universalAdditionalLightData; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GLOBALTICKMANAGERURP__CTOR_OFFSET))(this);
		}

		::System::Void InitDelayRefreshList(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_2*>* delayRefreshList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_2*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GLOBALTICKMANAGERURP_INITDELAYREFRESHLIST_OFFSET))(this, delayRefreshList);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GLOBALTICKMANAGERURP_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GLOBALTICKMANAGERURP_ONLATEUPDATE_OFFSET))(this);
		}

		::System::Void OnFixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GLOBALTICKMANAGERURP_ONFIXEDUPDATE_OFFSET))(this);
		}
	};
}
