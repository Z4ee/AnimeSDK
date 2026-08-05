#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/XmlNodeType.h"

namespace System { class String; }
namespace System::Xml { class AttributePSVIInfo; }
namespace System::Xml { class IXmlLineInfo; }
namespace System::Xml { class XmlNameTable; }

#define SYSTEM_XML_VALIDATINGREADERNODEDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DE76A00)
#define SYSTEM_XML_VALIDATINGREADERNODEDATA_GETATOMIZEDNAMEWPREFIX_OFFSET UNITYSDK_OFFSET(0x1DE76B00)
#define SYSTEM_XML_VALIDATINGREADERNODEDATA_SETITEMDATA_1_OFFSET UNITYSDK_OFFSET(0x1DE76D30)
#define SYSTEM_XML_VALIDATINGREADERNODEDATA_SETITEMDATA_2_OFFSET UNITYSDK_OFFSET(0x1DE76D40)
#define SYSTEM_XML_VALIDATINGREADERNODEDATA_SETITEMDATA_OFFSET UNITYSDK_OFFSET(0x1DE76D00)
#define SYSTEM_XML_VALIDATINGREADERNODEDATA_SETLINEINFO_1_OFFSET UNITYSDK_OFFSET(0x1DE76BA0)
#define SYSTEM_XML_VALIDATINGREADERNODEDATA_SETLINEINFO_OFFSET UNITYSDK_OFFSET(0x1DE76B90)
#define SYSTEM_XML_VALIDATINGREADERNODEDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE76A80)
#define SYSTEM_XML_VALIDATINGREADERNODEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE76970)

namespace System::Xml
{
	inline static constexpr unsigned int ValidatingReaderNodeData_TypeDefinitionIndex = 1700;

	class ValidatingReaderNodeData : public ::System::Object
	{
	public:
		::System::String* originalStringValue; // 0x10
		::System::String* rawValue; // 0x18
		::System::Xml::AttributePSVIInfo* attributePSVIInfo; // 0x20
		::System::String* localName; // 0x28
		::System::String* prefix; // 0x30
		::System::String* namespaceUri; // 0x38
		::System::String* nameWPrefix; // 0x40
		::System::Int32 lineNo; // 0x48
		::System::Int32 linePos; // 0x4C
		::System::Int32 depth; // 0x50
		::System::Xml::XmlNodeType nodeType; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_VALIDATINGREADERNODEDATA__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Xml::XmlNodeType nodeType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNodeType))((::PBYTE)hIl2Cpp + SYSTEM_XML_VALIDATINGREADERNODEDATA__CTOR_1_OFFSET))(this, nodeType);
		}

		::System::String* GetAtomizedNameWPrefix(::System::Xml::XmlNameTable* nameTable)
		{
			return ((::System::String*(*)(::PVOID, ::System::Xml::XmlNameTable*))((::PBYTE)hIl2Cpp + SYSTEM_XML_VALIDATINGREADERNODEDATA_GETATOMIZEDNAMEWPREFIX_OFFSET))(this, nameTable);
		}

		::System::Void Clear(::System::Xml::XmlNodeType nodeType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNodeType))((::PBYTE)hIl2Cpp + SYSTEM_XML_VALIDATINGREADERNODEDATA_CLEAR_OFFSET))(this, nodeType);
		}

		::System::Void SetLineInfo(::System::Int32 lineNo, ::System::Int32 linePos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_VALIDATINGREADERNODEDATA_SETLINEINFO_OFFSET))(this, lineNo, linePos);
		}

		::System::Void SetLineInfo_1(::System::Xml::IXmlLineInfo* lineInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::IXmlLineInfo*))((::PBYTE)hIl2Cpp + SYSTEM_XML_VALIDATINGREADERNODEDATA_SETLINEINFO_1_OFFSET))(this, lineInfo);
		}

		::System::Void SetItemData(::System::String* localName, ::System::String* prefix, ::System::String* ns, ::System::Int32 depth)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_VALIDATINGREADERNODEDATA_SETITEMDATA_OFFSET))(this, localName, prefix, ns, depth);
		}

		::System::Void SetItemData_1(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_VALIDATINGREADERNODEDATA_SETITEMDATA_1_OFFSET))(this, value);
		}

		::System::Void SetItemData_2(::System::String* value, ::System::String* originalStringValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_VALIDATINGREADERNODEDATA_SETITEMDATA_2_OFFSET))(this, value, originalStringValue);
		}
	};
}
