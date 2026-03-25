#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Microsoft::CSharp { class CodeDomProvider; }
namespace System { class String; }

#define SYSTEM_XML_SERIALIZATION_CODEIDENTIFIER_ISVALIDSTART_OFFSET UNITYSDK_OFFSET(0x185BD740)
#define SYSTEM_XML_SERIALIZATION_CODEIDENTIFIER_ISVALID_OFFSET UNITYSDK_OFFSET(0x185BD710)
#define SYSTEM_XML_SERIALIZATION_CODEIDENTIFIER_MAKEPASCAL_OFFSET UNITYSDK_OFFSET(0x185BD2C0)
#define SYSTEM_XML_SERIALIZATION_CODEIDENTIFIER_MAKEVALID_OFFSET UNITYSDK_OFFSET(0x185BD510)
#define SYSTEM_XML_SERIALIZATION_CODEIDENTIFIER__CCTOR_OFFSET UNITYSDK_OFFSET(0x185BD760)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int CodeIdentifier_TypeDefinitionIndex = 1967;

	class CodeIdentifier : public ::System::Object
	{
	public:
		static ::Microsoft::CSharp::CodeDomProvider** StaticGet_csharp()
		{
			return (::Microsoft::CSharp::CodeDomProvider**)Il2CppClass::FromTypeDefinitionIndex(CodeIdentifier_TypeDefinitionIndex)->GetStaticField(0x8650);
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
