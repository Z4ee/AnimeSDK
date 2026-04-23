#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_SECURITY_UTIL_TOKENIZERSHORTBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x17820090)

namespace System::Security::Util
{
	inline static constexpr unsigned int TokenizerShortBlock_TypeDefinitionIndex = 974;

	class TokenizerShortBlock : public ::System::Object
	{
	public:
		::System::Security::Util::TokenizerShortBlock* m_next; // 0x10
		::Il2CppArray<::System::Int16>* m_block; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_UTIL_TOKENIZERSHORTBLOCK__CTOR_OFFSET))(this);
		}
	};
}
