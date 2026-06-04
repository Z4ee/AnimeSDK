#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/LineInfo.h"
#include "unitysdk/System/Xml/XmlNodeType.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }
namespace System::Xml { class XmlNameTable; }

#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_CLEARNAME_OFFSET UNITYSDK_OFFSET(0x1AEECBD0)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0x1AEECA70)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_COPYTO_OFFSET UNITYSDK_OFFSET(0x1AEECD70)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_CREATENAMEWPREFIX_OFFSET UNITYSDK_OFFSET(0x1AEECE50)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_GETNAMEWPREFIX_OFFSET UNITYSDK_OFFSET(0x1AEECDF0)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_GET_ISDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1AEECB10)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_GET_ISEMPTYELEMENT_OFFSET UNITYSDK_OFFSET(0x1AEECAE0)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_GET_LINENO_OFFSET UNITYSDK_OFFSET(0x1AEECAC0)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_GET_LINEPOS_OFFSET UNITYSDK_OFFSET(0x1AEECAD0)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_GET_NONE_OFFSET UNITYSDK_OFFSET(0x1AEEC930)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_GET_STRINGVALUE_OFFSET UNITYSDK_OFFSET(0x1AEECB50)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_GET_VALUEBUFFERED_OFFSET UNITYSDK_OFFSET(0x1AEECB40)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_ONBUFFERINVALIDATED_OFFSET UNITYSDK_OFFSET(0x1AEECD30)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_SETLINEINFO2_OFFSET UNITYSDK_OFFSET(0x1AEECC10)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_SETLINEINFO_OFFSET UNITYSDK_OFFSET(0x1AEECC00)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_SETNAMEDNODE_1_OFFSET UNITYSDK_OFFSET(0x1AEECCD0)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_SETNAMEDNODE_OFFSET UNITYSDK_OFFSET(0x1AEECCA0)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_SETVALUENODE_1_OFFSET UNITYSDK_OFFSET(0x1AEECC60)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_SETVALUENODE_OFFSET UNITYSDK_OFFSET(0x1AEECC20)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_SETVALUE_1_OFFSET UNITYSDK_OFFSET(0x1AEECD10)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1AEEBA70)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_SET_ISDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1AEECB30)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_SET_ISEMPTYELEMENT_OFFSET UNITYSDK_OFFSET(0x1AEECB00)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_SYSTEM_ICOMPARABLE_COMPARETO_OFFSET UNITYSDK_OFFSET(0x1AEECEB0)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_TRIMSPACESINVALUE_OFFSET UNITYSDK_OFFSET(0x1AEECB90)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AEECA10)

namespace System::Xml
{
	inline static constexpr unsigned int XmlTextReaderImpl_NodeData_TypeDefinitionIndex = 1847;

	class XmlTextReaderImpl_NodeData : public ::System::Object
	{
	public:
		static ::System::Xml::XmlTextReaderImpl_NodeData** StaticGet_s_None()
		{
			return (::System::Xml::XmlTextReaderImpl_NodeData**)Il2CppClass::FromTypeDefinitionIndex(XmlTextReaderImpl_NodeData_TypeDefinitionIndex)->GetStaticField(0x19E60);
		}
		::Il2CppArray<::System::Char>* chars; // 0x10
		::System::String* localName; // 0x18
		::System::Object* typedValue; // 0x20
		::System::String* nameWPrefix; // 0x28
		::System::String* ns; // 0x30
		::System::Xml::XmlTextReaderImpl_NodeData* nextAttrValueChunk; // 0x38
		::System::Object* schemaType; // 0x40
		::System::String* prefix; // 0x48
		::System::String* value; // 0x50
		::System::Int32 depth; // 0x58
		::System::Int32 valueStartPos; // 0x5C
		::System::Xml::LineInfo lineInfo; // 0x60
		::System::Xml::XmlNodeType type; // 0x68
		::System::Boolean isEmptyOrDefault; // 0x6C
		::System::Boolean xmlContextPushed; // 0x6D
		::System::Char quoteChar; // 0x6E
		::System::Int32 entityId; // 0x70
		::System::Int32 valueLength; // 0x74
		::System::Xml::LineInfo lineInfo2; // 0x78

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

		::System::Void set_IsEmptyElement(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_SET_ISEMPTYELEMENT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsDefaultAttribute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_GET_ISDEFAULTATTRIBUTE_OFFSET))(this);
		}

		::System::Void set_IsDefaultAttribute(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_SET_ISDEFAULTATTRIBUTE_OFFSET))(this, a1);
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

		::System::Void Clear(::System::Xml::XmlNodeType a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNodeType))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_CLEAR_OFFSET))(this, a1);
		}

		::System::Void ClearName()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_CLEARNAME_OFFSET))(this);
		}

		::System::Void SetLineInfo(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_SETLINEINFO_OFFSET))(this, a1, a2);
		}

		::System::Void SetLineInfo2(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_SETLINEINFO2_OFFSET))(this, a1, a2);
		}

		::System::Void SetValueNode(::System::Xml::XmlNodeType a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNodeType, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_SETVALUENODE_OFFSET))(this, a1, a2);
		}

		::System::Void SetValueNode_1(::System::Xml::XmlNodeType a1, ::Il2CppArray<::System::Char>* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNodeType, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_SETVALUENODE_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetNamedNode(::System::Xml::XmlNodeType a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNodeType, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_SETNAMEDNODE_OFFSET))(this, a1, a2);
		}

		::System::Void SetNamedNode_1(::System::Xml::XmlNodeType a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNodeType, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_SETNAMEDNODE_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetValue(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_SETVALUE_OFFSET))(this, a1);
		}

		::System::Void SetValue_1(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_SETVALUE_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnBufferInvalidated()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_ONBUFFERINVALIDATED_OFFSET))(this);
		}

		::System::Void CopyTo(::System::Int32 a1, ::System::Text::StringBuilder* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_COPYTO_OFFSET))(this, a1, a2);
		}

		::System::String* GetNameWPrefix(::System::Xml::XmlNameTable* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Xml::XmlNameTable*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_GETNAMEWPREFIX_OFFSET))(this, a1);
		}

		::System::String* CreateNameWPrefix(::System::Xml::XmlNameTable* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Xml::XmlNameTable*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_CREATENAMEWPREFIX_OFFSET))(this, a1);
		}

		::System::Int32 System_IComparable_CompareTo(::System::Object* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_SYSTEM_ICOMPARABLE_COMPARETO_OFFSET))(this, a1);
		}
	};
}
