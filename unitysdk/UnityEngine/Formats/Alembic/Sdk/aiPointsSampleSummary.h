#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOINTSSAMPLESUMMARY_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x167710)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOINTSSAMPLESUMMARY_SET_COUNT_OFFSET UNITYSDK_OFFSET(0x167520)

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int aiPointsSampleSummary_TypeDefinitionIndex = 42495;

	struct alignas(4) aiPointsSampleSummary
	{
		::System::Int32 _count_k__BackingField; // 0x10

		::System::Int32 get_count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOINTSSAMPLESUMMARY_GET_COUNT_OFFSET))(this);
		}

		::System::Void set_count(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOINTSSAMPLESUMMARY_SET_COUNT_OFFSET))(this, a1);
		}
	};
}
