#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Formats::Alembic::Sdk { template <typename T> class PinnedList_1; }

#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICURVESSAMPLE_FILLDATA_OFFSET UNITYSDK_OFFSET(0x3BAC130)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICURVESSAMPLE_GETSUMMARY_OFFSET UNITYSDK_OFFSET(0x3BAC0B0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICURVESSAMPLE_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1EAB6D30)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICURVESSAMPLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1EAB6D20)

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int aiCurvesSample_TypeDefinitionIndex = 44699;

	struct alignas(8) aiCurvesSample
	{
		::System::IntPtr self; // 0x10

		static ::System::Boolean op_Implicit(::UnityEngine::Formats::Alembic::Sdk::aiCurvesSample a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Formats::Alembic::Sdk::aiCurvesSample))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICURVESSAMPLE_OP_IMPLICIT_OFFSET))(a1);
		}

		/*
		static ::UnityEngine::Formats::Alembic::Sdk::aiSample op_Implicit_1(::UnityEngine::Formats::Alembic::Sdk::aiCurvesSample a1)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiSample(*)(::UnityEngine::Formats::Alembic::Sdk::aiCurvesSample))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICURVESSAMPLE_OP_IMPLICIT_1_OFFSET))(a1);
		}
		*/

		/*
		::System::Void GetSummary(::UnityEngine::Formats::Alembic::Sdk::aiCurvesSampleSummary& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::aiCurvesSampleSummary&))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICURVESSAMPLE_GETSUMMARY_OFFSET))(this, a1);
		}
		*/

		/*
		::System::Void FillData(::UnityEngine::Formats::Alembic::Sdk::PinnedList_1<::UnityEngine::Formats::Alembic::Sdk::aiCurvesData>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::PinnedList_1<::UnityEngine::Formats::Alembic::Sdk::aiCurvesData>*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICURVESSAMPLE_FILLDATA_OFFSET))(this, a1);
		}
		*/
	};
}
