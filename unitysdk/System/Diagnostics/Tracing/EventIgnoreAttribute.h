#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int EventIgnoreAttribute_TypeDefinitionIndex = 1601;

	class EventIgnoreAttribute : public ::System::Attribute
	{
	public:
	};
}
