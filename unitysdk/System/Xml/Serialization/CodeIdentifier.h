#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Microsoft::CSharp { class CodeDomProvider; }
namespace System { class String; }

#define SYSTEM_XML_SERIALIZATION_CODEIDENTIFIER_ISVALIDSTART_OFFSET UNITYSDK_OFFSET(0x1AE6C7C0)
#define SYSTEM_XML_SERIALIZATION_CODEIDENTIFIER_ISVALID_OFFSET UNITYSDK_OFFSET(0x1AE6C730)
#define SYSTEM_XML_SERIALIZATION_CODEIDENTIFIER_MAKEPASCAL_OFFSET UNITYSDK_OFFSET(0x1AE6C0A0)
#define SYSTEM_XML_SERIALIZATION_CODEIDENTIFIER_MAKEVALID_OFFSET UNITYSDK_OFFSET(0x1AE6C2F0)
#define SYSTEM_XML_SERIALIZATION_CODEIDENTIFIER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AE6C840)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int CodeIdentifier_TypeDefinitionIndex = 1968;

	class CodeIdentifier : public ::System::Object
	{
	public:
		static ::Microsoft::CSharp::CodeDomProvider** StaticGet_csharp()
		{
			return (::Microsoft::CSharp::CodeDomProvider**)Il2CppClass::FromTypeDefinitionIndex(CodeIdentifier_TypeDefinitionIndex)->GetStaticField(0x16390);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_CODEIDENTIFIER__CCTOR_OFFSET))();
		}

		static ::System::String* MakePascal(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_CODEIDENTIFIER_MAKEPASCAL_OFFSET))(a1);
		}

		static ::System::String* MakeValid(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_CODEIDENTIFIER_MAKEVALID_OFFSET))(a1);
		}

		static ::System::Boolean IsValidStart(::System::Char a1)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_CODEIDENTIFIER_ISVALIDSTART_OFFSET))(a1);
		}

		static ::System::Boolean IsValid(::System::Char a1)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_CODEIDENTIFIER_ISVALID_OFFSET))(a1);
		}
	};
}
