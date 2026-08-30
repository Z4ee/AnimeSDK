#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiSchema.h"

#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIXFORM_GET_SAMPLE_OFFSET UNITYSDK_OFFSET(0x3BBB690)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIXFORM_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1CE45590)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIXFORM_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1CE3BA60)

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int aiXform_TypeDefinitionIndex = 44688;

	struct alignas(8) aiXform
	{
		::System::IntPtr self; // 0x10
		::UnityEngine::Formats::Alembic::Sdk::aiSchema schema; // 0x10

		static ::System::Boolean op_Implicit(::UnityEngine::Formats::Alembic::Sdk::aiXform a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Formats::Alembic::Sdk::aiXform))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIXFORM_OP_IMPLICIT_OFFSET))(a1);
		}

		static ::UnityEngine::Formats::Alembic::Sdk::aiSchema op_Implicit_1(::UnityEngine::Formats::Alembic::Sdk::aiXform a1)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiSchema(*)(::UnityEngine::Formats::Alembic::Sdk::aiXform))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIXFORM_OP_IMPLICIT_1_OFFSET))(a1);
		}

		/*
		::UnityEngine::Formats::Alembic::Sdk::aiXformSample get_sample()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiXformSample(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIXFORM_GET_SAMPLE_OFFSET))(this);
		}
		*/
	};
}
