#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICURVESSAMPLESUMMARY_GET_NUMVERTICESCOUNT_OFFSET UNITYSDK_OFFSET(0x784260)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICURVESSAMPLESUMMARY_GET_POSITIONCOUNT_OFFSET UNITYSDK_OFFSET(0x19050)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICURVESSAMPLESUMMARY_SET_NUMVERTICESCOUNT_OFFSET UNITYSDK_OFFSET(0xB596A0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICURVESSAMPLESUMMARY_SET_POSITIONCOUNT_OFFSET UNITYSDK_OFFSET(0x18EB0)

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int aiCurvesSampleSummary_TypeDefinitionIndex = 44680;

	struct alignas(4) aiCurvesSampleSummary
	{
		::System::Int32 _positionCount_k__BackingField; // 0x10
		::System::Int32 _numVerticesCount_k__BackingField; // 0x14

		::System::Int32 get_positionCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICURVESSAMPLESUMMARY_GET_POSITIONCOUNT_OFFSET))(this);
		}

		::System::Void set_positionCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICURVESSAMPLESUMMARY_SET_POSITIONCOUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_numVerticesCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICURVESSAMPLESUMMARY_GET_NUMVERTICESCOUNT_OFFSET))(this);
		}

		::System::Void set_numVerticesCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICURVESSAMPLESUMMARY_SET_NUMVERTICESCOUNT_OFFSET))(this, a1);
		}
	};
}
