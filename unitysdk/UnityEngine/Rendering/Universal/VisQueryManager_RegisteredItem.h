#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Transform; }

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int VisQueryManager_RegisteredItem_TypeDefinitionIndex = 27021;

	struct alignas(8) VisQueryManager_RegisteredItem
	{
		::UnityEngine::Transform* Transform; // 0x10
		::UnityEngine::Vector3 Offset; // 0x18
		::UnityEngine::Vector4 ShapeData; // 0x24
		::System::UInt32 Gen; // 0x34
		::System::Int32 Link; // 0x38
		::System::Boolean TimestampValid; // 0x3C
		::System::UInt32 LastQueriedFrame; // 0x40
		::System::Single QueryResult; // 0x44
	};
}
