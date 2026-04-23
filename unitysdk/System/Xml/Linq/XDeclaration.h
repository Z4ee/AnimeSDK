#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_XML_LINQ_XDECLARATION_GET_ENCODING_OFFSET UNITYSDK_OFFSET(0x19F96870)
#define SYSTEM_XML_LINQ_XDECLARATION_GET_STANDALONE_OFFSET UNITYSDK_OFFSET(0x19F96880)
#define SYSTEM_XML_LINQ_XDECLARATION_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x19F96890)
#define SYSTEM_XML_LINQ_XDECLARATION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19F968A0)
#define SYSTEM_XML_LINQ_XDECLARATION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19F967F0)
#define SYSTEM_XML_LINQ_XDECLARATION__CTOR_OFFSET UNITYSDK_OFFSET(0x19F967E0)

namespace System::Xml::Linq
{
	inline static constexpr unsigned int XDeclaration_TypeDefinitionIndex = 4926;

	class XDeclaration : public ::System::Object
	{
	public:
		::System::String* encoding; // 0x10
		::System::String* version; // 0x18
		::System::String* standalone; // 0x20

		::System::Void _ctor(::System::String* version, ::System::String* encoding, ::System::String* standalone)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XDECLARATION__CTOR_OFFSET))(this, version, encoding, standalone);
		}

		::System::Void _ctor_1(::System::Xml::Linq::XDeclaration* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XDeclaration*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XDECLARATION__CTOR_1_OFFSET))(this, other);
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
