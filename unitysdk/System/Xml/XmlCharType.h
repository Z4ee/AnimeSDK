#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_XML_XMLCHARTYPE_COMBINESURROGATECHAR_OFFSET UNITYSDK_OFFSET(0x1AEAA300)
#define SYSTEM_XML_XMLCHARTYPE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1AEA21E0)
#define SYSTEM_XML_XMLCHARTYPE_GET_STATICLOCK_OFFSET UNITYSDK_OFFSET(0x1AEA9D00)
#define SYSTEM_XML_XMLCHARTYPE_INITINSTANCE_OFFSET UNITYSDK_OFFSET(0x1AEA9D80)
#define SYSTEM_XML_XMLCHARTYPE_INRANGE_OFFSET UNITYSDK_OFFSET(0x1AEAA2D0)
#define SYSTEM_XML_XMLCHARTYPE_ISCHARDATA_OFFSET UNITYSDK_OFFSET(0x386D200)
#define SYSTEM_XML_XMLCHARTYPE_ISDIGIT_OFFSET UNITYSDK_OFFSET(0x1AEAA2C0)
#define SYSTEM_XML_XMLCHARTYPE_ISHIGHSURROGATE_OFFSET UNITYSDK_OFFSET(0x1AEAA2E0)
#define SYSTEM_XML_XMLCHARTYPE_ISLETTER_OFFSET UNITYSDK_OFFSET(0x386D2F0)
#define SYSTEM_XML_XMLCHARTYPE_ISLOWSURROGATE_OFFSET UNITYSDK_OFFSET(0x1AEAA2F0)
#define SYSTEM_XML_XMLCHARTYPE_ISNAMECHARXML4E_OFFSET UNITYSDK_OFFSET(0x386D390)
#define SYSTEM_XML_XMLCHARTYPE_ISNAMESINGLECHAR_OFFSET UNITYSDK_OFFSET(0x386D1C0)
#define SYSTEM_XML_XMLCHARTYPE_ISNCNAMECHARXML4E_OFFSET UNITYSDK_OFFSET(0x386D320)
#define SYSTEM_XML_XMLCHARTYPE_ISNCNAMESINGLECHAR_OFFSET UNITYSDK_OFFSET(0x386D160)
#define SYSTEM_XML_XMLCHARTYPE_ISONLYCHARDATA_OFFSET UNITYSDK_OFFSET(0x386D4C0)
#define SYSTEM_XML_XMLCHARTYPE_ISONLYDIGITS_OFFSET UNITYSDK_OFFSET(0x1AEAA490)
#define SYSTEM_XML_XMLCHARTYPE_ISONLYWHITESPACEWITHPOS_OFFSET UNITYSDK_OFFSET(0x386D450)
#define SYSTEM_XML_XMLCHARTYPE_ISONLYWHITESPACE_OFFSET UNITYSDK_OFFSET(0x386D3D0)
#define SYSTEM_XML_XMLCHARTYPE_ISPUBIDCHAR_OFFSET UNITYSDK_OFFSET(0x386D230)
#define SYSTEM_XML_XMLCHARTYPE_ISPUBLICID_OFFSET UNITYSDK_OFFSET(0x386D4D0)
#define SYSTEM_XML_XMLCHARTYPE_ISSTARTNCNAMECHARXML4E_OFFSET UNITYSDK_OFFSET(0x386D350)
#define SYSTEM_XML_XMLCHARTYPE_ISSTARTNCNAMESINGLECHAR_OFFSET UNITYSDK_OFFSET(0x386D190)
#define SYSTEM_XML_XMLCHARTYPE_ISSURROGATE_OFFSET UNITYSDK_OFFSET(0x1AEA0420)
#define SYSTEM_XML_XMLCHARTYPE_ISTEXTCHAR_OFFSET UNITYSDK_OFFSET(0x386D2C0)
#define SYSTEM_XML_XMLCHARTYPE_ISWHITESPACE_OFFSET UNITYSDK_OFFSET(0x386D130)
#define SYSTEM_XML_XMLCHARTYPE_SETPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1AEA9F70)
#define SYSTEM_XML_XMLCHARTYPE_SPLITSURROGATECHAR_OFFSET UNITYSDK_OFFSET(0x1AEAA320)
#define SYSTEM_XML_XMLCHARTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0xC630)

namespace System::Xml
{
	inline static constexpr unsigned int XmlCharType_TypeDefinitionIndex = 1928;

	struct alignas(8) XmlCharType
	{
		static ::Il2CppArray<::System::Byte>** StaticGet_s_CharProperties()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(XmlCharType_TypeDefinitionIndex)->GetStaticField(0x17590);
		}
		static ::System::Object** StaticGet_s_Lock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(XmlCharType_TypeDefinitionIndex)->GetStaticField(0x17598);
		}
		::Il2CppArray<::System::Byte>* charProperties; // 0x10

		::System::Void _ctor(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARTYPE__CTOR_OFFSET))(this, a1);
		}

		static ::System::Object* get_StaticLock()
		{
			return ((::System::Object*(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARTYPE_GET_STATICLOCK_OFFSET))();
		}

		static ::System::Void InitInstance()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARTYPE_INITINSTANCE_OFFSET))();
		}

		static ::System::Void SetProperties(::System::String* a1, ::System::Byte a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARTYPE_SETPROPERTIES_OFFSET))(a1, a2);
		}

		static ::System::Xml::XmlCharType get_Instance()
		{
			return ((::System::Xml::XmlCharType(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARTYPE_GET_INSTANCE_OFFSET))();
		}

		::System::Boolean IsWhiteSpace(::System::Char a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARTYPE_ISWHITESPACE_OFFSET))(this, a1);
		}

		::System::Boolean IsNCNameSingleChar(::System::Char a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARTYPE_ISNCNAMESINGLECHAR_OFFSET))(this, a1);
		}

		::System::Boolean IsStartNCNameSingleChar(::System::Char a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARTYPE_ISSTARTNCNAMESINGLECHAR_OFFSET))(this, a1);
		}

		::System::Boolean IsNameSingleChar(::System::Char a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARTYPE_ISNAMESINGLECHAR_OFFSET))(this, a1);
		}

		::System::Boolean IsCharData(::System::Char a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARTYPE_ISCHARDATA_OFFSET))(this, a1);
		}

		::System::Boolean IsPubidChar(::System::Char a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARTYPE_ISPUBIDCHAR_OFFSET))(this, a1);
		}

		::System::Boolean IsTextChar(::System::Char a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARTYPE_ISTEXTCHAR_OFFSET))(this, a1);
		}

		::System::Boolean IsLetter(::System::Char a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARTYPE_ISLETTER_OFFSET))(this, a1);
		}

		::System::Boolean IsNCNameCharXml4e(::System::Char a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARTYPE_ISNCNAMECHARXML4E_OFFSET))(this, a1);
		}

		::System::Boolean IsStartNCNameCharXml4e(::System::Char a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARTYPE_ISSTARTNCNAMECHARXML4E_OFFSET))(this, a1);
		}

		::System::Boolean IsNameCharXml4e(::System::Char a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARTYPE_ISNAMECHARXML4E_OFFSET))(this, a1);
		}

		static ::System::Boolean IsDigit(::System::Char a1)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARTYPE_ISDIGIT_OFFSET))(a1);
		}

		static ::System::Boolean IsHighSurrogate(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARTYPE_ISHIGHSURROGATE_OFFSET))(a1);
		}

		static ::System::Boolean IsLowSurrogate(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARTYPE_ISLOWSURROGATE_OFFSET))(a1);
		}

		static ::System::Boolean IsSurrogate(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARTYPE_ISSURROGATE_OFFSET))(a1);
		}

		static ::System::Int32 CombineSurrogateChar(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARTYPE_COMBINESURROGATECHAR_OFFSET))(a1, a2);
		}

		static ::System::Void SplitSurrogateChar(::System::Int32 a1, ::System::Char& a2, ::System::Char& a3)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Char&, ::System::Char&))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARTYPE_SPLITSURROGATECHAR_OFFSET))(a1, a2, a3);
		}

		::System::Boolean IsOnlyWhitespace(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARTYPE_ISONLYWHITESPACE_OFFSET))(this, a1);
		}

		::System::Int32 IsOnlyWhitespaceWithPos(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARTYPE_ISONLYWHITESPACEWITHPOS_OFFSET))(this, a1);
		}

		::System::Int32 IsOnlyCharData(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARTYPE_ISONLYCHARDATA_OFFSET))(this, a1);
		}

		static ::System::Boolean IsOnlyDigits(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARTYPE_ISONLYDIGITS_OFFSET))(a1, a2, a3);
		}

		::System::Int32 IsPublicId(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARTYPE_ISPUBLICID_OFFSET))(this, a1);
		}

		static ::System::Boolean InRange(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARTYPE_INRANGE_OFFSET))(a1, a2, a3);
		}
	};
}
