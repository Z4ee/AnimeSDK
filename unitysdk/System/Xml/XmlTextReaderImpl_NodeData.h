#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/LineInfo.h"
#include "unitysdk/System/Xml/XmlNodeType.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }
namespace System::Xml { class XmlNameTable; }

#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_CLEARNAME_OFFSET UNITYSDK_OFFSET(0x1A07B4C0)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A07B360)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_COPYTO_OFFSET UNITYSDK_OFFSET(0x1A07B660)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_CREATENAMEWPREFIX_OFFSET UNITYSDK_OFFSET(0x1A07B740)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_GETNAMEWPREFIX_OFFSET UNITYSDK_OFFSET(0x1A07B6E0)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_GET_ISDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1A07B400)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_GET_ISEMPTYELEMENT_OFFSET UNITYSDK_OFFSET(0x1A07B3D0)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_GET_LINENO_OFFSET UNITYSDK_OFFSET(0x1A07B3B0)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_GET_LINEPOS_OFFSET UNITYSDK_OFFSET(0x1A07B3C0)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_GET_NONE_OFFSET UNITYSDK_OFFSET(0x1A07B220)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_GET_STRINGVALUE_OFFSET UNITYSDK_OFFSET(0x1A07B440)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_GET_VALUEBUFFERED_OFFSET UNITYSDK_OFFSET(0x1A07B430)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_ONBUFFERINVALIDATED_OFFSET UNITYSDK_OFFSET(0x1A07B620)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_SETLINEINFO2_OFFSET UNITYSDK_OFFSET(0x1A07B500)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_SETLINEINFO_OFFSET UNITYSDK_OFFSET(0x1A07B4F0)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_SETNAMEDNODE_1_OFFSET UNITYSDK_OFFSET(0x1A07B5C0)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_SETNAMEDNODE_OFFSET UNITYSDK_OFFSET(0x1A07B590)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_SETVALUENODE_1_OFFSET UNITYSDK_OFFSET(0x1A07B550)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_SETVALUENODE_OFFSET UNITYSDK_OFFSET(0x1A07B510)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_SETVALUE_1_OFFSET UNITYSDK_OFFSET(0x1A07B600)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1A07A340)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_SET_ISDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1A07B420)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_SET_ISEMPTYELEMENT_OFFSET UNITYSDK_OFFSET(0x1A07B3F0)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_SYSTEM_ICOMPARABLE_COMPARETO_OFFSET UNITYSDK_OFFSET(0x1A07B7A0)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_TRIMSPACESINVALUE_OFFSET UNITYSDK_OFFSET(0x1A07B480)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A07B300)

namespace System::Xml
{
	inline static constexpr unsigned int XmlTextReaderImpl_NodeData_TypeDefinitionIndex = 1847;

	class XmlTextReaderImpl_NodeData : public ::System::Object
	{
	public:
		static ::System::Xml::XmlTextReaderImpl_NodeData** StaticGet_s_None()
		{
			return (::System::Xml::XmlTextReaderImpl_NodeData**)Il2CppClass::FromTypeDefinitionIndex(XmlTextReaderImpl_NodeData_TypeDefinitionIndex)->GetStaticField(0xDC50);
		}
		::System::String* nameWPrefix; // 0x10
		::System::String* prefix; // 0x18
		::System::String* ns; // 0x20
		::System::Object* schemaType; // 0x28
		::System::Xml::XmlTextReaderImpl_NodeData* nextAttrValueChunk; // 0x30
		::System::Object* typedValue; // 0x38
		::Il2CppArray<::System::Char>* chars; // 0x40
		::System::String* localName; // 0x48
		::System::String* value; // 0x50
		::System::Xml::LineInfo lineInfo; // 0x58
		::System::Int32 valueStartPos; // 0x60
		::System::Int32 depth; // 0x64
		::System::Char quoteChar; // 0x68
		::System::Boolean xmlContextPushed; // 0x6A
		::System::Boolean isEmptyOrDefault; // 0x6B
		::System::Xml::LineInfo lineInfo2; // 0x6C
		::System::Int32 entityId; // 0x74
		::System::Xml::XmlNodeType type; // 0x78
		::System::Int32 valueLength; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA__CTOR_OFFSET))(this);
		}

		static ::System::Xml::XmlTextReaderImpl_NodeData* get_None()
		{
			return ((::System::Xml::XmlTextReaderImpl_NodeData*(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_GET_NONE_OFFSET))();
		}

		::System::Int32 get_LineNo()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_GET_LINENO_OFFSET))(this);
		}

		::System::Int32 get_LinePos()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_GET_LINEPOS_OFFSET))(this);
		}

		::System::Boolean get_IsEmptyElement()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_GET_ISEMPTYELEMENT_OFFSET))(this);
		}

		::System::Void set_IsEmptyElement(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_SET_ISEMPTYELEMENT_OFFSET))(this, value);
		}

		::System::Boolean get_IsDefaultAttribute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_GET_ISDEFAULTATTRIBUTE_OFFSET))(this);
		}

		::System::Void set_IsDefaultAttribute(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_SET_ISDEFAULTATTRIBUTE_OFFSET))(this, value);
		}

		::System::Boolean get_ValueBuffered()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_GET_VALUEBUFFERED_OFFSET))(this);
		}

		::System::String* get_StringValue()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_GET_STRINGVALUE_OFFSET))(this);
		}

		::System::Void TrimSpacesInValue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_TRIMSPACESINVALUE_OFFSET))(this);
		}

		::System::Void Clear(::System::Xml::XmlNodeType type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNodeType))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_CLEAR_OFFSET))(this, type);
		}

		::System::Void ClearName()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_CLEARNAME_OFFSET))(this);
		}

		::System::Void SetLineInfo(::System::Int32 lineNo, ::System::Int32 linePos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_SETLINEINFO_OFFSET))(this, lineNo, linePos);
		}

		::System::Void SetLineInfo2(::System::Int32 lineNo, ::System::Int32 linePos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_SETLINEINFO2_OFFSET))(this, lineNo, linePos);
		}

		::System::Void SetValueNode(::System::Xml::XmlNodeType type, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNodeType, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_SETVALUENODE_OFFSET))(this, type, value);
		}

		::System::Void SetValueNode_1(::System::Xml::XmlNodeType type, ::Il2CppArray<::System::Char>* chars, ::System::Int32 startPos, ::System::Int32 len)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNodeType, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_SETVALUENODE_1_OFFSET))(this, type, chars, startPos, len);
		}

		::System::Void SetNamedNode(::System::Xml::XmlNodeType type, ::System::String* localName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNodeType, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_SETNAMEDNODE_OFFSET))(this, type, localName);
		}

		::System::Void SetNamedNode_1(::System::Xml::XmlNodeType type, ::System::String* localName, ::System::String* prefix, ::System::String* nameWPrefix)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNodeType, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_SETNAMEDNODE_1_OFFSET))(this, type, localName, prefix, nameWPrefix);
		}

		::System::Void SetValue(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_SETVALUE_OFFSET))(this, value);
		}

		::System::Void SetValue_1(::Il2CppArray<::System::Char>* chars, ::System::Int32 startPos, ::System::Int32 len)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_SETVALUE_1_OFFSET))(this, chars, startPos, len);
		}

		::System::Void OnBufferInvalidated()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_ONBUFFERINVALIDATED_OFFSET))(this);
		}

		::System::Void CopyTo(::System::Int32 valueOffset, ::System::Text::StringBuilder* sb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_COPYTO_OFFSET))(this, valueOffset, sb);
		}

		::System::String* GetNameWPrefix(::System::Xml::XmlNameTable* nt)
		{
			return ((::System::String*(*)(::PVOID, ::System::Xml::XmlNameTable*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_GETNAMEWPREFIX_OFFSET))(this, nt);
		}

		::System::String* CreateNameWPrefix(::System::Xml::XmlNameTable* nt)
		{
			return ((::System::String*(*)(::PVOID, ::System::Xml::XmlNameTable*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_CREATENAMEWPREFIX_OFFSET))(this, nt);
		}

		::System::Int32 System_IComparable_CompareTo(::System::Object* obj)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_SYSTEM_ICOMPARABLE_COMPARETO_OFFSET))(this, obj);
		}
	};
}
