#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/Bool.h"

#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIMESHSAMPLESUMMARY_GET_INDEXCOUNT_OFFSET UNITYSDK_OFFSET(0x6E30)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIMESHSAMPLESUMMARY_GET_SPLITCOUNT_OFFSET UNITYSDK_OFFSET(0x1E120)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIMESHSAMPLESUMMARY_GET_SUBMESHCOUNT_OFFSET UNITYSDK_OFFSET(0xDAB0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIMESHSAMPLESUMMARY_GET_TOPOLOGYCHANGED_OFFSET UNITYSDK_OFFSET(0x2DE56A0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIMESHSAMPLESUMMARY_GET_VERTEXCOUNT_OFFSET UNITYSDK_OFFSET(0x8A3A0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIMESHSAMPLESUMMARY_GET_VISIBILITY_OFFSET UNITYSDK_OFFSET(0x2FC10)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIMESHSAMPLESUMMARY_SET_INDEXCOUNT_OFFSET UNITYSDK_OFFSET(0x2AA0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIMESHSAMPLESUMMARY_SET_SPLITCOUNT_OFFSET UNITYSDK_OFFSET(0x2200)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIMESHSAMPLESUMMARY_SET_SUBMESHCOUNT_OFFSET UNITYSDK_OFFSET(0xDAC0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIMESHSAMPLESUMMARY_SET_TOPOLOGYCHANGED_OFFSET UNITYSDK_OFFSET(0x2DE56B0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIMESHSAMPLESUMMARY_SET_VERTEXCOUNT_OFFSET UNITYSDK_OFFSET(0x154E60)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIMESHSAMPLESUMMARY_SET_VISIBILITY_OFFSET UNITYSDK_OFFSET(0x14E860)

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int aiMeshSampleSummary_TypeDefinitionIndex = 44670;

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

		::System::Void set_visibility(::UnityEngine::Formats::Alembic::Sdk::Bool a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::Bool))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIMESHSAMPLESUMMARY_SET_VISIBILITY_OFFSET))(this, a1);
		}

		::System::Int32 get_splitCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIMESHSAMPLESUMMARY_GET_SPLITCOUNT_OFFSET))(this);
		}

		::System::Void set_splitCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIMESHSAMPLESUMMARY_SET_SPLITCOUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_submeshCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIMESHSAMPLESUMMARY_GET_SUBMESHCOUNT_OFFSET))(this);
		}

		::System::Void set_submeshCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIMESHSAMPLESUMMARY_SET_SUBMESHCOUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_vertexCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIMESHSAMPLESUMMARY_GET_VERTEXCOUNT_OFFSET))(this);
		}

		::System::Void set_vertexCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIMESHSAMPLESUMMARY_SET_VERTEXCOUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_indexCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIMESHSAMPLESUMMARY_GET_INDEXCOUNT_OFFSET))(this);
		}

		::System::Void set_indexCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIMESHSAMPLESUMMARY_SET_INDEXCOUNT_OFFSET))(this, a1);
		}

		::UnityEngine::Formats::Alembic::Sdk::Bool get_topologyChanged()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::Bool(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIMESHSAMPLESUMMARY_GET_TOPOLOGYCHANGED_OFFSET))(this);
		}

		::System::Void set_topologyChanged(::UnityEngine::Formats::Alembic::Sdk::Bool a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::Bool))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIMESHSAMPLESUMMARY_SET_TOPOLOGYCHANGED_OFFSET))(this, a1);
		}
	};
}
