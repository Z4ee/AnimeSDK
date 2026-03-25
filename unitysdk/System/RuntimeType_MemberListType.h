#pragma once
#include "unitysdk/unitysdk.h"

namespace System
{
	inline static constexpr unsigned int RuntimeType_MemberListType_TypeDefinitionIndex = 320;

	enum class RuntimeType_MemberListType : ::System::Int32
	{
		All = 0,
		CaseSensitive = 1,
		CaseInsensitive = 2,
		HandleToInfo = 3,
	};
}
