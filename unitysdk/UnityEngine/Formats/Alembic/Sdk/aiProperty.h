#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPROPERTY_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1EAB74A0)

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int aiProperty_TypeDefinitionIndex = 44700;

	struct alignas(8) aiProperty
	{
		::System::IntPtr self; // 0x10

		static ::System::Boolean op_Implicit(::UnityEngine::Formats::Alembic::Sdk::aiProperty a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Formats::Alembic::Sdk::aiProperty))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPROPERTY_OP_IMPLICIT_OFFSET))(a1);
		}
	};
}
