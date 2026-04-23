#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Net { class HttpListener; }

#define SYSTEM_NET_HTTPLISTENERPREFIXCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x1A121060)
#define SYSTEM_NET_HTTPLISTENERPREFIXCOLLECTION_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A1214C0)
#define SYSTEM_NET_HTTPLISTENERPREFIXCOLLECTION_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1A121570)
#define SYSTEM_NET_HTTPLISTENERPREFIXCOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1A1215E0)
#define SYSTEM_NET_HTTPLISTENERPREFIXCOLLECTION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1A1085B0)
#define SYSTEM_NET_HTTPLISTENERPREFIXCOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1A121030)
#define SYSTEM_NET_HTTPLISTENERPREFIXCOLLECTION_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1A121050)
#define SYSTEM_NET_HTTPLISTENERPREFIXCOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x1A1216B0)
#define SYSTEM_NET_HTTPLISTENERPREFIXCOLLECTION_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1A121640)
#define SYSTEM_NET_HTTPLISTENERPREFIXCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A11E310)

namespace System::Net
{
	inline static constexpr unsigned int HttpListenerPrefixCollection_TypeDefinitionIndex = 2841;

	class HttpListenerPrefixCollection : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* prefixes; // 0x10
		::System::Net::HttpListener* listener; // 0x18

		::System::Void _ctor(::System::Net::HttpListener* listener)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::HttpListener*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERPREFIXCOLLECTION__CTOR_OFFSET))(this, listener);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERPREFIXCOLLECTION_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERPREFIXCOLLECTION_GET_ISREADONLY_OFFSET))(this);
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
