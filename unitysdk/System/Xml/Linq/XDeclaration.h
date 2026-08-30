#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_XML_LINQ_XDECLARATION_GET_ENCODING_OFFSET UNITYSDK_OFFSET(0x1EEA6B40)
#define SYSTEM_XML_LINQ_XDECLARATION_GET_STANDALONE_OFFSET UNITYSDK_OFFSET(0x1EEA6B50)
#define SYSTEM_XML_LINQ_XDECLARATION_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x1EEA6B60)
#define SYSTEM_XML_LINQ_XDECLARATION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EEA6B70)
#define SYSTEM_XML_LINQ_XDECLARATION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EEA6AC0)
#define SYSTEM_XML_LINQ_XDECLARATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEA6AB0)

namespace System::Xml::Linq
{
	inline static constexpr unsigned int XDeclaration_TypeDefinitionIndex = 3905;

	class XDeclaration : public ::System::Object
	{
	public:
		::System::String* encoding; // 0x10
		::System::String* standalone; // 0x18
		::System::String* version; // 0x20

		::System::Void _ctor(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XDECLARATION__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_1(::System::Xml::Linq::XDeclaration* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XDeclaration*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XDECLARATION__CTOR_1_OFFSET))(this, a1);
		}

		::System::String* get_Encoding()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XDECLARATION_GET_ENCODING_OFFSET))(this);
		}

		::System::String* get_Standalone()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XDECLARATION_GET_STANDALONE_OFFSET))(this);
		}

		::System::String* get_Version()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XDECLARATION_GET_VERSION_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XDECLARATION_TOSTRING_OFFSET))(this);
		}
	};
}
