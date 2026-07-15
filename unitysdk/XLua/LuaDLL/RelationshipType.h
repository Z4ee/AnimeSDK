#pragma once
#include "unitysdk/unitysdk.h"

namespace XLua::LuaDLL
{
	inline static constexpr unsigned int RelationshipType_TypeDefinitionIndex = 49383;

	enum class RelationshipType : ::System::Int32
	{
		TableValue = 1,
		NumberKeyTableValue = 2,
		KeyOfTable = 3,
		Metatable = 4,
		Upvalue = 5,
	};
}
