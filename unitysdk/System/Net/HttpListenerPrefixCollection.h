#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Net { class HttpListener; }

#define SYSTEM_NET_HTTPLISTENERPREFIXCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x1B031D70)
#define SYSTEM_NET_HTTPLISTENERPREFIXCOLLECTION_CLEAR_OFFSET UNITYSDK_OFFSET(0x1B0322A0)
#define SYSTEM_NET_HTTPLISTENERPREFIXCOLLECTION_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1B032350)
#define SYSTEM_NET_HTTPLISTENERPREFIXCOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1B0323C0)
#define SYSTEM_NET_HTTPLISTENERPREFIXCOLLECTION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B0182B0)
#define SYSTEM_NET_HTTPLISTENERPREFIXCOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1B031D40)
#define SYSTEM_NET_HTTPLISTENERPREFIXCOLLECTION_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1B031D60)
#define SYSTEM_NET_HTTPLISTENERPREFIXCOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x1B032470)
#define SYSTEM_NET_HTTPLISTENERPREFIXCOLLECTION_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B032420)
#define SYSTEM_NET_HTTPLISTENERPREFIXCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B02E750)

namespace System::Net
{
	inline static constexpr unsigned int HttpListenerPrefixCollection_TypeDefinitionIndex = 2852;

	class HttpListenerPrefixCollection : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* prefixes; // 0x10
		::System::Net::HttpListener* listener; // 0x18

		::System::Void _ctor(::System::Net::HttpListener* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::HttpListener*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERPREFIXCOLLECTION__CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERPREFIXCOLLECTION_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERPREFIXCOLLECTION_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Void Add(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERPREFIXCOLLECTION_ADD_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERPREFIXCOLLECTION_CLEAR_OFFSET))(this);
		}

		::System::Boolean Contains(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERPREFIXCOLLECTION_CONTAINS_OFFSET))(this, a1);
		}

		::System::Void CopyTo(::Il2CppArray<::System::String*>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERPREFIXCOLLECTION_COPYTO_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IEnumerator_1<::System::String*>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERPREFIXCOLLECTION_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERPREFIXCOLLECTION_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Boolean Remove(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERPREFIXCOLLECTION_REMOVE_OFFSET))(this, a1);
		}
	};
}
