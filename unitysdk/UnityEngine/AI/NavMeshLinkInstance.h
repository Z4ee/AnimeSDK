#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Object; }

#define UNITYENGINE_AI_NAVMESHLINKINSTANCE_GET_ATTACHED_OFFSET UNITYSDK_OFFSET(0x387BF80)
#define UNITYENGINE_AI_NAVMESHLINKINSTANCE_GET_ID_OFFSET UNITYSDK_OFFSET(0x5FB0)
#define UNITYENGINE_AI_NAVMESHLINKINSTANCE_GET_VALID_OFFSET UNITYSDK_OFFSET(0x387BF60)
#define UNITYENGINE_AI_NAVMESHLINKINSTANCE_REMOVE_OFFSET UNITYSDK_OFFSET(0x387BF90)
#define UNITYENGINE_AI_NAVMESHLINKINSTANCE_SET_ID_OFFSET UNITYSDK_OFFSET(0x2C4C0)
#define UNITYENGINE_AI_NAVMESHLINKINSTANCE_SET_OWNER_OFFSET UNITYSDK_OFFSET(0x387BFA0)

namespace UnityEngine::AI
{
	inline static constexpr unsigned int NavMeshLinkInstance_TypeDefinitionIndex = 5654;

	struct alignas(4) NavMeshLinkInstance
	{
		::System::Int32 _id_k__BackingField; // 0x10

		::System::Boolean get_valid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINKINSTANCE_GET_VALID_OFFSET))(this);
		}

		::System::Boolean get_attached()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINKINSTANCE_GET_ATTACHED_OFFSET))(this);
		}

		::System::Int32 get_id()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINKINSTANCE_GET_ID_OFFSET))(this);
		}

		::System::Void set_id(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINKINSTANCE_SET_ID_OFFSET))(this, a1);
		}

		::System::Void Remove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINKINSTANCE_REMOVE_OFFSET))(this);
		}

		::System::Void set_owner(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINKINSTANCE_SET_OWNER_OFFSET))(this, a1);
		}
	};
}
