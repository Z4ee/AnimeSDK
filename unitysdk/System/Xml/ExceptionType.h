#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml
{
	inline static constexpr unsigned int ExceptionType_TypeDefinitionIndex = 1810;

	enum class ExceptionType : ::System::Int32
	{
		ArgumentException = 0,
		XmlException = 1,
	};
}
