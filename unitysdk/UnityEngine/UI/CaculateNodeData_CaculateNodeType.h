#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI
{
	inline static constexpr unsigned int CaculateNodeData_CaculateNodeType_TypeDefinitionIndex = 5914;

	enum class CaculateNodeData_CaculateNodeType : ::System::Int32
	{
		None = 0,
		Value = 1,
		Ref = 2,
		Operator = 3,
	};
}
