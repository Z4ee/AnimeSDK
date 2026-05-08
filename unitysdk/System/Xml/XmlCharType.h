#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_XML_XMLCHARTYPE_COMBINESURROGATECHAR_OFFSET UNITYSDK_OFFSET(0x19D4CA50)
#define SYSTEM_XML_XMLCHARTYPE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x19D2E9F0)
#define SYSTEM_XML_XMLCHARTYPE_GET_STATICLOCK_OFFSET UNITYSDK_OFFSET(0x19D4C3F0)
#define SYSTEM_XML_XMLCHARTYPE_INITINSTANCE_OFFSET UNITYSDK_OFFSET(0x19D4C470)
#define SYSTEM_XML_XMLCHARTYPE_INRANGE_OFFSET UNITYSDK_OFFSET(0x19D4CA10)
#define SYSTEM_XML_XMLCHARTYPE_ISCHARDATA_OFFSET UNITYSDK_OFFSET(0x8A9DE0)
#define SYSTEM_XML_XMLCHARTYPE_ISDIGIT_OFFSET UNITYSDK_OFFSET(0x19D2EBF0)
#define SYSTEM_XML_XMLCHARTYPE_ISHIGHSURROGATE_OFFSET UNITYSDK_OFFSET(0x19D4CA20)
#define SYSTEM_XML_XMLCHARTYPE_ISLETTER_OFFSET UNITYSDK_OFFSET(0x8A9ED0)
#define SYSTEM_XML_XMLCHARTYPE_ISLOWSURROGATE_OFFSET UNITYSDK_OFFSET(0x19D4CA30)
#define SYSTEM_XML_XMLCHARTYPE_ISNAMECHARXML4E_OFFSET UNITYSDK_OFFSET(0x8A9FA0)
#define SYSTEM_XML_XMLCHARTYPE_ISNAMESINGLECHAR_OFFSET UNITYSDK_OFFSET(0x8A9D90)
#define SYSTEM_XML_XMLCHARTYPE_ISNCNAMECHARXML4E_OFFSET UNITYSDK_OFFSET(0x8A9F10)
#define SYSTEM_XML_XMLCHARTYPE_ISNCNAMESINGLECHAR_OFFSET UNITYSDK_OFFSET(0x8A9D10)
#define SYSTEM_XML_XMLCHARTYPE_ISONLYCHARDATA_OFFSET UNITYSDK_OFFSET(0x8AA270)
#define SYSTEM_XML_XMLCHARTYPE_ISONLYDIGITS_OFFSET UNITYSDK_OFFSET(0x19D4CED0)
#define SYSTEM_XML_XMLCHARTYPE_ISONLYWHITESPACEWITHPOS_OFFSET UNITYSDK_OFFSET(0x8AA130)
#define SYSTEM_XML_XMLCHARTYPE_ISONLYWHITESPACE_OFFSET UNITYSDK_OFFSET(0x8A9FF0)
#define SYSTEM_XML_XMLCHARTYPE_ISPUBIDCHAR_OFFSET UNITYSDK_OFFSET(0x8A9E20)
#define SYSTEM_XML_XMLCHARTYPE_ISPUBLICID_OFFSET UNITYSDK_OFFSET(0x8AA280)
#define SYSTEM_XML_XMLCHARTYPE_ISSTARTNCNAMECHARXML4E_OFFSET UNITYSDK_OFFSET(0x8A9F50)
#define SYSTEM_XML_XMLCHARTYPE_ISSTARTNCNAMESINGLECHAR_OFFSET UNITYSDK_OFFSET(0x8A9D50)
#define SYSTEM_XML_XMLCHARTYPE_ISSURROGATE_OFFSET UNITYSDK_OFFSET(0x19D4CA40)
#define SYSTEM_XML_XMLCHARTYPE_ISWHITESPACE_OFFSET UNITYSDK_OFFSET(0x8A9CD0)
#define SYSTEM_XML_XMLCHARTYPE_SETPROPERTIES_OFFSET UNITYSDK_OFFSET(0x19D4C660)
#define SYSTEM_XML_XMLCHARTYPE_SPLITSURROGATECHAR_OFFSET UNITYSDK_OFFSET(0x19D4CA70)
#define SYSTEM_XML_XMLCHARTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x2E5940)

namespace System::Xml
{
	inline static constexpr unsigned int XmlCharType_TypeDefinitionIndex = 1809;

	struct alignas(8) XmlCharType
	{
		static ::Il2CppArray<::System::Byte>** StaticGet_s_CharProperties()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(XmlCharType_TypeDefinitionIndex)->GetStaticField(0x1F00);
		}
		static ::System::Object** StaticGet_s_Lock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(XmlCharType_TypeDefinitionIndex)->GetStaticField(0x1F08);
		}
		::Il2CppArray<::System::Byte>* charProperties; // 0x10

		::System::Void _ctor(::Il2CppArray<::System::Byte>* charProperties)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARTYPE__CTOR_OFFSET))(this, charProperties);
		}

		static ::System::Object* get_StaticLock()
		{
			return ((::System::Object*(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARTYPE_GET_STATICLOCK_OFFSET))();
		}

		static ::System::Void InitInstance()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARTYPE_INITINSTANCE_OFFSET))();
		}

		static ::System::Void SetProperties(::System::String* ranges, ::System::Byte value)
		{
			return ((::System::Void(*)(::System::String*, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARTYPE_SETPROPERTIES_OFFSET))(ranges, value);
		}

		static ::System::Xml::XmlCharType get_Instance()
		{
			return ((::System::Xml::XmlCharType(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARTYPE_GET_INSTANCE_OFFSET))();
		}

		::System::Boolean IsWhiteSpace(::System::Char ch)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARTYPE_ISWHITESPACE_OFFSET))(this, ch);
		}

		::System::Boolean IsNCNameSingleChar(::System::Char ch)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARTYPE_ISNCNAMESINGLECHAR_OFFSET))(this, ch);
		}

		::System::Boolean IsStartNCNameSingleChar(::System::Char ch)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARTYPE_ISSTARTNCNAMESINGLECHAR_OFFSET))(this, ch);
		}

		::System::Boolean IsNameSingleChar(::System::Char ch)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARTYPE_ISNAMESINGLECHAR_OFFSET))(this, ch);
		}

		::System::Boolean IsCharData(::System::Char ch)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARTYPE_ISCHARDATA_OFFSET))(this, ch);
		}

		::System::Boolean IsPubidChar(::System::Char ch)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARTYPE_ISPUBIDCHAR_OFFSET))(this, ch);
		}

		::System::Boolean IsLetter(::System::Char ch)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARTYPE_ISLETTER_OFFSET))(this, ch);
		}

		::System::Boolean IsNCNameCharXml4e(::System::Char ch)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARTYPE_ISNCNAMECHARXML4E_OFFSET))(this, ch);
		}

		::System::Boolean IsStartNCNameCharXml4e(::System::Char ch)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARTYPE_ISSTARTNCNAMECHARXML4E_OFFSET))(this, ch);
		}

		::System::Boolean IsNameCharXml4e(::System::Char ch)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARTYPE_ISNAMECHARXML4E_OFFSET))(this, ch);
		}

		static ::System::Boolean IsDigit(::System::Char ch)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARTYPE_ISDIGIT_OFFSET))(ch);
		}

		static ::System::Boolean IsHighSurrogate(::System::Int32 ch)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARTYPE_ISHIGHSURROGATE_OFFSET))(ch);
		}

		static ::System::Boolean IsLowSurrogate(::System::Int32 ch)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARTYPE_ISLOWSURROGATE_OFFSET))(ch);
		}

		static ::System::Boolean IsSurrogate(::System::Int32 ch)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARTYPE_ISSURROGATE_OFFSET))(ch);
		}

		static ::System::Int32 CombineSurrogateChar(::System::Int32 lowChar, ::System::Int32 highChar)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARTYPE_COMBINESURROGATECHAR_OFFSET))(lowChar, highChar);
		}

		static ::System::Void SplitSurrogateChar(::System::Int32 combinedChar, ::System::Char& lowChar, ::System::Char& highChar)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Char&, ::System::Char&))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARTYPE_SPLITSURROGATECHAR_OFFSET))(combinedChar, lowChar, highChar);
		}

		::System::Boolean IsOnlyWhitespace(::System::String* str)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARTYPE_ISONLYWHITESPACE_OFFSET))(this, str);
		}

		::System::Int32 IsOnlyWhitespaceWithPos(::System::String* str)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARTYPE_ISONLYWHITESPACEWITHPOS_OFFSET))(this, str);
		}

		::System::Int32 IsOnlyCharData(::System::String* str)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARTYPE_ISONLYCHARDATA_OFFSET))(this, str);
		}

		static ::System::Boolean IsOnlyDigits(::System::String* str, ::System::Int32 startPos, ::System::Int32 len)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARTYPE_ISONLYDIGITS_OFFSET))(str, startPos, len);
		}

		::System::Int32 IsPublicId(::System::String* str)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARTYPE_ISPUBLICID_OFFSET))(this, str);
		}

		static ::System::Boolean InRange(::System::Int32 value, ::System::Int32 start, ::System::Int32 end)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARTYPE_INRANGE_OFFSET))(value, start, end);
		}
	};
}
