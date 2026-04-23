#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Formats::Alembic::Sdk { template <typename T> class PinnedList_1; }

#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICURVESSAMPLE_FILLDATA_OFFSET UNITYSDK_OFFSET(0x22D89B0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICURVESSAMPLE_GETSUMMARY_OFFSET UNITYSDK_OFFSET(0x22D8930)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICURVESSAMPLE_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1A1E1970)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICURVESSAMPLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1A1E1960)

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int aiCurvesSample_TypeDefinitionIndex = 40831;

	struct alignas(8) aiCurvesSample
	{
		::System::IntPtr self; // 0x10

		static ::System::Boolean op_Implicit(::UnityEngine::Formats::Alembic::Sdk::aiCurvesSample v)
		{
			return ((::System::Boolean(*)(::UnityEngine::Formats::Alembic::Sdk::aiCurvesSample))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICURVESSAMPLE_OP_IMPLICIT_OFFSET))(v);
		}

		/*
		static ::UnityEngine::Formats::Alembic::Sdk::aiSample op_Implicit_1(::UnityEngine::Formats::Alembic::Sdk::aiCurvesSample v)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiSample(*)(::UnityEngine::Formats::Alembic::Sdk::aiCurvesSample))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICURVESSAMPLE_OP_IMPLICIT_1_OFFSET))(v);
		}
		*/

		/*
		::System::Void GetSummary(::UnityEngine::Formats::Alembic::Sdk::aiCurvesSampleSummary& dst)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::aiCurvesSampleSummary&))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICURVESSAMPLE_GETSUMMARY_OFFSET))(this, dst);
		}
		*/

		/*
		::System::Void FillData(::UnityEngine::Formats::Alembic::Sdk::PinnedList_1<::UnityEngine::Formats::Alembic::Sdk::aiCurvesData>* dst)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::PinnedList_1<::UnityEngine::Formats::Alembic::Sdk::aiCurvesData>*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICURVESSAMPLE_FILLDATA_OFFSET))(this, dst);
		}
		*/
	};
}
