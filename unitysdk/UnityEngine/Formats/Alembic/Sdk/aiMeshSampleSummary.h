#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/Bool.h"

#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIMESHSAMPLESUMMARY_GET_INDEXCOUNT_OFFSET UNITYSDK_OFFSET(0x68F0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIMESHSAMPLESUMMARY_GET_SPLITCOUNT_OFFSET UNITYSDK_OFFSET(0x1DA80)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIMESHSAMPLESUMMARY_GET_SUBMESHCOUNT_OFFSET UNITYSDK_OFFSET(0xD240)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIMESHSAMPLESUMMARY_GET_TOPOLOGYCHANGED_OFFSET UNITYSDK_OFFSET(0x75710)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIMESHSAMPLESUMMARY_GET_VERTEXCOUNT_OFFSET UNITYSDK_OFFSET(0x15A8520)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIMESHSAMPLESUMMARY_GET_VISIBILITY_OFFSET UNITYSDK_OFFSET(0x2A500)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIMESHSAMPLESUMMARY_SET_INDEXCOUNT_OFFSET UNITYSDK_OFFSET(0x26F0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIMESHSAMPLESUMMARY_SET_SPLITCOUNT_OFFSET UNITYSDK_OFFSET(0x1D50)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIMESHSAMPLESUMMARY_SET_SUBMESHCOUNT_OFFSET UNITYSDK_OFFSET(0xD250)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIMESHSAMPLESUMMARY_SET_TOPOLOGYCHANGED_OFFSET UNITYSDK_OFFSET(0x75720)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIMESHSAMPLESUMMARY_SET_VERTEXCOUNT_OFFSET UNITYSDK_OFFSET(0x22D8250)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIMESHSAMPLESUMMARY_SET_VISIBILITY_OFFSET UNITYSDK_OFFSET(0xD87E0)

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int aiMeshSampleSummary_TypeDefinitionIndex = 40802;

	struct alignas(4) aiMeshSampleSummary
	{
		::UnityEngine::Formats::Alembic::Sdk::Bool _visibility_k__BackingField; // 0x10
		::System::Int32 _splitCount_k__BackingField; // 0x14
		::System::Int32 _submeshCount_k__BackingField; // 0x18
		::System::Int32 _vertexCount_k__BackingField; // 0x1C
		::System::Int32 _indexCount_k__BackingField; // 0x20
		::UnityEngine::Formats::Alembic::Sdk::Bool _topologyChanged_k__BackingField; // 0x24

		::UnityEngine::Formats::Alembic::Sdk::Bool get_visibility()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::Bool(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIMESHSAMPLESUMMARY_GET_VISIBILITY_OFFSET))(this);
		}

		::System::Void set_visibility(::UnityEngine::Formats::Alembic::Sdk::Bool value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::Bool))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIMESHSAMPLESUMMARY_SET_VISIBILITY_OFFSET))(this, value);
		}

		::System::Int32 get_splitCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIMESHSAMPLESUMMARY_GET_SPLITCOUNT_OFFSET))(this);
		}

		::System::Void set_splitCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIMESHSAMPLESUMMARY_SET_SPLITCOUNT_OFFSET))(this, value);
		}

		::System::Int32 get_submeshCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIMESHSAMPLESUMMARY_GET_SUBMESHCOUNT_OFFSET))(this);
		}

		::System::Void set_submeshCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIMESHSAMPLESUMMARY_SET_SUBMESHCOUNT_OFFSET))(this, value);
		}

		::System::Int32 get_vertexCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIMESHSAMPLESUMMARY_GET_VERTEXCOUNT_OFFSET))(this);
		}

		::System::Void set_vertexCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIMESHSAMPLESUMMARY_SET_VERTEXCOUNT_OFFSET))(this, value);
		}

		::System::Int32 get_indexCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIMESHSAMPLESUMMARY_GET_INDEXCOUNT_OFFSET))(this);
		}

		::System::Void set_indexCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIMESHSAMPLESUMMARY_SET_INDEXCOUNT_OFFSET))(this, value);
		}

		::UnityEngine::Formats::Alembic::Sdk::Bool get_topologyChanged()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::Bool(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIMESHSAMPLESUMMARY_GET_TOPOLOGYCHANGED_OFFSET))(this);
		}

		::System::Void set_topologyChanged(::UnityEngine::Formats::Alembic::Sdk::Bool value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::Bool))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIMESHSAMPLESUMMARY_SET_TOPOLOGYCHANGED_OFFSET))(this, value);
		}
	};
}
