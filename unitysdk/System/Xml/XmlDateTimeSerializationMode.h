#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml
{
	inline static constexpr unsigned int XmlDateTimeSerializationMode_TypeDefinitionIndex = 1935;

	enum class XmlDateTimeSerializationMode : ::System::Int32
	{
		Local = 0,
		Utc = 1,
		Unspecified = 2,
		RoundtripKind = 3,
	};
}
