#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_Trails_TypeDefinitionIndex = 5738;

	struct alignas(8) ParticleSystem_Trails
	{
		::System::Collections::Generic::List_1<::UnityEngine::Vector4>* positions; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* frontPositions; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* backPositions; // 0x20
		::System::Collections::Generic::List_1<::System::Int32>* positionCounts; // 0x28
		::System::Int32 maxTrailCount; // 0x30
		::System::Int32 maxPositionsPerTrailCount; // 0x34
	};
}
