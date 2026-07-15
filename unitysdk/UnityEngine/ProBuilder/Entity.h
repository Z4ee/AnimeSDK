#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/ProBuilder/EntityType.h"

#define UNITYENGINE_PROBUILDER_ENTITY_AWAKE_OFFSET UNITYSDK_OFFSET(0xC084550)
#define UNITYENGINE_PROBUILDER_ENTITY_GET_ENTITYTYPE_OFFSET UNITYSDK_OFFSET(0xC084540)
#define UNITYENGINE_PROBUILDER_ENTITY_SETENTITY_OFFSET UNITYSDK_OFFSET(0xC0845F0)
#define UNITYENGINE_PROBUILDER_ENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0xC084600)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int Entity_TypeDefinitionIndex = 41553;

	class Entity : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::ProBuilder::EntityType m_EntityType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_ENTITY__CTOR_OFFSET))(this);
		}

		::UnityEngine::ProBuilder::EntityType get_entityType()
		{
			return ((::UnityEngine::ProBuilder::EntityType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_ENTITY_GET_ENTITYTYPE_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_ENTITY_AWAKE_OFFSET))(this);
		}

		::System::Void SetEntity(::UnityEngine::ProBuilder::EntityType a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::EntityType))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_ENTITY_SETENTITY_OFFSET))(this, a1);
		}
	};
}
