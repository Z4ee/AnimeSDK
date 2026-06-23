#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class CullingGroup; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_CULLREQUEST_SET_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C14A9D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_CULLREQUEST_SET_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1C14A890)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_CULLREQUEST_SET_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C14A840)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_CULLREQUEST_SET_GET_CULLINGGROUP_OFFSET UNITYSDK_OFFSET(0x1C14A830)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_CULLREQUEST_SET_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1C14AAB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_CULLREQUEST_SET__CTOR_OFFSET UNITYSDK_OFFSET(0x1C14AB10)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int DecalSystem_CullRequest_Set_TypeDefinitionIndex = 26367;

	class DecalSystem_CullRequest_Set : public ::System::Object
	{
	public:
		::UnityEngine::CullingGroup* m_CullingGroup; // 0x10
		::System::Int32 m_NumRequest; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_CULLREQUEST_SET__CTOR_OFFSET))(this);
		}

		::UnityEngine::CullingGroup* get_cullingGroup()
		{
			return ((::UnityEngine::CullingGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_CULLREQUEST_SET_GET_CULLINGGROUP_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_CULLREQUEST_SET_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_CULLREQUEST_SET_DISPOSE_1_OFFSET))(this, disposing);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_CULLREQUEST_SET_CLEAR_OFFSET))(this);
		}

		::System::Void Initialize(::System::Int32 numRequests, ::UnityEngine::CullingGroup* cullingGroup)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::CullingGroup*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_CULLREQUEST_SET_INITIALIZE_OFFSET))(this, numRequests, cullingGroup);
		}
	};
}
