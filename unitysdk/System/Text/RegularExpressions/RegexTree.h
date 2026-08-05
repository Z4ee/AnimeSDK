#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Text/RegularExpressions/RegexOptions.h"

namespace System { class String; }
namespace System::Collections { class Hashtable; }
namespace System::Text::RegularExpressions { class RegexNode; }

#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXTREE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DED0170)

namespace System::Text::RegularExpressions
{
	inline static constexpr unsigned int RegexTree_TypeDefinitionIndex = 2750;

	class RegexTree : public ::System::Object
	{
	public:
		::System::Collections::Hashtable* _caps; // 0x10
		::Il2CppArray<::System::String*>* _capslist; // 0x18
		::System::Text::RegularExpressions::RegexNode* _root; // 0x20
		::Il2CppArray<::System::Int32>* _capnumlist; // 0x28
		::System::Collections::Hashtable* _capnames; // 0x30
		::System::Int32 _captop; // 0x38
		::System::Text::RegularExpressions::RegexOptions _options; // 0x3C

		::System::Void _ctor(::System::Text::RegularExpressions::RegexNode* root, ::System::Collections::Hashtable* caps, ::Il2CppArray<::System::Int32>* capnumlist, ::System::Int32 captop, ::System::Collections::Hashtable* capnames, ::Il2CppArray<::System::String*>* capslist, ::System::Text::RegularExpressions::RegexOptions opts)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::RegularExpressions::RegexNode*, ::System::Collections::Hashtable*, ::Il2CppArray<::System::Int32>*, ::System::Int32, ::System::Collections::Hashtable*, ::Il2CppArray<::System::String*>*, ::System::Text::RegularExpressions::RegexOptions))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXTREE__CTOR_OFFSET))(this, root, caps, capnumlist, captop, capnames, capslist, opts);
		}
	};
}
