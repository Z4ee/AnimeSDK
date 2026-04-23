#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/XmlCharType.h"

namespace System { class Exception; }
namespace System { class String; }

#define SYSTEM_XML_VALIDATENAMES_GETINVALIDNAMEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1A030580)
#define SYSTEM_XML_VALIDATENAMES_ISNAMENONAMESPACES_OFFSET UNITYSDK_OFFSET(0x1A02FD30)
#define SYSTEM_XML_VALIDATENAMES_PARSENAMENONAMESPACES_OFFSET UNITYSDK_OFFSET(0x1A02FB00)
#define SYSTEM_XML_VALIDATENAMES_PARSENCNAME_1_OFFSET UNITYSDK_OFFSET(0x1A02FF70)
#define SYSTEM_XML_VALIDATENAMES_PARSENCNAME_OFFSET UNITYSDK_OFFSET(0x1A02FDB0)
#define SYSTEM_XML_VALIDATENAMES_PARSENMTOKENNONAMESPACES_OFFSET UNITYSDK_OFFSET(0x1A02F980)
#define SYSTEM_XML_VALIDATENAMES_PARSENMTOKEN_OFFSET UNITYSDK_OFFSET(0x1A02F810)
#define SYSTEM_XML_VALIDATENAMES_PARSEQNAMETHROW_OFFSET UNITYSDK_OFFSET(0x1A0300E0)
#define SYSTEM_XML_VALIDATENAMES_PARSEQNAME_OFFSET UNITYSDK_OFFSET(0x1A02FFD0)
#define SYSTEM_XML_VALIDATENAMES_THROWINVALIDNAME_OFFSET UNITYSDK_OFFSET(0x1A030230)
#define SYSTEM_XML_VALIDATENAMES__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A030870)

namespace System::Xml
{
	inline static constexpr unsigned int ValidateNames_TypeDefinitionIndex = 1927;

	class ValidateNames : public ::System::Object
	{
	public:
		static ::System::Xml::XmlCharType* StaticGet_xmlCharType()
		{
			return (::System::Xml::XmlCharType*)Il2CppClass::FromTypeDefinitionIndex(ValidateNames_TypeDefinitionIndex)->GetStaticField(0xCC00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_VALIDATENAMES__CCTOR_OFFSET))();
		}

		static ::System::Int32 ParseNmtoken(::System::String* s, ::System::Int32 offset)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_VALIDATENAMES_PARSENMTOKEN_OFFSET))(s, offset);
		}

		static ::System::Int32 ParseNmtokenNoNamespaces(::System::String* s, ::System::Int32 offset)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_VALIDATENAMES_PARSENMTOKENNONAMESPACES_OFFSET))(s, offset);
		}

		static ::System::Int32 ParseNameNoNamespaces(::System::String* s, ::System::Int32 offset)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_VALIDATENAMES_PARSENAMENONAMESPACES_OFFSET))(s, offset);
		}

		static ::System::Boolean IsNameNoNamespaces(::System::String* s)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_VALIDATENAMES_ISNAMENONAMESPACES_OFFSET))(s);
		}

		static ::System::Int32 ParseNCName(::System::String* s, ::System::Int32 offset)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_VALIDATENAMES_PARSENCNAME_OFFSET))(s, offset);
		}

		static ::System::Int32 ParseNCName_1(::System::String* s)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_VALIDATENAMES_PARSENCNAME_1_OFFSET))(s);
		}

		static ::System::Int32 ParseQName(::System::String* s, ::System::Int32 offset, ::System::Int32& colonOffset)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_XML_VALIDATENAMES_PARSEQNAME_OFFSET))(s, offset, colonOffset);
		}

		static ::System::Void ParseQNameThrow(::System::String* s, ::System::String*& prefix, ::System::String*& localName)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_XML_VALIDATENAMES_PARSEQNAMETHROW_OFFSET))(s, prefix, localName);
		}

		static ::System::Void ThrowInvalidName(::System::String* s, ::System::Int32 offsetStartChar, ::System::Int32 offsetBadChar)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_VALIDATENAMES_THROWINVALIDNAME_OFFSET))(s, offsetStartChar, offsetBadChar);
		}

		static ::System::Exception* GetInvalidNameException(::System::String* s, ::System::Int32 offsetStartChar, ::System::Int32 offsetBadChar)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_VALIDATENAMES_GETINVALIDNAMEEXCEPTION_OFFSET))(s, offsetStartChar, offsetBadChar);
		}
	};
}
