#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml
{
	inline static constexpr unsigned int DtdParser_LiteralType_TypeDefinitionIndex = 1927;

	enum class DtdParser_LiteralType : ::System::Int32
	{
		AttributeValue = 0,
		EntityReplText = 1,
		SystemOrPublicID = 2,
	};
}
