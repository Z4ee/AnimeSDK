#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml::Linq
{
	inline static constexpr unsigned int XObjectChange_TypeDefinitionIndex = 3879;

	enum class XObjectChange : ::System::Int32
	{
		Add = 0,
		Remove = 1,
		Name = 2,
		Value = 3,
	};
}
