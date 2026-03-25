#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_XML_TERNARYTREEREADONLY_FINDCASEINSENSITIVESTRING_OFFSET UNITYSDK_OFFSET(0x185F1C40)
#define SYSTEM_XML_TERNARYTREEREADONLY__CTOR_OFFSET UNITYSDK_OFFSET(0x185F1C30)

namespace System::Xml
{
	inline static constexpr unsigned int TernaryTreeReadOnly_TypeDefinitionIndex = 1812;

	class TernaryTreeReadOnly : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* nodeBuffer; // 0x10

		::System::Void _ctor(::Il2CppArray<::System::Byte>* nodeBuffer)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_XML_TERNARYTREEREADONLY__CTOR_OFFSET))(this, nodeBuffer);
		}

		::System::Byte FindCaseInsensitiveString(::System::String* stringToFind)
		{
			return ((::System::Byte(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_TERNARYTREEREADONLY_FINDCASEINSENSITIVESTRING_OFFSET))(this, stringToFind);
		}
	};
}
