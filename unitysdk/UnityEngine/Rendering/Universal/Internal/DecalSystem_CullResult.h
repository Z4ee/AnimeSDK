#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::Rendering::Universal::Internal { class DecalSystem_CullResult_Set; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_CULLRESULT_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A6F04B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_CULLRESULT_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1A6F07C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_CULLRESULT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A6F06D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_CULLRESULT_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1A6F0320)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_CULLRESULT_GET_REQUESTS_OFFSET UNITYSDK_OFFSET(0x1A6F0310)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_CULLRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6F0880)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int DecalSystem_CullResult_TypeDefinitionIndex = 30347;

	class DecalSystem_CullResult : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Rendering::Universal::Internal::DecalSystem_CullResult_Set*>* m_Requests; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_CULLRESULT__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Rendering::Universal::Internal::DecalSystem_CullResult_Set*>* get_requests()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Rendering::Universal::Internal::DecalSystem_CullResult_Set*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_CULLRESULT_GET_REQUESTS_OFFSET))(this);
		}

		::UnityEngine::Rendering::Universal::Internal::DecalSystem_CullResult_Set* get_Item(::System::Int32 index)
		{
			return ((::UnityEngine::Rendering::Universal::Internal::DecalSystem_CullResult_Set*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_CULLRESULT_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_CULLRESULT_CLEAR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_CULLRESULT_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_CULLRESULT_DISPOSE_1_OFFSET))(this, disposing);
		}
	};
}
