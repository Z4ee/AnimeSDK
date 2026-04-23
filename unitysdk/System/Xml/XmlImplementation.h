#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Xml { class XmlDocument; }
namespace System::Xml { class XmlNameTable; }

#define SYSTEM_XML_XMLIMPLEMENTATION_CREATEDOCUMENT_OFFSET UNITYSDK_OFFSET(0x1A054750)
#define SYSTEM_XML_XMLIMPLEMENTATION_GET_NAMETABLE_OFFSET UNITYSDK_OFFSET(0x1A0547A0)
#define SYSTEM_XML_XMLIMPLEMENTATION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A054740)
#define SYSTEM_XML_XMLIMPLEMENTATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A054680)

namespace System::Xml
{
	inline static constexpr unsigned int XmlImplementation_TypeDefinitionIndex = 1895;

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

		::System::Xml::XmlNameTable* get_NameTable()
		{
			return ((::System::Xml::XmlNameTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLIMPLEMENTATION_GET_NAMETABLE_OFFSET))(this);
		}
	};
}
