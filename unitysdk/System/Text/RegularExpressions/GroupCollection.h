#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System { class String; }
namespace System::Collections { class Hashtable; }
namespace System::Collections { class IEnumerator; }
namespace System::Text::RegularExpressions { class Group; }
namespace System::Text::RegularExpressions { class Match; }

#define SYSTEM_TEXT_REGULAREXPRESSIONS_GROUPCOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1A2624B0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_GROUPCOLLECTION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1A262570)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_GROUPCOLLECTION_GETGROUPIMPL_OFFSET UNITYSDK_OFFSET(0x1A262230)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_GROUPCOLLECTION_GETGROUP_OFFSET UNITYSDK_OFFSET(0x1A262060)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_GROUPCOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1A262020)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_GROUPCOLLECTION_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1A262010)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_GROUPCOLLECTION_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x1A262000)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_GROUPCOLLECTION_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1A2621A0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_GROUPCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1A262050)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_GROUPCOLLECTION_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x1A261FF0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_GROUPCOLLECTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A2625C0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_GROUPCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A261FE0)

namespace System::Text::RegularExpressions
{
	inline static constexpr unsigned int GroupCollection_TypeDefinitionIndex = 2737;

	class GroupCollection : public ::System::Object
	{
	public:
		::System::Text::RegularExpressions::Match* _match; // 0x10
		::System::Collections::Hashtable* _captureMap; // 0x18
		::Il2CppArray<::System::Text::RegularExpressions::Group*>* _groups; // 0x20

		::System::Void _ctor(::System::Text::RegularExpressions::Match* match, ::System::Collections::Hashtable* caps)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::RegularExpressions::Match*, ::System::Collections::Hashtable*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_GROUPCOLLECTION__CTOR_OFFSET))(this, match, caps);
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

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_GROUPCOLLECTION_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_GROUPCOLLECTION_GET_COUNT_OFFSET))(this);
		}

		::System::Text::RegularExpressions::Group* get_Item(::System::Int32 groupnum)
		{
			return ((::System::Text::RegularExpressions::Group*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_GROUPCOLLECTION_GET_ITEM_OFFSET))(this, groupnum);
		}

		::System::Text::RegularExpressions::Group* get_Item_1(::System::String* groupname)
		{
			return ((::System::Text::RegularExpressions::Group*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_GROUPCOLLECTION_GET_ITEM_1_OFFSET))(this, groupname);
		}

		::System::Text::RegularExpressions::Group* GetGroup(::System::Int32 groupnum)
		{
			return ((::System::Text::RegularExpressions::Group*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_GROUPCOLLECTION_GETGROUP_OFFSET))(this, groupnum);
		}

		::System::Text::RegularExpressions::Group* GetGroupImpl(::System::Int32 groupnum)
		{
			return ((::System::Text::RegularExpressions::Group*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_GROUPCOLLECTION_GETGROUPIMPL_OFFSET))(this, groupnum);
		}

		::System::Void CopyTo(::System::Array* array, ::System::Int32 arrayIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_GROUPCOLLECTION_COPYTO_OFFSET))(this, array, arrayIndex);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_GROUPCOLLECTION_GETENUMERATOR_OFFSET))(this);
		}
	};
}
