#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_SECURITY_UTIL_TOKENIZERSTRINGBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x1E450B40)

namespace System::Security::Util
{
	inline static constexpr unsigned int TokenizerStringBlock_TypeDefinitionIndex = 1012;

	class TokenizerStringBlock : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* m_block; // 0x10
		::System::Security::Util::TokenizerStringBlock* m_next; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_UTIL_TOKENIZERSTRINGBLOCK__CTOR_OFFSET))(this);
		}
	};
}
