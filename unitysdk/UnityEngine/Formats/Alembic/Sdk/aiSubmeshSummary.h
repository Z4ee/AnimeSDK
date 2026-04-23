#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiTopology.h"

#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AISUBMESHSUMMARY_GET_INDEXCOUNT_OFFSET UNITYSDK_OFFSET(0xD240)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AISUBMESHSUMMARY_GET_SPLITINDEX_OFFSET UNITYSDK_OFFSET(0x59D0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AISUBMESHSUMMARY_GET_SUBMESHINDEX_OFFSET UNITYSDK_OFFSET(0x1DA80)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AISUBMESHSUMMARY_GET_TOPOLOGY_OFFSET UNITYSDK_OFFSET(0x15A8520)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AISUBMESHSUMMARY_SET_INDEXCOUNT_OFFSET UNITYSDK_OFFSET(0xD250)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AISUBMESHSUMMARY_SET_SPLITINDEX_OFFSET UNITYSDK_OFFSET(0x299E0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AISUBMESHSUMMARY_SET_SUBMESHINDEX_OFFSET UNITYSDK_OFFSET(0x1D50)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AISUBMESHSUMMARY_SET_TOPOLOGY_OFFSET UNITYSDK_OFFSET(0x22D8250)

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int aiSubmeshSummary_TypeDefinitionIndex = 40804;

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

		::System::Void set_splitIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AISUBMESHSUMMARY_SET_SPLITINDEX_OFFSET))(this, value);
		}

		::System::Int32 get_submeshIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AISUBMESHSUMMARY_GET_SUBMESHINDEX_OFFSET))(this);
		}

		::System::Void set_submeshIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AISUBMESHSUMMARY_SET_SUBMESHINDEX_OFFSET))(this, value);
		}

		::System::Int32 get_indexCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AISUBMESHSUMMARY_GET_INDEXCOUNT_OFFSET))(this);
		}

		::System::Void set_indexCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AISUBMESHSUMMARY_SET_INDEXCOUNT_OFFSET))(this, value);
		}

		::UnityEngine::Formats::Alembic::Sdk::aiTopology get_topology()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiTopology(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AISUBMESHSUMMARY_GET_TOPOLOGY_OFFSET))(this);
		}

		::System::Void set_topology(::UnityEngine::Formats::Alembic::Sdk::aiTopology value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::aiTopology))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AISUBMESHSUMMARY_SET_TOPOLOGY_OFFSET))(this, value);
		}
	};
}
