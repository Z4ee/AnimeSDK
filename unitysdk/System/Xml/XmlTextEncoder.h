#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/XmlCharType.h"

namespace System { class String; }
namespace System::IO { class TextWriter; }
namespace System::Text { class StringBuilder; }

#define SYSTEM_XML_XMLTEXTENCODER_ENDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1A062C40)
#define SYSTEM_XML_XMLTEXTENCODER_GET_ATTRIBUTEVALUE_OFFSET UNITYSDK_OFFSET(0x1A062C70)
#define SYSTEM_XML_XMLTEXTENCODER_SET_QUOTECHAR_OFFSET UNITYSDK_OFFSET(0x1A062B90)
#define SYSTEM_XML_XMLTEXTENCODER_STARTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1A062BA0)
#define SYSTEM_XML_XMLTEXTENCODER_WRITECHARENTITYIMPL_1_OFFSET UNITYSDK_OFFSET(0x1A064370)
#define SYSTEM_XML_XMLTEXTENCODER_WRITECHARENTITYIMPL_OFFSET UNITYSDK_OFFSET(0x1A063400)
#define SYSTEM_XML_XMLTEXTENCODER_WRITECHARENTITY_OFFSET UNITYSDK_OFFSET(0x1A0641F0)
#define SYSTEM_XML_XMLTEXTENCODER_WRITEENTITYREFIMPL_OFFSET UNITYSDK_OFFSET(0x1A0634C0)
#define SYSTEM_XML_XMLTEXTENCODER_WRITEENTITYREF_OFFSET UNITYSDK_OFFSET(0x1A064410)
#define SYSTEM_XML_XMLTEXTENCODER_WRITERAWWITHSURROGATECHECKING_OFFSET UNITYSDK_OFFSET(0x1A063EC0)
#define SYSTEM_XML_XMLTEXTENCODER_WRITERAW_OFFSET UNITYSDK_OFFSET(0x1A064080)
#define SYSTEM_XML_XMLTEXTENCODER_WRITESTRINGFRAGMENT_OFFSET UNITYSDK_OFFSET(0x1A063E10)
#define SYSTEM_XML_XMLTEXTENCODER_WRITESURROGATECHARENTITY_OFFSET UNITYSDK_OFFSET(0x1A063530)
#define SYSTEM_XML_XMLTEXTENCODER_WRITESURROGATECHAR_OFFSET UNITYSDK_OFFSET(0x1A062CB0)
#define SYSTEM_XML_XMLTEXTENCODER_WRITE_1_OFFSET UNITYSDK_OFFSET(0x1A0636A0)
#define SYSTEM_XML_XMLTEXTENCODER_WRITE_OFFSET UNITYSDK_OFFSET(0x1A062D70)
#define SYSTEM_XML_XMLTEXTENCODER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A062B10)

namespace System::Xml
{
	inline static constexpr unsigned int XmlTextEncoder_TypeDefinitionIndex = 1833;

	class XmlTextEncoder : public ::System::Object
	{
	public:
		::System::Text::StringBuilder* attrValue; // 0x10
		::System::IO::TextWriter* textWriter; // 0x18
		::System::Xml::XmlCharType xmlCharType; // 0x20
		::System::Boolean inAttribute; // 0x28
		::System::Boolean cacheAttrValue; // 0x29
		::System::Char quoteChar; // 0x2A

		::System::Void _ctor(::System::IO::TextWriter* textWriter)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTENCODER__CTOR_OFFSET))(this, textWriter);
		}

		::System::Void set_QuoteChar(::System::Char value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTENCODER_SET_QUOTECHAR_OFFSET))(this, value);
		}

		::System::Void StartAttribute(::System::Boolean cacheAttrValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTENCODER_STARTATTRIBUTE_OFFSET))(this, cacheAttrValue);
		}

		::System::Void EndAttribute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTENCODER_ENDATTRIBUTE_OFFSET))(this);
		}

		::System::String* get_AttributeValue()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTENCODER_GET_ATTRIBUTEVALUE_OFFSET))(this);
		}

		::System::Void WriteSurrogateChar(::System::Char lowChar, ::System::Char highChar)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTENCODER_WRITESURROGATECHAR_OFFSET))(this, lowChar, highChar);
		}

		::System::Void Write(::Il2CppArray<::System::Char>* array, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTENCODER_WRITE_OFFSET))(this, array, offset, count);
		}

		::System::Void WriteSurrogateCharEntity(::System::Char lowChar, ::System::Char highChar)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTENCODER_WRITESURROGATECHARENTITY_OFFSET))(this, lowChar, highChar);
		}

		::System::Void Write_1(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTENCODER_WRITE_1_OFFSET))(this, text);
		}

		::System::Void WriteRawWithSurrogateChecking(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTENCODER_WRITERAWWITHSURROGATECHECKING_OFFSET))(this, text);
		}

		::System::Void WriteRaw(::Il2CppArray<::System::Char>* array, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTENCODER_WRITERAW_OFFSET))(this, array, offset, count);
		}

		::System::Void WriteCharEntity(::System::Char ch)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTENCODER_WRITECHARENTITY_OFFSET))(this, ch);
		}

		::System::Void WriteEntityRef(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTENCODER_WRITEENTITYREF_OFFSET))(this, name);
		}

		::System::Void WriteStringFragment(::System::String* str, ::System::Int32 offset, ::System::Int32 count, ::Il2CppArray<::System::Char>* helperBuffer)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Char>*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTENCODER_WRITESTRINGFRAGMENT_OFFSET))(this, str, offset, count, helperBuffer);
		}

		::System::Void WriteCharEntityImpl(::System::Char ch)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTENCODER_WRITECHARENTITYIMPL_OFFSET))(this, ch);
		}

		::System::Void WriteCharEntityImpl_1(::System::String* strVal)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTENCODER_WRITECHARENTITYIMPL_1_OFFSET))(this, strVal);
		}

		::System::Void WriteEntityRefImpl(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTENCODER_WRITEENTITYREFIMPL_OFFSET))(this, name);
		}
	};
}
