#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/XmlSpace.h"

namespace System { class String; }
namespace System::Text { class Encoding; }
namespace System::Xml { class XmlNameTable; }
namespace System::Xml { class XmlNamespaceManager; }

#define SYSTEM_XML_XMLPARSERCONTEXT_GET_HASDTDINFO_OFFSET UNITYSDK_OFFSET(0x1C18C6E0)
#define SYSTEM_XML_XMLPARSERCONTEXT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C18C500)
#define SYSTEM_XML_XMLPARSERCONTEXT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C18C550)
#define SYSTEM_XML_XMLPARSERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C18C4B0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlParserContext_TypeDefinitionIndex = 1708;

	class XmlParserContext : public ::System::Object
	{
	public:
		::System::Xml::XmlNamespaceManager* _nsMgr; // 0x10
		::System::String* _pubId; // 0x18
		::System::String* _xmlLang; // 0x20
		::System::Text::Encoding* _encoding; // 0x28
		::System::String* _internalSubset; // 0x30
		::System::String* _docTypeName; // 0x38
		::System::String* _sysId; // 0x40
		::System::Xml::XmlNameTable* _nt; // 0x48
		::System::String* _baseURI; // 0x50
		::System::Xml::XmlSpace _xmlSpace; // 0x58

		::System::Void _ctor(::System::Xml::XmlNameTable* nt, ::System::Xml::XmlNamespaceManager* nsMgr, ::System::String* xmlLang, ::System::Xml::XmlSpace xmlSpace)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNameTable*, ::System::Xml::XmlNamespaceManager*, ::System::String*, ::System::Xml::XmlSpace))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLPARSERCONTEXT__CTOR_OFFSET))(this, nt, nsMgr, xmlLang, xmlSpace);
		}

		::System::Void _ctor_1(::System::Xml::XmlNameTable* nt, ::System::Xml::XmlNamespaceManager* nsMgr, ::System::String* docTypeName, ::System::String* pubId, ::System::String* sysId, ::System::String* internalSubset, ::System::String* baseURI, ::System::String* xmlLang, ::System::Xml::XmlSpace xmlSpace)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNameTable*, ::System::Xml::XmlNamespaceManager*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Xml::XmlSpace))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLPARSERCONTEXT__CTOR_1_OFFSET))(this, nt, nsMgr, docTypeName, pubId, sysId, internalSubset, baseURI, xmlLang, xmlSpace);
		}

		::System::Void _ctor_2(::System::Xml::XmlNameTable* nt, ::System::Xml::XmlNamespaceManager* nsMgr, ::System::String* docTypeName, ::System::String* pubId, ::System::String* sysId, ::System::String* internalSubset, ::System::String* baseURI, ::System::String* xmlLang, ::System::Xml::XmlSpace xmlSpace, ::System::Text::Encoding* enc)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNameTable*, ::System::Xml::XmlNamespaceManager*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Xml::XmlSpace, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLPARSERCONTEXT__CTOR_2_OFFSET))(this, nt, nsMgr, docTypeName, pubId, sysId, internalSubset, baseURI, xmlLang, xmlSpace, enc);
		}

		::System::Boolean get_HasDtdInfo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLPARSERCONTEXT_GET_HASDTDINFO_OFFSET))(this);
		}
	};
}
