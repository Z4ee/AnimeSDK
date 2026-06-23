#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net::Mail
{
	inline static constexpr unsigned int MailPriority_TypeDefinitionIndex = 3590;

	enum class MailPriority : ::System::Int32
	{
		Normal = 0,
		Low = 1,
		High = 2,
	};
}
