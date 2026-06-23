#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Xml { class XmlDocument; }
namespace System::Xml { class XmlNameTable; }

#define SYSTEM_XML_XMLIMPLEMENTATION_CREATEDOCUMENT_OFFSET UNITYSDK_OFFSET(0x1C18A3E0)
#define SYSTEM_XML_XMLIMPLEMENTATION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C185230)
#define SYSTEM_XML_XMLIMPLEMENTATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C184F00)

namespace System::Xml
{
	inline static constexpr unsigned int XmlImplementation_TypeDefinitionIndex = 1769;

	class XmlImplementation : public ::System::Object
	{
	public:
		::System::Xml::XmlNameTable* nameTable; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLIMPLEMENTATION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Xml::XmlNameTable* nt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNameTable*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLIMPLEMENTATION__CTOR_1_OFFSET))(this, nt);
		}

		::System::Xml::XmlDocument* CreateDocument()
		{
			return ((::System::Xml::XmlDocument*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLIMPLEMENTATION_CREATEDOCUMENT_OFFSET))(this);
		}
	};
}
