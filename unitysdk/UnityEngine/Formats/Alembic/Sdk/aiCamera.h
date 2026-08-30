#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiSchema.h"

#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICAMERA_GET_SAMPLE_OFFSET UNITYSDK_OFFSET(0x3BABA90)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICAMERA_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1EAB6A30)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICAMERA_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1EAADC50)

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int aiCamera_TypeDefinitionIndex = 44689;

	struct alignas(8) aiCamera
	{
		::System::IntPtr self; // 0x10
		::UnityEngine::Formats::Alembic::Sdk::aiSchema schema; // 0x10

		static ::System::Boolean op_Implicit(::UnityEngine::Formats::Alembic::Sdk::aiCamera a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Formats::Alembic::Sdk::aiCamera))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICAMERA_OP_IMPLICIT_OFFSET))(a1);
		}

		static ::UnityEngine::Formats::Alembic::Sdk::aiSchema op_Implicit_1(::UnityEngine::Formats::Alembic::Sdk::aiCamera a1)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiSchema(*)(::UnityEngine::Formats::Alembic::Sdk::aiCamera))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICAMERA_OP_IMPLICIT_1_OFFSET))(a1);
		}

		/*
		::UnityEngine::Formats::Alembic::Sdk::aiCameraSample get_sample()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiCameraSample(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICAMERA_GET_SAMPLE_OFFSET))(this);
		}
		*/
	};
}
