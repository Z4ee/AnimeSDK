#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System { class String; }
namespace System::Collections { class Hashtable; }
namespace System::Collections { class IEnumerator; }
namespace System::Text::RegularExpressions { class Group; }
namespace System::Text::RegularExpressions { class Match; }

#define SYSTEM_TEXT_REGULAREXPRESSIONS_GROUPCOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1E9EFED0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_GROUPCOLLECTION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E9EFF90)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_GROUPCOLLECTION_GETGROUPIMPL_OFFSET UNITYSDK_OFFSET(0x1E9EFAD0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_GROUPCOLLECTION_GETGROUP_OFFSET UNITYSDK_OFFSET(0x1E9EF740)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_GROUPCOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1E9EF700)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_GROUPCOLLECTION_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x1E9EF6F0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_GROUPCOLLECTION_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1E9EF8C0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_GROUPCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1E9EF730)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_GROUPCOLLECTION_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x1E9EF6E0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_GROUPCOLLECTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9EFFF0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_GROUPCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9EF6D0)

namespace System::Text::RegularExpressions
{
	inline static constexpr unsigned int GroupCollection_TypeDefinitionIndex = 2515;

	class GroupCollection : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Text::RegularExpressions::Group*>* _groups; // 0x10
		::System::Text::RegularExpressions::Match* _match; // 0x18
		::System::Collections::Hashtable* _captureMap; // 0x20

		::System::Void _ctor(::System::Text::RegularExpressions::Match* a1, ::System::Collections::Hashtable* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::RegularExpressions::Match*, ::System::Collections::Hashtable*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_GROUPCOLLECTION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_GROUPCOLLECTION__CTOR_1_OFFSET))(this);
		}

		::System::Object* get_SyncRoot()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_GROUPCOLLECTION_GET_SYNCROOT_OFFSET))(this);
		}

		::System::Boolean get_IsSynchronized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_GROUPCOLLECTION_GET_ISSYNCHRONIZED_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_GROUPCOLLECTION_GET_COUNT_OFFSET))(this);
		}

		::System::Text::RegularExpressions::Group* get_Item(::System::Int32 a1)
		{
			return ((::System::Text::RegularExpressions::Group*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_GROUPCOLLECTION_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Text::RegularExpressions::Group* get_Item_1(::System::String* a1)
		{
			return ((::System::Text::RegularExpressions::Group*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_GROUPCOLLECTION_GET_ITEM_1_OFFSET))(this, a1);
		}

		::System::Text::RegularExpressions::Group* GetGroup(::System::Int32 a1)
		{
			return ((::System::Text::RegularExpressions::Group*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_GROUPCOLLECTION_GETGROUP_OFFSET))(this, a1);
		}

		::System::Text::RegularExpressions::Group* GetGroupImpl(::System::Int32 a1)
		{
			return ((::System::Text::RegularExpressions::Group*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_GROUPCOLLECTION_GETGROUPIMPL_OFFSET))(this, a1);
		}

		::System::Void CopyTo(::System::Array* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_GROUPCOLLECTION_COPYTO_OFFSET))(this, a1, a2);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_GROUPCOLLECTION_GETENUMERATOR_OFFSET))(this);
		}
	};
}
