#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/XmlSpace.h"

namespace System { class String; }
namespace System::Text { class Encoding; }
namespace System::Xml { class XmlNameTable; }
namespace System::Xml { class XmlNamespaceManager; }

#define SYSTEM_XML_XMLPARSERCONTEXT_GET_BASEURI_OFFSET UNITYSDK_OFFSET(0x1AED1740)
#define SYSTEM_XML_XMLPARSERCONTEXT_GET_DOCTYPENAME_OFFSET UNITYSDK_OFFSET(0x1AED1710)
#define SYSTEM_XML_XMLPARSERCONTEXT_GET_ENCODING_OFFSET UNITYSDK_OFFSET(0x1AED1780)
#define SYSTEM_XML_XMLPARSERCONTEXT_GET_HASDTDINFO_OFFSET UNITYSDK_OFFSET(0x1AED1790)
#define SYSTEM_XML_XMLPARSERCONTEXT_GET_INTERNALSUBSET_OFFSET UNITYSDK_OFFSET(0x1AED1750)
#define SYSTEM_XML_XMLPARSERCONTEXT_GET_NAMESPACEMANAGER_OFFSET UNITYSDK_OFFSET(0x1AED1700)
#define SYSTEM_XML_XMLPARSERCONTEXT_GET_NAMETABLE_OFFSET UNITYSDK_OFFSET(0x1AED16F0)
#define SYSTEM_XML_XMLPARSERCONTEXT_GET_PUBLICID_OFFSET UNITYSDK_OFFSET(0x1AED1720)
#define SYSTEM_XML_XMLPARSERCONTEXT_GET_SYSTEMID_OFFSET UNITYSDK_OFFSET(0x1AED1730)
#define SYSTEM_XML_XMLPARSERCONTEXT_GET_XMLLANG_OFFSET UNITYSDK_OFFSET(0x1AED1760)
#define SYSTEM_XML_XMLPARSERCONTEXT_GET_XMLSPACE_OFFSET UNITYSDK_OFFSET(0x1AED1770)
#define SYSTEM_XML_XMLPARSERCONTEXT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AED1500)
#define SYSTEM_XML_XMLPARSERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1AECA3C0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlParserContext_TypeDefinitionIndex = 1828;

	class XmlParserContext : public ::System::Object
	{
	public:
		::System::String* _internalSubset; // 0x10
		::System::String* _xmlLang; // 0x18
		::System::Text::Encoding* _encoding; // 0x20
		::System::String* _sysId; // 0x28
		::System::String* _baseURI; // 0x30
		::System::Xml::XmlNamespaceManager* _nsMgr; // 0x38
		::System::Xml::XmlNameTable* _nt; // 0x40
		::System::String* _pubId; // 0x48
		::System::String* _docTypeName; // 0x50
		::System::Xml::XmlSpace _xmlSpace; // 0x58

		::System::Void _ctor(::System::Xml::XmlNameTable* a1, ::System::Xml::XmlNamespaceManager* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::System::String* a6, ::System::String* a7, ::System::String* a8, ::System::Xml::XmlSpace a9)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNameTable*, ::System::Xml::XmlNamespaceManager*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Xml::XmlSpace))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLPARSERCONTEXT__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Void _ctor_1(::System::Xml::XmlNameTable* a1, ::System::Xml::XmlNamespaceManager* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::System::String* a6, ::System::String* a7, ::System::String* a8, ::System::Xml::XmlSpace a9, ::System::Text::Encoding* a10)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNameTable*, ::System::Xml::XmlNamespaceManager*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Xml::XmlSpace, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLPARSERCONTEXT__CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		::System::Xml::XmlNameTable* get_NameTable()
		{
			return ((::System::Xml::XmlNameTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLPARSERCONTEXT_GET_NAMETABLE_OFFSET))(this);
		}

		::System::Xml::XmlNamespaceManager* get_NamespaceManager()
		{
			return ((::System::Xml::XmlNamespaceManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLPARSERCONTEXT_GET_NAMESPACEMANAGER_OFFSET))(this);
		}

		::System::String* get_DocTypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLPARSERCONTEXT_GET_DOCTYPENAME_OFFSET))(this);
		}

		::System::String* get_PublicId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLPARSERCONTEXT_GET_PUBLICID_OFFSET))(this);
		}

		::System::String* get_SystemId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLPARSERCONTEXT_GET_SYSTEMID_OFFSET))(this);
		}

		::System::String* get_BaseURI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLPARSERCONTEXT_GET_BASEURI_OFFSET))(this);
		}

		::System::String* get_InternalSubset()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLPARSERCONTEXT_GET_INTERNALSUBSET_OFFSET))(this);
		}

		::System::String* get_XmlLang()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLPARSERCONTEXT_GET_XMLLANG_OFFSET))(this);
		}

		::System::Xml::XmlSpace get_XmlSpace()
		{
			return ((::System::Xml::XmlSpace(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLPARSERCONTEXT_GET_XMLSPACE_OFFSET))(this);
		}

		::System::Text::Encoding* get_Encoding()
		{
			return ((::System::Text::Encoding*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLPARSERCONTEXT_GET_ENCODING_OFFSET))(this);
		}

		::System::Boolean get_HasDtdInfo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLPARSERCONTEXT_GET_HASDTDINFO_OFFSET))(this);
		}
	};
}
