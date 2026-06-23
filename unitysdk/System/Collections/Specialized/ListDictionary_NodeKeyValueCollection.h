#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Specialized { class ListDictionary; }

#define SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_NODEKEYVALUECOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1C487370)
#define SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_NODEKEYVALUECOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1C487460)
#define SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_NODEKEYVALUECOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x1C4874A0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_NODEKEYVALUECOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x1C4874B0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_NODEKEYVALUECOLLECTION_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C487500)
#define SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_NODEKEYVALUECOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C487360)

namespace System::Collections::Specialized
{
	inline static constexpr unsigned int ListDictionary_NodeKeyValueCollection_TypeDefinitionIndex = 3915;

	class ListDictionary_NodeKeyValueCollection : public ::System::Object
	{
	public:
		::System::Collections::Specialized::ListDictionary* list; // 0x10
		::System::Boolean isKeys; // 0x18

		::System::Void _ctor(::System::Collections::Specialized::ListDictionary* list, ::System::Boolean isKeys)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Specialized::ListDictionary*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_NODEKEYVALUECOLLECTION__CTOR_OFFSET))(this, list, isKeys);
		}

		::System::Void System_Collections_ICollection_CopyTo(::System::Array* array, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_NODEKEYVALUECOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_COPYTO_OFFSET))(this, array, index);
		}

		::System::Int32 System_Collections_ICollection_get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_NODEKEYVALUECOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean System_Collections_ICollection_get_IsSynchronized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_NODEKEYVALUECOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_GET_ISSYNCHRONIZED_OFFSET))(this);
		}

		::System::Object* System_Collections_ICollection_get_SyncRoot()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_NODEKEYVALUECOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_GET_SYNCROOT_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_NODEKEYVALUECOLLECTION_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
