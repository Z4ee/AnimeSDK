#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Linq/Expressions/SymbolDocumentInfo.h"

namespace System { class String; }

#define SYSTEM_LINQ_EXPRESSIONS_SYMBOLDOCUMENTWITHGUIDS_GET_DOCUMENTTYPE_OFFSET UNITYSDK_OFFSET(0x1F5A2070)
#define SYSTEM_LINQ_EXPRESSIONS_SYMBOLDOCUMENTWITHGUIDS_GET_LANGUAGEVENDOR_OFFSET UNITYSDK_OFFSET(0x1F5A2060)
#define SYSTEM_LINQ_EXPRESSIONS_SYMBOLDOCUMENTWITHGUIDS_GET_LANGUAGE_OFFSET UNITYSDK_OFFSET(0x1F5A2050)
#define SYSTEM_LINQ_EXPRESSIONS_SYMBOLDOCUMENTWITHGUIDS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F5A1E10)
#define SYSTEM_LINQ_EXPRESSIONS_SYMBOLDOCUMENTWITHGUIDS__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1F5A1F30)
#define SYSTEM_LINQ_EXPRESSIONS_SYMBOLDOCUMENTWITHGUIDS__CTOR_OFFSET UNITYSDK_OFFSET(0x1F5A1D00)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int SymbolDocumentWithGuids_TypeDefinitionIndex = 4544;

	class SymbolDocumentWithGuids : public ::System::Linq::Expressions::SymbolDocumentInfo
	{
	public:
		::System::Guid _LanguageVendor_k__BackingField; // 0x18
		::System::Guid _DocumentType_k__BackingField; // 0x28
		::System::Guid _Language_k__BackingField; // 0x38

		::System::Void _ctor(::System::String* fileName, ::System::Guid& language)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Guid&))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SYMBOLDOCUMENTWITHGUIDS__CTOR_OFFSET))(this, fileName, language);
		}

		::System::Void _ctor_1(::System::String* fileName, ::System::Guid& language, ::System::Guid& vendor)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Guid&, ::System::Guid&))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SYMBOLDOCUMENTWITHGUIDS__CTOR_1_OFFSET))(this, fileName, language, vendor);
		}

		::System::Void _ctor_2(::System::String* fileName, ::System::Guid& language, ::System::Guid& vendor, ::System::Guid& documentType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Guid&, ::System::Guid&, ::System::Guid&))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SYMBOLDOCUMENTWITHGUIDS__CTOR_2_OFFSET))(this, fileName, language, vendor, documentType);
		}

		::System::Guid get_Language()
		{
			return ((::System::Guid(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SYMBOLDOCUMENTWITHGUIDS_GET_LANGUAGE_OFFSET))(this);
		}

		::System::Guid get_LanguageVendor()
		{
			return ((::System::Guid(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SYMBOLDOCUMENTWITHGUIDS_GET_LANGUAGEVENDOR_OFFSET))(this);
		}

		::System::Guid get_DocumentType()
		{
			return ((::System::Guid(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SYMBOLDOCUMENTWITHGUIDS_GET_DOCUMENTTYPE_OFFSET))(this);
		}
	};
}
