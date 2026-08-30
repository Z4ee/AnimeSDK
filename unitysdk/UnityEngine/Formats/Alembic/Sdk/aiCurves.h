#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiSchema.h"

#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICURVES_GETSUMMARY_OFFSET UNITYSDK_OFFSET(0x3BAC030)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICURVES_GET_SAMPLE_OFFSET UNITYSDK_OFFSET(0x3BABE90)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICURVES_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1EAB6BF0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICURVES_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1EAADC90)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICURVES_SET_SORTBASEPOSITION_OFFSET UNITYSDK_OFFSET(0x3BABF90)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICURVES_SET_SORT_OFFSET UNITYSDK_OFFSET(0x3BABF10)

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int aiCurves_TypeDefinitionIndex = 44693;

	struct alignas(8) aiCurves
	{
		::System::IntPtr self; // 0x10
		::UnityEngine::Formats::Alembic::Sdk::aiSchema schema; // 0x10

		static ::System::Boolean op_Implicit(::UnityEngine::Formats::Alembic::Sdk::aiCurves a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Formats::Alembic::Sdk::aiCurves))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICURVES_OP_IMPLICIT_OFFSET))(a1);
		}

		static ::UnityEngine::Formats::Alembic::Sdk::aiSchema op_Implicit_1(::UnityEngine::Formats::Alembic::Sdk::aiCurves a1)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiSchema(*)(::UnityEngine::Formats::Alembic::Sdk::aiCurves))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICURVES_OP_IMPLICIT_1_OFFSET))(a1);
		}

		/*
		::UnityEngine::Formats::Alembic::Sdk::aiCurvesSample get_sample()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiCurvesSample(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICURVES_GET_SAMPLE_OFFSET))(this);
		}
		*/

		::System::Void set_sort(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICURVES_SET_SORT_OFFSET))(this, a1);
		}

		/*
		::System::Void set_sortBasePosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICURVES_SET_SORTBASEPOSITION_OFFSET))(this, a1);
		}
		*/

		/*
		::System::Void GetSummary(::UnityEngine::Formats::Alembic::Sdk::aiCurvesSummary& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::aiCurvesSummary&))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICURVES_GETSUMMARY_OFFSET))(this, a1);
		}
		*/
	};
}
