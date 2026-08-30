#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/XmlCharType.h"

namespace System { class Exception; }
namespace System { class String; }

#define SYSTEM_XML_VALIDATENAMES_GETINVALIDNAMEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x17C73080)
#define SYSTEM_XML_VALIDATENAMES_ISNAMENONAMESPACES_OFFSET UNITYSDK_OFFSET(0x17C728F0)
#define SYSTEM_XML_VALIDATENAMES_PARSENAMENONAMESPACES_OFFSET UNITYSDK_OFFSET(0x17C726D0)
#define SYSTEM_XML_VALIDATENAMES_PARSENCNAME_1_OFFSET UNITYSDK_OFFSET(0x17C72B10)
#define SYSTEM_XML_VALIDATENAMES_PARSENCNAME_OFFSET UNITYSDK_OFFSET(0x17C72970)
#define SYSTEM_XML_VALIDATENAMES_PARSENMTOKENNONAMESPACES_OFFSET UNITYSDK_OFFSET(0x17C72560)
#define SYSTEM_XML_VALIDATENAMES_PARSENMTOKEN_OFFSET UNITYSDK_OFFSET(0x17C72400)
#define SYSTEM_XML_VALIDATENAMES_PARSEQNAMETHROW_OFFSET UNITYSDK_OFFSET(0x17C72C80)
#define SYSTEM_XML_VALIDATENAMES_PARSEQNAME_OFFSET UNITYSDK_OFFSET(0x17C72B70)
#define SYSTEM_XML_VALIDATENAMES_THROWINVALIDNAME_OFFSET UNITYSDK_OFFSET(0x17C72DD0)
#define SYSTEM_XML_VALIDATENAMES__CCTOR_OFFSET UNITYSDK_OFFSET(0x17C73360)

namespace System::Xml
{
	inline static constexpr unsigned int ValidateNames_TypeDefinitionIndex = 1938;

	class ValidateNames : public ::System::Object
	{
	public:
		static ::System::Xml::XmlCharType* StaticGet_xmlCharType()
		{
			return (::System::Xml::XmlCharType*)Il2CppClass::FromTypeDefinitionIndex(ValidateNames_TypeDefinitionIndex)->GetStaticField(0x22550);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_VALIDATENAMES__CCTOR_OFFSET))();
		}

		static ::System::Int32 ParseNmtoken(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_VALIDATENAMES_PARSENMTOKEN_OFFSET))(a1, a2);
		}

		static ::System::Int32 ParseNmtokenNoNamespaces(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_VALIDATENAMES_PARSENMTOKENNONAMESPACES_OFFSET))(a1, a2);
		}

		static ::System::Int32 ParseNameNoNamespaces(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_VALIDATENAMES_PARSENAMENONAMESPACES_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsNameNoNamespaces(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_VALIDATENAMES_ISNAMENONAMESPACES_OFFSET))(a1);
		}

		static ::System::Int32 ParseNCName(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_VALIDATENAMES_PARSENCNAME_OFFSET))(a1, a2);
		}

		static ::System::Int32 ParseNCName_1(::System::String* a1)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_VALIDATENAMES_PARSENCNAME_1_OFFSET))(a1);
		}

		static ::System::Int32 ParseQName(::System::String* a1, ::System::Int32 a2, ::System::Int32& a3)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_XML_VALIDATENAMES_PARSEQNAME_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ParseQNameThrow(::System::String* a1, ::System::String*& a2, ::System::String*& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_XML_VALIDATENAMES_PARSEQNAMETHROW_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ThrowInvalidName(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_VALIDATENAMES_THROWINVALIDNAME_OFFSET))(a1, a2, a3);
		}

		static ::System::Exception* GetInvalidNameException(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_VALIDATENAMES_GETINVALIDNAMEEXCEPTION_OFFSET))(a1, a2, a3);
		}
	};
}
