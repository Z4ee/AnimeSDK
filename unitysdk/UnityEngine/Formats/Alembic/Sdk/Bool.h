#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_FORMATS_ALEMBIC_SDK_BOOL_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1B03B700)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_BOOL_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1B02E6F0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_BOOL_TOBOOL_1_OFFSET UNITYSDK_OFFSET(0x1B041850)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_BOOL_TOBOOL_OFFSET UNITYSDK_OFFSET(0x1B041840)

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int Bool_TypeDefinitionIndex = 41659;

	struct alignas(1) Bool
	{
		::System::Byte v; // 0x10

		static ::System::Boolean op_Implicit(::UnityEngine::Formats::Alembic::Sdk::Bool a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Formats::Alembic::Sdk::Bool))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_BOOL_OP_IMPLICIT_OFFSET))(a1);
		}

		static ::System::Boolean ToBool(::UnityEngine::Formats::Alembic::Sdk::Bool a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Formats::Alembic::Sdk::Bool))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_BOOL_TOBOOL_OFFSET))(a1);
		}

		static ::UnityEngine::Formats::Alembic::Sdk::Bool op_Implicit_1(::System::Boolean a1)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::Bool(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_BOOL_OP_IMPLICIT_1_OFFSET))(a1);
		}

		static ::UnityEngine::Formats::Alembic::Sdk::Bool ToBool_1(::System::Boolean a1)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::Bool(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_BOOL_TOBOOL_1_OFFSET))(a1);
		}
	};
}
