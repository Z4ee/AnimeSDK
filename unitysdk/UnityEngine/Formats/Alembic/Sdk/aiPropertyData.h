#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiPropertyType.h"

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int aiPropertyData_TypeDefinitionIndex = 42500;

	struct alignas(8) aiPropertyData
	{
		::System::IntPtr data; // 0x10
		::System::Int32 size; // 0x18
		::UnityEngine::Formats::Alembic::Sdk::aiPropertyType type; // 0x1C
	};
}
