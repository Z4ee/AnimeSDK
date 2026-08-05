#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }

#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUME_NATIVESRP_GET_PROFILEREF_OFFSET UNITYSDK_OFFSET(0x1EB5AA20)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUME_NATIVESRP_GET_PROFILE_OFFSET UNITYSDK_OFFSET(0x1EB5A640)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUME_NATIVESRP_HASINSTANTIATEDPROFILE_OFFSET UNITYSDK_OFFSET(0x1EB5AB60)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUME_NATIVESRP_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1EB5AD10)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUME_NATIVESRP_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1EB5AC70)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUME_NATIVESRP_SET_PROFILE_OFFSET UNITYSDK_OFFSET(0x1EB5AA10)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUME_NATIVESRP_UPDATELAYER_OFFSET UNITYSDK_OFFSET(0x1EB5AE40)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUME_NATIVESRP_UPDATE_OFFSET UNITYSDK_OFFSET(0x1EB5ADA0)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUME_NATIVESRP__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB5AEF0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int Volume_NativeSRP_TypeDefinitionIndex = 6079;

	class Volume_NativeSRP : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean isGlobal; // 0x18
		::System::Single priority; // 0x1C
		::System::Single blendDistance; // 0x20
		::System::Single weight; // 0x24
		::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* sharedProfile; // 0x28
		::System::Int32 m_PreviousLayer; // 0x30
		::System::Single m_PreviousPriority; // 0x34
		::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* m_InternalProfile; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUME_NATIVESRP__CTOR_OFFSET))(this);
		}

		::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* get_profile()
		{
			return ((::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUME_NATIVESRP_GET_PROFILE_OFFSET))(this);
		}

		::System::Void set_profile(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUME_NATIVESRP_SET_PROFILE_OFFSET))(this, value);
		}

		::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* get_profileRef()
		{
			return ((::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUME_NATIVESRP_GET_PROFILEREF_OFFSET))(this);
		}

		::System::Boolean HasInstantiatedProfile()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUME_NATIVESRP_HASINSTANTIATEDPROFILE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUME_NATIVESRP_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUME_NATIVESRP_ONDISABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUME_NATIVESRP_UPDATE_OFFSET))(this);
		}

		::System::Void UpdateLayer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUME_NATIVESRP_UPDATELAYER_OFFSET))(this);
		}
	};
}
