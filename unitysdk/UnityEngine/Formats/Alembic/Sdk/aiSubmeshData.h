#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int aiSubmeshData_TypeDefinitionIndex = 42492;

	struct alignas(8) aiSubmeshData
	{
		::System::IntPtr indexes; // 0x10
		::System::Char* facesetNames; // 0x18
	};
}
