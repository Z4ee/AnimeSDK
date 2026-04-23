#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_FORMATS_ALEMBIC_SDK_BOOL_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1A1D6F60)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_BOOL_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1A1CA0F0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_BOOL_TOBOOL_1_OFFSET UNITYSDK_OFFSET(0x1A1DD150)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_BOOL_TOBOOL_OFFSET UNITYSDK_OFFSET(0x1A1DD140)

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int Bool_TypeDefinitionIndex = 40833;

	struct alignas(1) Bool
	{
		::System::Byte v; // 0x10

		static ::System::Boolean op_Implicit(::UnityEngine::Formats::Alembic::Sdk::Bool v)
		{
			return ((::System::Boolean(*)(::UnityEngine::Formats::Alembic::Sdk::Bool))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_BOOL_OP_IMPLICIT_OFFSET))(v);
		}

		static ::System::Boolean ToBool(::UnityEngine::Formats::Alembic::Sdk::Bool v)
		{
			return ((::System::Boolean(*)(::UnityEngine::Formats::Alembic::Sdk::Bool))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_BOOL_TOBOOL_OFFSET))(v);
		}

		static ::UnityEngine::Formats::Alembic::Sdk::Bool op_Implicit_1(::System::Boolean v)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::Bool(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_BOOL_OP_IMPLICIT_1_OFFSET))(v);
		}

		static ::UnityEngine::Formats::Alembic::Sdk::Bool ToBool_1(::System::Boolean v)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::Bool(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_BOOL_TOBOOL_1_OFFSET))(v);
		}
	};
}
