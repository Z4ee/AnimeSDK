#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System::Collections { class ArrayList; }
namespace System::Collections { class IEnumerator; }

#define SYSTEM_COLLECTIONS_READONLYCOLLECTIONBASE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1CE637E0)
#define SYSTEM_COLLECTIONS_READONLYCOLLECTIONBASE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1CE634D0)
#define SYSTEM_COLLECTIONS_READONLYCOLLECTIONBASE_GET_INNERLIST_OFFSET UNITYSDK_OFFSET(0x1CE63420)
#define SYSTEM_COLLECTIONS_READONLYCOLLECTIONBASE_SYSTEM_COLLECTIONS_ICOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1CE63710)
#define SYSTEM_COLLECTIONS_READONLYCOLLECTIONBASE_SYSTEM_COLLECTIONS_ICOLLECTION_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x1CE63590)
#define SYSTEM_COLLECTIONS_READONLYCOLLECTIONBASE_SYSTEM_COLLECTIONS_ICOLLECTION_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x1CE63650)
#define SYSTEM_COLLECTIONS_READONLYCOLLECTIONBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE638A0)

namespace System::Collections
{
	inline static constexpr unsigned int ReadOnlyCollectionBase_TypeDefinitionIndex = 1483;

	class ReadOnlyCollectionBase : public ::System::Object
	{
	public:
		::System::Collections::ArrayList* list; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_READONLYCOLLECTIONBASE__CTOR_OFFSET))(this);
		}

		::System::Collections::ArrayList* get_InnerList()
		{
			return ((::System::Collections::ArrayList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_READONLYCOLLECTIONBASE_GET_INNERLIST_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_READONLYCOLLECTIONBASE_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean System_Collections_ICollection_get_IsSynchronized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_READONLYCOLLECTIONBASE_SYSTEM_COLLECTIONS_ICOLLECTION_GET_ISSYNCHRONIZED_OFFSET))(this);
		}

		::System::Object* System_Collections_ICollection_get_SyncRoot()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_READONLYCOLLECTIONBASE_SYSTEM_COLLECTIONS_ICOLLECTION_GET_SYNCROOT_OFFSET))(this);
		}

		::System::Void System_Collections_ICollection_CopyTo(::System::Array* array, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_READONLYCOLLECTIONBASE_SYSTEM_COLLECTIONS_ICOLLECTION_COPYTO_OFFSET))(this, array, index);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_READONLYCOLLECTIONBASE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
