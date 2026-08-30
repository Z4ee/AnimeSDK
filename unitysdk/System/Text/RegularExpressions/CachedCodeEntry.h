#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class Hashtable; }
namespace System::Text::RegularExpressions { class ExclusiveReference; }
namespace System::Text::RegularExpressions { class RegexCode; }
namespace System::Text::RegularExpressions { class RegexRunnerFactory; }
namespace System::Text::RegularExpressions { class SharedReference; }

#define SYSTEM_TEXT_REGULAREXPRESSIONS_CACHEDCODEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9EEE40)

namespace System::Text::RegularExpressions
{
	inline static constexpr unsigned int CachedCodeEntry_TypeDefinitionIndex = 2499;

	class CachedCodeEntry : public ::System::Object
	{
	public:
		::System::Text::RegularExpressions::ExclusiveReference* _runnerref; // 0x10
		::System::Text::RegularExpressions::RegexCode* _code; // 0x18
		::System::Text::RegularExpressions::SharedReference* _replref; // 0x20
		::Il2CppArray<::System::String*>* _capslist; // 0x28
		::System::Collections::Hashtable* _capnames; // 0x30
		::System::Collections::Hashtable* _caps; // 0x38
		::System::Text::RegularExpressions::RegexRunnerFactory* _factory; // 0x40
		::System::String* _key; // 0x48
		::System::Int32 _capsize; // 0x50

		::System::Void _ctor(::System::String* a1, ::System::Collections::Hashtable* a2, ::Il2CppArray<::System::String*>* a3, ::System::Text::RegularExpressions::RegexCode* a4, ::System::Collections::Hashtable* a5, ::System::Int32 a6, ::System::Text::RegularExpressions::ExclusiveReference* a7, ::System::Text::RegularExpressions::SharedReference* a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Hashtable*, ::Il2CppArray<::System::String*>*, ::System::Text::RegularExpressions::RegexCode*, ::System::Collections::Hashtable*, ::System::Int32, ::System::Text::RegularExpressions::ExclusiveReference*, ::System::Text::RegularExpressions::SharedReference*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_CACHEDCODEENTRY__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}
	};
}
