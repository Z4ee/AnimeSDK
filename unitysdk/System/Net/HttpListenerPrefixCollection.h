#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Net { class HttpListener; }

#define SYSTEM_NET_HTTPLISTENERPREFIXCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x19AF0C60)
#define SYSTEM_NET_HTTPLISTENERPREFIXCOLLECTION_CLEAR_OFFSET UNITYSDK_OFFSET(0x19AF0D40)
#define SYSTEM_NET_HTTPLISTENERPREFIXCOLLECTION_CONTAINS_OFFSET UNITYSDK_OFFSET(0x19AF0DF0)
#define SYSTEM_NET_HTTPLISTENERPREFIXCOLLECTION_COPYTO_1_OFFSET UNITYSDK_OFFSET(0x19AF0EC0)
#define SYSTEM_NET_HTTPLISTENERPREFIXCOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x19AF0E60)
#define SYSTEM_NET_HTTPLISTENERPREFIXCOLLECTION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19AF0FC0)
#define SYSTEM_NET_HTTPLISTENERPREFIXCOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x19AF0C20)
#define SYSTEM_NET_HTTPLISTENERPREFIXCOLLECTION_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x19AF0C40)
#define SYSTEM_NET_HTTPLISTENERPREFIXCOLLECTION_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x19AF0C50)
#define SYSTEM_NET_HTTPLISTENERPREFIXCOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x19AF1100)
#define SYSTEM_NET_HTTPLISTENERPREFIXCOLLECTION_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19AF1060)
#define SYSTEM_NET_HTTPLISTENERPREFIXCOLLECTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19AF11E0)
#define SYSTEM_NET_HTTPLISTENERPREFIXCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x19AF0B90)

namespace System::Net
{
	inline static constexpr unsigned int HttpListenerPrefixCollection_TypeDefinitionIndex = 3527;

	class HttpListenerPrefixCollection : public ::System::Object
	{
	public:
		::System::Net::HttpListener* listener; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* prefixes; // 0x18

		::System::Void _ctor(::System::Net::HttpListener* listener)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::HttpListener*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERPREFIXCOLLECTION__CTOR_OFFSET))(this, listener);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERPREFIXCOLLECTION__CTOR_1_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERPREFIXCOLLECTION_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERPREFIXCOLLECTION_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Boolean get_IsSynchronized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERPREFIXCOLLECTION_GET_ISSYNCHRONIZED_OFFSET))(this);
		}

		::System::Void Add(::System::String* uriPrefix)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERPREFIXCOLLECTION_ADD_OFFSET))(this, uriPrefix);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERPREFIXCOLLECTION_CLEAR_OFFSET))(this);
		}

		::System::Boolean Contains(::System::String* uriPrefix)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERPREFIXCOLLECTION_CONTAINS_OFFSET))(this, uriPrefix);
		}

		::System::Void CopyTo(::Il2CppArray<::System::String*>* array, ::System::Int32 offset)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERPREFIXCOLLECTION_COPYTO_OFFSET))(this, array, offset);
		}

		::System::Void CopyTo_1(::System::Array* array, ::System::Int32 offset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERPREFIXCOLLECTION_COPYTO_1_OFFSET))(this, array, offset);
		}

		::System::Collections::Generic::IEnumerator_1<::System::String*>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERPREFIXCOLLECTION_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERPREFIXCOLLECTION_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Boolean Remove(::System::String* uriPrefix)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERPREFIXCOLLECTION_REMOVE_OFFSET))(this, uriPrefix);
		}
	};
}
