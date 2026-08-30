#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2_Enumerator.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Net::Http::Headers { class HttpHeaders; }
namespace System::Net::Http::Headers { class HttpHeaders_HeaderBucket; }

#define SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS__GETENUMERATOR_D__19_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E7DFBD0)
#define SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS__GETENUMERATOR_D__19_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_STRING____GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1E7DFEB0)
#define SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS__GETENUMERATOR_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1E7DFF10)
#define SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS__GETENUMERATOR_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1E7DFEC0)
#define SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS__GETENUMERATOR_D__19_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E7DFBA0)
#define SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS__GETENUMERATOR_D__19__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7DEA90)
#define SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS__GETENUMERATOR_D__19___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1E7DFBC0)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int HttpHeaders__GetEnumerator_d__19_TypeDefinitionIndex = 3795;

	class HttpHeaders__GetEnumerator_d__19 : public ::System::Object
	{
	public:
		::System::Net::Http::Headers::HttpHeaders* __4__this; // 0x10
		::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Collections::Generic::IEnumerable_1<::System::String*>*> __2__current; // 0x18
		::System::Collections::Generic::Dictionary_2_Enumerator<::System::String*, ::System::Net::Http::Headers::HttpHeaders_HeaderBucket*> __7__wrap1; // 0x28
		::System::Int32 __1__state; // 0x50

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS__GETENUMERATOR_D__19__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS__GETENUMERATOR_D__19_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS__GETENUMERATOR_D__19_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS__GETENUMERATOR_D__19___M__FINALLY1_OFFSET))(this);
		}

		::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Collections::Generic::IEnumerable_1<::System::String*>*> System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_System_Collections_Generic_IEnumerable_System_String____get_Current()
		{
			return ((::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Collections::Generic::IEnumerable_1<::System::String*>*>(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS__GETENUMERATOR_D__19_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_STRING____GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS__GETENUMERATOR_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS__GETENUMERATOR_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
