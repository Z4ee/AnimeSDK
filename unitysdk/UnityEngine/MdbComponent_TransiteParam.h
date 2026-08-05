#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/MDB_StateType.h"

namespace System { class String; }

namespace UnityEngine
{
	inline static constexpr unsigned int MdbComponent_TransiteParam_TypeDefinitionIndex = 39958;

	struct alignas(8) MdbComponent_TransiteParam
	{
		::System::String* stateName; // 0x10
		::System::Int32 clothIndex; // 0x18
		::UnityEngine::MDB_StateType paramType; // 0x1C
	};
}
