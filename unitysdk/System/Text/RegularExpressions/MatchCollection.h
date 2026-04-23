#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System { class String; }
namespace System::Collections { class ArrayList; }
namespace System::Collections { class IEnumerator; }
namespace System::Text::RegularExpressions { class Match; }
namespace System::Text::RegularExpressions { class Regex; }

#define SYSTEM_TEXT_REGULAREXPRESSIONS_MATCHCOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1A17B2C0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_MATCHCOLLECTION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1A17B470)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_MATCHCOLLECTION_GETMATCH_OFFSET UNITYSDK_OFFSET(0x1A17B080)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_MATCHCOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1A17B1E0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_MATCHCOLLECTION_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x1A17B260)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_MATCHCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1A17B270)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_MATCHCOLLECTION_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x1A17B250)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_MATCHCOLLECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A17B4A0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_MATCHCOLLECTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A17B4B0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_MATCHCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A17AFC0)

namespace System::Text::RegularExpressions
{
	inline static constexpr unsigned int MatchCollection_TypeDefinitionIndex = 2509;

	class MatchCollection : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_infinite()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MatchCollection_TypeDefinitionIndex)->GetStaticField(0x5210);
		}
		::System::String* _input; // 0x10
		::System::Collections::ArrayList* _matches; // 0x18
		::System::Text::RegularExpressions::Regex* _regex; // 0x20
		::System::Int32 _length; // 0x28
		::System::Boolean _done; // 0x2C
		::System::Int32 _prevlen; // 0x30
		::System::Int32 _beginning; // 0x34
		::System::Int32 _startat; // 0x38

		::System::Void _ctor(::System::Text::RegularExpressions::Regex* regex, ::System::String* input, ::System::Int32 beginning, ::System::Int32 length, ::System::Int32 startat)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::RegularExpressions::Regex*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_MATCHCOLLECTION__CTOR_OFFSET))(this, regex, input, beginning, length, startat);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_MATCHCOLLECTION__CCTOR_OFFSET))();
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_MATCHCOLLECTION__CTOR_1_OFFSET))(this);
		}

		::System::Text::RegularExpressions::Match* GetMatch(::System::Int32 i)
		{
			return ((::System::Text::RegularExpressions::Match*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_MATCHCOLLECTION_GETMATCH_OFFSET))(this, i);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_MATCHCOLLECTION_GET_COUNT_OFFSET))(this);
		}

		::System::Object* get_SyncRoot()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_MATCHCOLLECTION_GET_SYNCROOT_OFFSET))(this);
		}

		::System::Boolean get_IsSynchronized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_MATCHCOLLECTION_GET_ISSYNCHRONIZED_OFFSET))(this);
		}

		::System::Text::RegularExpressions::Match* get_Item(::System::Int32 i)
		{
			return ((::System::Text::RegularExpressions::Match*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_MATCHCOLLECTION_GET_ITEM_OFFSET))(this, i);
		}

		::System::Void CopyTo(::System::Array* array, ::System::Int32 arrayIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_MATCHCOLLECTION_COPYTO_OFFSET))(this, array, arrayIndex);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_MATCHCOLLECTION_GETENUMERATOR_OFFSET))(this);
		}
	};
}
