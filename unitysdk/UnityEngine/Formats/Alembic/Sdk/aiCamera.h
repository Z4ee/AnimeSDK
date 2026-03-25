#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiSchema.h"

#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICAMERA_GET_SAMPLE_OFFSET UNITYSDK_OFFSET(0x2105710)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICAMERA_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x187A7790)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICAMERA_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1879ECF0)

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int aiCamera_TypeDefinitionIndex = 34993;

	struct alignas(8) aiCamera
	{
		::System::IntPtr self; // 0x10
		::UnityEngine::Formats::Alembic::Sdk::aiSchema schema; // 0x10

		static ::System::Boolean op_Implicit(::UnityEngine::Formats::Alembic::Sdk::aiCamera v)
		{
			return ((::System::Boolean(*)(::UnityEngine::Formats::Alembic::Sdk::aiCamera))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICAMERA_OP_IMPLICIT_OFFSET))(v);
		}

		static ::UnityEngine::Formats::Alembic::Sdk::aiSchema op_Implicit_1(::UnityEngine::Formats::Alembic::Sdk::aiCamera v)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiSchema(*)(::UnityEngine::Formats::Alembic::Sdk::aiCamera))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICAMERA_OP_IMPLICIT_1_OFFSET))(v);
		}

		/*
		::UnityEngine::Formats::Alembic::Sdk::aiCameraSample get_sample()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiCameraSample(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICAMERA_GET_SAMPLE_OFFSET))(this);
		}
		*/
	};
}
