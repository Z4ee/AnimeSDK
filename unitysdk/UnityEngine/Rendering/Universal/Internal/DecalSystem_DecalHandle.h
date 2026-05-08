#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Rendering::Universal::Internal { class DecalProjector; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_DECALHANDLE_ISVALID_OFFSET UNITYSDK_OFFSET(0x19B8EBE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_DECALHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x19B8EB90)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int DecalSystem_DecalHandle_TypeDefinitionIndex = 30351;

	class DecalSystem_DecalHandle : public ::System::Object
	{
	public:
		::UnityEngine::Rendering::Universal::Internal::DecalProjector* m_Projector; // 0x10
		::System::Int32 m_InstanceID; // 0x18
		::System::Int32 cachedSiblingIndex; // 0x1C
		::System::Int32 m_Index; // 0x20

		::System::Void _ctor(::System::Int32 index, ::System::Int32 instanceID, ::UnityEngine::Rendering::Universal::Internal::DecalProjector* projector)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Rendering::Universal::Internal::DecalProjector*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_DECALHANDLE__CTOR_OFFSET))(this, index, instanceID, projector);
		}

		static ::System::Boolean IsValid(::UnityEngine::Rendering::Universal::Internal::DecalSystem_DecalHandle* handle)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::Universal::Internal::DecalSystem_DecalHandle*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_DECALHANDLE_ISVALID_OFFSET))(handle);
		}
	};
}
