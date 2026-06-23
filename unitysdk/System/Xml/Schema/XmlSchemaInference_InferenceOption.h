#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaInference_InferenceOption_TypeDefinitionIndex = 2067;

	enum class XmlSchemaInference_InferenceOption : ::System::Int32
	{
		Restricted = 0,
		Relaxed = 1,
	};
}
