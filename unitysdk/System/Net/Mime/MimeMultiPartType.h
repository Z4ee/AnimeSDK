#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net::Mime
{
	inline static constexpr unsigned int MimeMultiPartType_TypeDefinitionIndex = 3622;

	enum class MimeMultiPartType : ::System::Int32
	{
		Mixed = 0,
		Alternative = 1,
		Parallel = 2,
		Related = 3,
		Unknown = -1,
	};
}
