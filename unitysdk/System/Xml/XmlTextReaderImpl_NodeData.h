#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/LineInfo.h"
#include "unitysdk/System/Xml/XmlNodeType.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }
namespace System::Xml { class XmlNameTable; }

#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_CLEARNAME_OFFSET UNITYSDK_OFFSET(0x1BD050D0)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0x1BD04F90)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_COPYTO_1_OFFSET UNITYSDK_OFFSET(0x1BD05300)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_COPYTO_OFFSET UNITYSDK_OFFSET(0x1BD05280)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_CREATENAMEWPREFIX_OFFSET UNITYSDK_OFFSET(0x1BD053E0)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_GETNAMEWPREFIX_OFFSET UNITYSDK_OFFSET(0x1BD05360)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_GET_ISDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1BD05020)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_GET_ISEMPTYELEMENT_OFFSET UNITYSDK_OFFSET(0x1BD05000)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_GET_LINENO_OFFSET UNITYSDK_OFFSET(0x1BD04FE0)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_GET_LINEPOS_OFFSET UNITYSDK_OFFSET(0x1BD04FF0)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_GET_NONE_OFFSET UNITYSDK_OFFSET(0x1BD04E50)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_GET_STRINGVALUE_OFFSET UNITYSDK_OFFSET(0x1BD05050)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_GET_VALUEBUFFERED_OFFSET UNITYSDK_OFFSET(0x1BD05040)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_ONBUFFERINVALIDATED_OFFSET UNITYSDK_OFFSET(0x1BD05240)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_SETLINEINFO2_OFFSET UNITYSDK_OFFSET(0x1BD05110)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_SETLINEINFO_OFFSET UNITYSDK_OFFSET(0x1BD05100)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_SETNAMEDNODE_1_OFFSET UNITYSDK_OFFSET(0x1BD051D0)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_SETNAMEDNODE_OFFSET UNITYSDK_OFFSET(0x1BD051A0)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_SETVALUENODE_1_OFFSET UNITYSDK_OFFSET(0x1BD05160)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_SETVALUENODE_OFFSET UNITYSDK_OFFSET(0x1BD05120)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_SETVALUE_1_OFFSET UNITYSDK_OFFSET(0x1BD05220)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1BD05210)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_SYSTEM_ICOMPARABLE_COMPARETO_OFFSET UNITYSDK_OFFSET(0x1BD05460)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_TRIMSPACESINVALUE_OFFSET UNITYSDK_OFFSET(0x1BD05090)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD04F30)

namespace System::Xml
{
	inline static constexpr unsigned int XmlTextReaderImpl_NodeData_TypeDefinitionIndex = 1726;

	class XmlTextReaderImpl_NodeData : public ::System::Object
	{
	public:
		static ::System::Xml::XmlTextReaderImpl_NodeData** StaticGet_s_None()
		{
			return (::System::Xml::XmlTextReaderImpl_NodeData**)Il2CppClass::FromTypeDefinitionIndex(XmlTextReaderImpl_NodeData_TypeDefinitionIndex)->GetStaticField(0x1A20);
		}
		::System::Xml::XmlTextReaderImpl_NodeData* nextAttrValueChunk; // 0x10
		::System::String* localName; // 0x18
		::System::Object* schemaType; // 0x20
		::Il2CppArray<::System::Char>* chars; // 0x28
		::System::String* ns; // 0x30
		::System::Object* typedValue; // 0x38
		::System::String* nameWPrefix; // 0x40
		::System::String* value; // 0x48
		::System::String* prefix; // 0x50
		::System::Int32 depth; // 0x58
		::System::Char quoteChar; // 0x5C
		::System::Boolean xmlContextPushed; // 0x5E
		::System::Boolean isEmptyOrDefault; // 0x5F
		::System::Xml::XmlNodeType type; // 0x60
		::System::Int32 entityId; // 0x64
		::System::Xml::LineInfo lineInfo; // 0x68
		::System::Int32 valueStartPos; // 0x70
		::System::Xml::LineInfo lineInfo2; // 0x74
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

		::System::Boolean get_IsDefaultAttribute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_GET_ISDEFAULTATTRIBUTE_OFFSET))(this);
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

		::System::Int32 CopyTo_1(::System::Int32 valueOffset, ::Il2CppArray<::System::Char>* buffer, ::System::Int32 offset, ::System::Int32 length)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_COPYTO_1_OFFSET))(this, valueOffset, buffer, offset, length);
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
