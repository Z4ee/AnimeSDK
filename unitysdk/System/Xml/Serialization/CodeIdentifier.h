#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Microsoft::CSharp { class CodeDomProvider; }
namespace System { class String; }

#define SYSTEM_XML_SERIALIZATION_CODEIDENTIFIER_ISVALIDSTART_OFFSET UNITYSDK_OFFSET(0x19FF8400)
#define SYSTEM_XML_SERIALIZATION_CODEIDENTIFIER_ISVALID_OFFSET UNITYSDK_OFFSET(0x19FF83D0)
#define SYSTEM_XML_SERIALIZATION_CODEIDENTIFIER_MAKEPASCAL_OFFSET UNITYSDK_OFFSET(0x19FF7F80)
#define SYSTEM_XML_SERIALIZATION_CODEIDENTIFIER_MAKEVALID_OFFSET UNITYSDK_OFFSET(0x19FF81D0)
#define SYSTEM_XML_SERIALIZATION_CODEIDENTIFIER__CCTOR_OFFSET UNITYSDK_OFFSET(0x19FF8420)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int CodeIdentifier_TypeDefinitionIndex = 1968;

	class CodeIdentifier : public ::System::Object
	{
	public:
		static ::Microsoft::CSharp::CodeDomProvider** StaticGet_csharp()
		{
			return (::Microsoft::CSharp::CodeDomProvider**)Il2CppClass::FromTypeDefinitionIndex(CodeIdentifier_TypeDefinitionIndex)->GetStaticField(0xDAE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_CODEIDENTIFIER__CCTOR_OFFSET))();
		}

		static ::System::String* MakePascal(::System::String* identifier)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_CODEIDENTIFIER_MAKEPASCAL_OFFSET))(identifier);
		}

		static ::System::String* MakeValid(::System::String* identifier)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_CODEIDENTIFIER_MAKEVALID_OFFSET))(identifier);
		}

		static ::System::Boolean IsValidStart(::System::Char c)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_CODEIDENTIFIER_ISVALIDSTART_OFFSET))(c);
		}

		static ::System::Boolean IsValid(::System::Char c)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_CODEIDENTIFIER_ISVALID_OFFSET))(c);
		}
	};
}
