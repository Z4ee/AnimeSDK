#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_LINQ_EXPRESSIONS_SYMBOLDOCUMENTINFO_GET_FILENAME_OFFSET UNITYSDK_OFFSET(0x19F43320)
#define SYSTEM_LINQ_EXPRESSIONS_SYMBOLDOCUMENTINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x19F43330)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int SymbolDocumentInfo_TypeDefinitionIndex = 3264;

	class SymbolDocumentInfo : public ::System::Object
	{
	public:
		static ::System::Guid* StaticGet_DocumentType_Text()
		{
			return (::System::Guid*)Il2CppClass::FromTypeDefinitionIndex(SymbolDocumentInfo_TypeDefinitionIndex)->GetStaticField(0x5C00);
		}
		::System::String* _FileName_k__BackingField; // 0x10

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SYMBOLDOCUMENTINFO__CCTOR_OFFSET))();
		}

		::System::String* get_FileName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SYMBOLDOCUMENTINFO_GET_FILENAME_OFFSET))(this);
		}
	};
}
