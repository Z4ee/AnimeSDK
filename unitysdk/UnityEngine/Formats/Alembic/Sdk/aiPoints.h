#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiSchema.h"

#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOINTS_GETSUMMARY_OFFSET UNITYSDK_OFFSET(0x21067D0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOINTS_GET_SAMPLE_OFFSET UNITYSDK_OFFSET(0x2106750)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOINTS_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x187A80E0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOINTS_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1879ED20)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOINTS_SET_SORTBASEPOSITION_OFFSET UNITYSDK_OFFSET(0x2105C50)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOINTS_SET_SORT_OFFSET UNITYSDK_OFFSET(0x2105BD0)

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int aiPoints_TypeDefinitionIndex = 34996;

	struct alignas(8) aiPoints
	{
		::System::IntPtr self; // 0x10
		::UnityEngine::Formats::Alembic::Sdk::aiSchema schema; // 0x10

		static ::System::Boolean op_Implicit(::UnityEngine::Formats::Alembic::Sdk::aiPoints v)
		{
			return ((::System::Boolean(*)(::UnityEngine::Formats::Alembic::Sdk::aiPoints))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOINTS_OP_IMPLICIT_OFFSET))(v);
		}

		static ::UnityEngine::Formats::Alembic::Sdk::aiSchema op_Implicit_1(::UnityEngine::Formats::Alembic::Sdk::aiPoints v)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiSchema(*)(::UnityEngine::Formats::Alembic::Sdk::aiPoints))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOINTS_OP_IMPLICIT_1_OFFSET))(v);
		}

		/*
		::UnityEngine::Formats::Alembic::Sdk::aiPointsSample get_sample()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiPointsSample(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOINTS_GET_SAMPLE_OFFSET))(this);
		}
		*/

		::System::Void set_sort(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOINTS_SET_SORT_OFFSET))(this, value);
		}

		/*
		::System::Void set_sortBasePosition(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOINTS_SET_SORTBASEPOSITION_OFFSET))(this, value);
		}
		*/

		/*
		::System::Void GetSummary(::UnityEngine::Formats::Alembic::Sdk::aiPointsSummary& dst)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::aiPointsSummary&))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOINTS_GETSUMMARY_OFFSET))(this, dst);
		}
		*/
	};
}
