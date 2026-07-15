#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AISAMPLESELECTOR_GET_REQUESTEDINDEX_OFFSET UNITYSDK_OFFSET(0x1651A0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AISAMPLESELECTOR_GET_REQUESTEDTIMEINDEXTYPE_OFFSET UNITYSDK_OFFSET(0x691EF0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AISAMPLESELECTOR_GET_REQUESTEDTIME_OFFSET UNITYSDK_OFFSET(0x39275E0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AISAMPLESELECTOR_SET_REQUESTEDINDEX_OFFSET UNITYSDK_OFFSET(0x164FF0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AISAMPLESELECTOR_SET_REQUESTEDTIMEINDEXTYPE_OFFSET UNITYSDK_OFFSET(0x38C6D30)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AISAMPLESELECTOR_SET_REQUESTEDTIME_OFFSET UNITYSDK_OFFSET(0x3A22940)

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int aiSampleSelector_TypeDefinitionIndex = 42486;

	struct alignas(8) aiSampleSelector
	{
		::System::UInt64 _requestedIndex_k__BackingField; // 0x10
		::System::Double _requestedTime_k__BackingField; // 0x18
		::System::Int32 _requestedTimeIndexType_k__BackingField; // 0x20

		::System::UInt64 get_requestedIndex()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AISAMPLESELECTOR_GET_REQUESTEDINDEX_OFFSET))(this);
		}

		::System::Void set_requestedIndex(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AISAMPLESELECTOR_SET_REQUESTEDINDEX_OFFSET))(this, a1);
		}

		::System::Double get_requestedTime()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AISAMPLESELECTOR_GET_REQUESTEDTIME_OFFSET))(this);
		}

		::System::Void set_requestedTime(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AISAMPLESELECTOR_SET_REQUESTEDTIME_OFFSET))(this, a1);
		}

		::System::Int32 get_requestedTimeIndexType()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AISAMPLESELECTOR_GET_REQUESTEDTIMEINDEXTYPE_OFFSET))(this);
		}

		::System::Void set_requestedTimeIndexType(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AISAMPLESELECTOR_SET_REQUESTEDTIMEINDEXTYPE_OFFSET))(this, a1);
		}
	};
}
