#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml
{
	inline static constexpr unsigned int XmlNodeChangedAction_TypeDefinitionIndex = 1768;

	enum class XmlNodeChangedAction : ::System::Int32
	{
		Insert = 0,
		Remove = 1,
		Change = 2,
	};
}
