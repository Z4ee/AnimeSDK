#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml
{
	inline static constexpr unsigned int XmlTextWriter_State_TypeDefinitionIndex = 1860;

	enum class XmlTextWriter_State : ::System::Int32
	{
		Start = 0,
		Prolog = 1,
		PostDTD = 2,
		Element = 3,
		Attribute = 4,
		Content = 5,
		AttrOnly = 6,
		Epilog = 7,
		Error = 8,
		Closed = 9,
	};
}
