#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/Bool.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int aiPointsData_TypeDefinitionIndex = 42496;

	struct alignas(8) aiPointsData
	{
		::UnityEngine::Formats::Alembic::Sdk::Bool visibility; // 0x10
		::System::IntPtr points; // 0x18
		::System::IntPtr velocities; // 0x20
		::System::IntPtr ids; // 0x28
		::System::Int32 count; // 0x30
		::UnityEngine::Vector3 boundsCenter; // 0x34
		::UnityEngine::Vector3 boundsExtents; // 0x40
	};
}
