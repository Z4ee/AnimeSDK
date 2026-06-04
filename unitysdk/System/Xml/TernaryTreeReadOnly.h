#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_XML_TERNARYTREEREADONLY_FINDCASEINSENSITIVESTRING_OFFSET UNITYSDK_OFFSET(0x1AE9EC10)
#define SYSTEM_XML_TERNARYTREEREADONLY__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE9EC00)

namespace System::Xml
{
	inline static constexpr unsigned int TernaryTreeReadOnly_TypeDefinitionIndex = 1813;

	class TernaryTreeReadOnly : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* nodeBuffer; // 0x10

		::System::Void _ctor(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_XML_TERNARYTREEREADONLY__CTOR_OFFSET))(this, a1);
		}

		::System::Byte FindCaseInsensitiveString(::System::String* a1)
		{
			return ((::System::Byte(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_TERNARYTREEREADONLY_FINDCASEINSENSITIVESTRING_OFFSET))(this, a1);
		}
	};
}
