#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int MDB_QuerySceneType_TypeDefinitionIndex = 37663;

	enum class MDB_QuerySceneType : ::System::Int32
	{
		MDB_QueryScene_Auto = 0,
		MDB_QueryScene_ForceOnce = 1,
		MDB_QueryScene_ForceAlways = 2,
	};
}
