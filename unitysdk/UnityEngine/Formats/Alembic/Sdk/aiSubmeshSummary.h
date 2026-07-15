#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiTopology.h"

#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AISUBMESHSUMMARY_GET_INDEXCOUNT_OFFSET UNITYSDK_OFFSET(0x676EB0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AISUBMESHSUMMARY_GET_SPLITINDEX_OFFSET UNITYSDK_OFFSET(0x167710)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AISUBMESHSUMMARY_GET_SUBMESHINDEX_OFFSET UNITYSDK_OFFSET(0x7A7C20)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AISUBMESHSUMMARY_GET_TOPOLOGY_OFFSET UNITYSDK_OFFSET(0x7A7E30)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AISUBMESHSUMMARY_SET_INDEXCOUNT_OFFSET UNITYSDK_OFFSET(0x38C2BD0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AISUBMESHSUMMARY_SET_SPLITINDEX_OFFSET UNITYSDK_OFFSET(0x167520)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AISUBMESHSUMMARY_SET_SUBMESHINDEX_OFFSET UNITYSDK_OFFSET(0xA4B350)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AISUBMESHSUMMARY_SET_TOPOLOGY_OFFSET UNITYSDK_OFFSET(0x39EC370)

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int aiSubmeshSummary_TypeDefinitionIndex = 42490;

	struct alignas(4) aiSubmeshSummary
	{
		::System::Int32 _splitIndex_k__BackingField; // 0x10
		::System::Int32 _submeshIndex_k__BackingField; // 0x14
		::System::Int32 _indexCount_k__BackingField; // 0x18
		::UnityEngine::Formats::Alembic::Sdk::aiTopology _topology_k__BackingField; // 0x1C

		::System::Int32 get_splitIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AISUBMESHSUMMARY_GET_SPLITINDEX_OFFSET))(this);
		}

		::System::Void set_splitIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AISUBMESHSUMMARY_SET_SPLITINDEX_OFFSET))(this, a1);
		}

		::System::Int32 get_submeshIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AISUBMESHSUMMARY_GET_SUBMESHINDEX_OFFSET))(this);
		}

		::System::Void set_submeshIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AISUBMESHSUMMARY_SET_SUBMESHINDEX_OFFSET))(this, a1);
		}

		::System::Int32 get_indexCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AISUBMESHSUMMARY_GET_INDEXCOUNT_OFFSET))(this);
		}

		::System::Void set_indexCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AISUBMESHSUMMARY_SET_INDEXCOUNT_OFFSET))(this, a1);
		}

		::UnityEngine::Formats::Alembic::Sdk::aiTopology get_topology()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiTopology(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AISUBMESHSUMMARY_GET_TOPOLOGY_OFFSET))(this);
		}

		::System::Void set_topology(::UnityEngine::Formats::Alembic::Sdk::aiTopology a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::aiTopology))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AISUBMESHSUMMARY_SET_TOPOLOGY_OFFSET))(this, a1);
		}
	};
}
