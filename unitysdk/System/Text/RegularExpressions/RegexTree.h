#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Text/RegularExpressions/RegexOptions.h"

namespace System { class String; }
namespace System::Collections { class Hashtable; }
namespace System::Text::RegularExpressions { class RegexNode; }

#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXTREE__CTOR_OFFSET UNITYSDK_OFFSET(0x182A8120)

namespace System::Text::RegularExpressions
{
	inline static constexpr unsigned int RegexTree_TypeDefinitionIndex = 2529;

	class RegexTree : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* _capslist; // 0x10
		::System::Text::RegularExpressions::RegexNode* _root; // 0x18
		::Il2CppArray<::System::Int32>* _capnumlist; // 0x20
		::System::Collections::Hashtable* _caps; // 0x28
		::System::Collections::Hashtable* _capnames; // 0x30
		::System::Text::RegularExpressions::RegexOptions _options; // 0x38
		::System::Int32 _captop; // 0x3C

		::System::Void _ctor(::System::Text::RegularExpressions::RegexNode* a1, ::System::Collections::Hashtable* a2, ::Il2CppArray<::System::Int32>* a3, ::System::Int32 a4, ::System::Collections::Hashtable* a5, ::Il2CppArray<::System::String*>* a6, ::System::Text::RegularExpressions::RegexOptions a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::RegularExpressions::RegexNode*, ::System::Collections::Hashtable*, ::Il2CppArray<::System::Int32>*, ::System::Int32, ::System::Collections::Hashtable*, ::Il2CppArray<::System::String*>*, ::System::Text::RegularExpressions::RegexOptions))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXTREE__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}
	};
}
