#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIMESHSPLITSUMMARY_GET_INDEXCOUNT_OFFSET UNITYSDK_OFFSET(0x68F0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIMESHSPLITSUMMARY_GET_INDEXOFFSET_OFFSET UNITYSDK_OFFSET(0x6900)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIMESHSPLITSUMMARY_GET_SUBMESHCOUNT_OFFSET UNITYSDK_OFFSET(0x59D0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIMESHSPLITSUMMARY_GET_SUBMESHOFFSET_OFFSET UNITYSDK_OFFSET(0x1DA80)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIMESHSPLITSUMMARY_GET_VERTEXCOUNT_OFFSET UNITYSDK_OFFSET(0xD240)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIMESHSPLITSUMMARY_GET_VERTEXOFFSET_OFFSET UNITYSDK_OFFSET(0x15A8520)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIMESHSPLITSUMMARY_SET_INDEXCOUNT_OFFSET UNITYSDK_OFFSET(0x26F0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIMESHSPLITSUMMARY_SET_INDEXOFFSET_OFFSET UNITYSDK_OFFSET(0x6910)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIMESHSPLITSUMMARY_SET_SUBMESHCOUNT_OFFSET UNITYSDK_OFFSET(0x299E0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIMESHSPLITSUMMARY_SET_SUBMESHOFFSET_OFFSET UNITYSDK_OFFSET(0x1D50)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIMESHSPLITSUMMARY_SET_VERTEXCOUNT_OFFSET UNITYSDK_OFFSET(0xD250)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIMESHSPLITSUMMARY_SET_VERTEXOFFSET_OFFSET UNITYSDK_OFFSET(0x22D8250)

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int aiMeshSplitSummary_TypeDefinitionIndex = 40803;

	struct alignas(4) aiMeshSplitSummary
	{
		::System::Int32 _submeshCount_k__BackingField; // 0x10
		::System::Int32 _submeshOffset_k__BackingField; // 0x14
		::System::Int32 _vertexCount_k__BackingField; // 0x18
		::System::Int32 _vertexOffset_k__BackingField; // 0x1C
		::System::Int32 _indexCount_k__BackingField; // 0x20
		::System::Int32 _indexOffset_k__BackingField; // 0x24

		::System::Int32 get_submeshCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIMESHSPLITSUMMARY_GET_SUBMESHCOUNT_OFFSET))(this);
		}

		::System::Void set_submeshCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIMESHSPLITSUMMARY_SET_SUBMESHCOUNT_OFFSET))(this, value);
		}

		::System::Int32 get_submeshOffset()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIMESHSPLITSUMMARY_GET_SUBMESHOFFSET_OFFSET))(this);
		}

		::System::Void set_submeshOffset(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIMESHSPLITSUMMARY_SET_SUBMESHOFFSET_OFFSET))(this, value);
		}

		::System::Int32 get_vertexCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIMESHSPLITSUMMARY_GET_VERTEXCOUNT_OFFSET))(this);
		}

		::System::Void set_vertexCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIMESHSPLITSUMMARY_SET_VERTEXCOUNT_OFFSET))(this, value);
		}

		::System::Int32 get_vertexOffset()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIMESHSPLITSUMMARY_GET_VERTEXOFFSET_OFFSET))(this);
		}

		::System::Void set_vertexOffset(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIMESHSPLITSUMMARY_SET_VERTEXOFFSET_OFFSET))(this, value);
		}

		::System::Int32 get_indexCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIMESHSPLITSUMMARY_GET_INDEXCOUNT_OFFSET))(this);
		}

		::System::Void set_indexCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIMESHSPLITSUMMARY_SET_INDEXCOUNT_OFFSET))(this, value);
		}

		::System::Int32 get_indexOffset()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIMESHSPLITSUMMARY_GET_INDEXOFFSET_OFFSET))(this);
		}

		::System::Void set_indexOffset(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIMESHSPLITSUMMARY_SET_INDEXOFFSET_OFFSET))(this, value);
		}
	};
}
