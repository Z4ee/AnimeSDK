#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::Rendering::Universal::Internal { class DecalSystem_CullRequest_Set; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_CULLREQUEST_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A6A19E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_CULLREQUEST_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1A6A1CC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_CULLREQUEST_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A6A1BD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_CULLREQUEST_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1A6A1850)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_CULLREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6A1D80)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int DecalSystem_CullRequest_TypeDefinitionIndex = 30349;

	class DecalSystem_CullRequest : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Rendering::Universal::Internal::DecalSystem_CullRequest_Set*>* m_Requests; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_CULLREQUEST__CTOR_OFFSET))(this);
		}

		::UnityEngine::Rendering::Universal::Internal::DecalSystem_CullRequest_Set* get_Item(::System::Int32 index)
		{
			return ((::UnityEngine::Rendering::Universal::Internal::DecalSystem_CullRequest_Set*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_CULLREQUEST_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_CULLREQUEST_CLEAR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_CULLREQUEST_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_CULLREQUEST_DISPOSE_1_OFFSET))(this, disposing);
		}
	};
}
