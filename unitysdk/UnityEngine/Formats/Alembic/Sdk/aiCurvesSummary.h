#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/Bool.h"

#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICURVESSUMMARY_GET_HASPOSITIONS_OFFSET UNITYSDK_OFFSET(0x167D30)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICURVESSUMMARY_GET_HASUVS_OFFSET UNITYSDK_OFFSET(0xA4B2F0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICURVESSUMMARY_GET_HASWIDTHS_OFFSET UNITYSDK_OFFSET(0xA4B310)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICURVESSUMMARY_SET_HASPOSITIONS_OFFSET UNITYSDK_OFFSET(0x167B90)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICURVESSUMMARY_SET_HASUVS_OFFSET UNITYSDK_OFFSET(0xA4B300)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICURVESSUMMARY_SET_HASWIDTHS_OFFSET UNITYSDK_OFFSET(0xA4B320)

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int aiCurvesSummary_TypeDefinitionIndex = 42497;

	struct alignas(1) aiCurvesSummary
	{
		::UnityEngine::Formats::Alembic::Sdk::Bool _hasPositions_k__BackingField; // 0x10
		::UnityEngine::Formats::Alembic::Sdk::Bool _hasUVs_k__BackingField; // 0x11
		::UnityEngine::Formats::Alembic::Sdk::Bool _hasWidths_k__BackingField; // 0x12

		::UnityEngine::Formats::Alembic::Sdk::Bool get_hasPositions()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::Bool(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICURVESSUMMARY_GET_HASPOSITIONS_OFFSET))(this);
		}

		::System::Void set_hasPositions(::UnityEngine::Formats::Alembic::Sdk::Bool a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::Bool))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICURVESSUMMARY_SET_HASPOSITIONS_OFFSET))(this, a1);
		}

		::UnityEngine::Formats::Alembic::Sdk::Bool get_hasUVs()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::Bool(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICURVESSUMMARY_GET_HASUVS_OFFSET))(this);
		}

		::System::Void set_hasUVs(::UnityEngine::Formats::Alembic::Sdk::Bool a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::Bool))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICURVESSUMMARY_SET_HASUVS_OFFSET))(this, a1);
		}

		::UnityEngine::Formats::Alembic::Sdk::Bool get_hasWidths()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::Bool(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICURVESSUMMARY_GET_HASWIDTHS_OFFSET))(this);
		}

		::System::Void set_hasWidths(::UnityEngine::Formats::Alembic::Sdk::Bool a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::Bool))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICURVESSUMMARY_SET_HASWIDTHS_OFFSET))(this, a1);
		}
	};
}
