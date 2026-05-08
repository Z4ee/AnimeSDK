#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int MDB_StateType_TypeDefinitionIndex = 37660;

	enum class MDB_StateType : ::System::Int32
	{
		MDB_State_None = 0,
		MDB_State_Idle = 1,
		MDB_State_Move = 2,
		MDB_State_Sprint = 3,
		MDB_State_Attack = 4,
		MDB_State_Special = 5,
		MDB_State_Anim = 6,
	};
}
