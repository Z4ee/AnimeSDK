#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aeTopology.h"

#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AESUBMESHDATA_GET_INDEXCOUNT_OFFSET UNITYSDK_OFFSET(0xD240)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AESUBMESHDATA_GET_INDEXES_OFFSET UNITYSDK_OFFSET(0x5580)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AESUBMESHDATA_GET_TOPOLOGY_OFFSET UNITYSDK_OFFSET(0x15A8520)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AESUBMESHDATA_SET_INDEXCOUNT_OFFSET UNITYSDK_OFFSET(0xD250)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AESUBMESHDATA_SET_INDEXES_OFFSET UNITYSDK_OFFSET(0xBDC0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AESUBMESHDATA_SET_TOPOLOGY_OFFSET UNITYSDK_OFFSET(0x22D8250)

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int aeSubmeshData_TypeDefinitionIndex = 40779;

	struct alignas(8) aeSubmeshData
	{
		::System::IntPtr _indexes_k__BackingField; // 0x10
		::System::Int32 _indexCount_k__BackingField; // 0x18
		::UnityEngine::Formats::Alembic::Sdk::aeTopology _topology_k__BackingField; // 0x1C

		::System::IntPtr get_indexes()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AESUBMESHDATA_GET_INDEXES_OFFSET))(this);
		}

		::System::Void set_indexes(::System::IntPtr value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AESUBMESHDATA_SET_INDEXES_OFFSET))(this, value);
		}

		::System::Int32 get_indexCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AESUBMESHDATA_GET_INDEXCOUNT_OFFSET))(this);
		}

		::System::Void set_indexCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AESUBMESHDATA_SET_INDEXCOUNT_OFFSET))(this, value);
		}

		::UnityEngine::Formats::Alembic::Sdk::aeTopology get_topology()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aeTopology(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AESUBMESHDATA_GET_TOPOLOGY_OFFSET))(this);
		}

		::System::Void set_topology(::UnityEngine::Formats::Alembic::Sdk::aeTopology value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::aeTopology))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AESUBMESHDATA_SET_TOPOLOGY_OFFSET))(this, value);
		}
	};
}
