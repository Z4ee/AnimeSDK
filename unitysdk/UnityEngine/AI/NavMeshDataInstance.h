#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Object; }

#define UNITYENGINE_AI_NAVMESHDATAINSTANCE_GET_ID_OFFSET UNITYSDK_OFFSET(0x59D0)
#define UNITYENGINE_AI_NAVMESHDATAINSTANCE_GET_VALID_OFFSET UNITYSDK_OFFSET(0x22DFB10)
#define UNITYENGINE_AI_NAVMESHDATAINSTANCE_REMOVE_OFFSET UNITYSDK_OFFSET(0x22DFB30)
#define UNITYENGINE_AI_NAVMESHDATAINSTANCE_SET_ID_OFFSET UNITYSDK_OFFSET(0x299E0)
#define UNITYENGINE_AI_NAVMESHDATAINSTANCE_SET_OWNER_OFFSET UNITYSDK_OFFSET(0x22DFB40)

namespace UnityEngine::AI
{
	inline static constexpr unsigned int NavMeshDataInstance_TypeDefinitionIndex = 5375;

	struct alignas(4) NavMeshDataInstance
	{
		::System::Int32 _id_k__BackingField; // 0x10

		::System::Boolean get_valid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHDATAINSTANCE_GET_VALID_OFFSET))(this);
		}

		::System::Int32 get_id()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHDATAINSTANCE_GET_ID_OFFSET))(this);
		}

		::System::Void set_id(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHDATAINSTANCE_SET_ID_OFFSET))(this, value);
		}

		::System::Void Remove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHDATAINSTANCE_REMOVE_OFFSET))(this);
		}

		::System::Void set_owner(::UnityEngine::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHDATAINSTANCE_SET_OWNER_OFFSET))(this, value);
		}
	};
}
