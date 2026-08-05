#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_LINQ_EXPRESSIONS_SYMBOLDOCUMENTINFO_GET_DOCUMENTTYPE_OFFSET UNITYSDK_OFFSET(0x1F082A70)
#define SYSTEM_LINQ_EXPRESSIONS_SYMBOLDOCUMENTINFO_GET_FILENAME_OFFSET UNITYSDK_OFFSET(0x1F082A40)
#define SYSTEM_LINQ_EXPRESSIONS_SYMBOLDOCUMENTINFO_GET_LANGUAGEVENDOR_OFFSET UNITYSDK_OFFSET(0x1F082A60)
#define SYSTEM_LINQ_EXPRESSIONS_SYMBOLDOCUMENTINFO_GET_LANGUAGE_OFFSET UNITYSDK_OFFSET(0x1F082A50)
#define SYSTEM_LINQ_EXPRESSIONS_SYMBOLDOCUMENTINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F082AD0)
#define SYSTEM_LINQ_EXPRESSIONS_SYMBOLDOCUMENTINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F082B00)
#define SYSTEM_LINQ_EXPRESSIONS_SYMBOLDOCUMENTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1F0829A0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int SymbolDocumentInfo_TypeDefinitionIndex = 4543;

	class SymbolDocumentInfo : public ::System::Object
	{
	public:
		static ::System::Guid* StaticGet_DocumentType_Text()
		{
			return (::System::Guid*)Il2CppClass::FromTypeDefinitionIndex(SymbolDocumentInfo_TypeDefinitionIndex)->GetStaticField(0x1480);
		}
		::System::String* _FileName_k__BackingField; // 0x10

		::System::Void _ctor(::System::String* fileName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SYMBOLDOCUMENTINFO__CTOR_OFFSET))(this, fileName);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SYMBOLDOCUMENTINFO__CCTOR_OFFSET))();
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SYMBOLDOCUMENTINFO__CTOR_1_OFFSET))(this);
		}

		::System::String* get_FileName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SYMBOLDOCUMENTINFO_GET_FILENAME_OFFSET))(this);
		}

		::System::Guid get_Language()
		{
			return ((::System::Guid(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SYMBOLDOCUMENTINFO_GET_LANGUAGE_OFFSET))(this);
		}

		::System::Guid get_LanguageVendor()
		{
			return ((::System::Guid(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SYMBOLDOCUMENTINFO_GET_LANGUAGEVENDOR_OFFSET))(this);
		}

		::System::Guid get_DocumentType()
		{
			return ((::System::Guid(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SYMBOLDOCUMENTINFO_GET_DOCUMENTTYPE_OFFSET))(this);
		}
	};
}
