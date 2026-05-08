#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Net/Http/Headers/HttpHeaderKind.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Net::Http::Headers { class HeaderInfo; }
namespace System::Net::Http::Headers { class HttpHeaders_HeaderBucket; }
namespace System::Net::Http::Headers { template <typename T> class HttpHeaderValueCollection_1; }

#define SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS_ADDINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B014580)
#define SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS_CHECKNAME_OFFSET UNITYSDK_OFFSET(0x1B014E70)
#define SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS_GETALLHEADERVALUES_OFFSET UNITYSDK_OFFSET(0x1B015D60)
#define SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B015350)
#define SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS_GETKNOWNHEADERKIND_OFFSET UNITYSDK_OFFSET(0x1B0160B0)
#define SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS_GETSINGLEHEADERSTRING_OFFSET UNITYSDK_OFFSET(0x1B015460)
#define SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS_REMOVE_OFFSET UNITYSDK_OFFSET(0x1B015400)
#define SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B0153B0)
#define SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B0159A0)
#define SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS_TRYADDWITHOUTVALIDATION_OFFSET UNITYSDK_OFFSET(0x1B014C60)
#define SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS_TRYCHECKNAME_OFFSET UNITYSDK_OFFSET(0x1B014D10)
#define SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B011AF0)
#define SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B0117B0)
#define SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0144B0)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int HttpHeaders_TypeDefinitionIndex = 24742;

	class HttpHeaders : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Net::Http::Headers::HeaderInfo*>** StaticGet_known_headers()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Net::Http::Headers::HeaderInfo*>**)Il2CppClass::FromTypeDefinitionIndex(HttpHeaders_TypeDefinitionIndex)->GetStaticField(0x1E760);
		}
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Net::Http::Headers::HttpHeaders_HeaderBucket*>* headers; // 0x10
		::System::Net::Http::Headers::HttpHeaderKind HeaderKind; // 0x18
		::System::Nullable_1<::System::Boolean> transferEncodingChunked; // 0x1C
		::System::Nullable_1<::System::Boolean> connectionclose; // 0x1E

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Net::Http::Headers::HttpHeaderKind headerKind)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Http::Headers::HttpHeaderKind))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS__CTOR_1_OFFSET))(this, headerKind);
		}

		::System::Boolean AddInternal(::System::String* name, ::System::Collections::Generic::IEnumerable_1<::System::String*>* values, ::System::Net::Http::Headers::HeaderInfo* headerInfo, ::System::Boolean ignoreInvalid)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Collections::Generic::IEnumerable_1<::System::String*>*, ::System::Net::Http::Headers::HeaderInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS_ADDINTERNAL_OFFSET))(this, name, values, headerInfo, ignoreInvalid);
		}

		::System::Boolean TryAddWithoutValidation(::System::String* name, ::System::Collections::Generic::IEnumerable_1<::System::String*>* values)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Collections::Generic::IEnumerable_1<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS_TRYADDWITHOUTVALIDATION_OFFSET))(this, name, values);
		}

		::System::Net::Http::Headers::HeaderInfo* CheckName(::System::String* name)
		{
			return ((::System::Net::Http::Headers::HeaderInfo*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS_CHECKNAME_OFFSET))(this, name);
		}

		::System::Boolean TryCheckName(::System::String* name, ::System::Net::Http::Headers::HeaderInfo*& headerInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Net::Http::Headers::HeaderInfo*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS_TRYCHECKNAME_OFFSET))(this, name, headerInfo);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Collections::Generic::IEnumerable_1<::System::String*>*>>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Collections::Generic::IEnumerable_1<::System::String*>*>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Boolean Remove(::System::String* name)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS_REMOVE_OFFSET))(this, name);
		}

		static ::System::String* GetSingleHeaderString(::System::String* key, ::System::Collections::Generic::IEnumerable_1<::System::String*>* values)
		{
			return ((::System::String*(*)(::System::String*, ::System::Collections::Generic::IEnumerable_1<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS_GETSINGLEHEADERSTRING_OFFSET))(key, values);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS_TOSTRING_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* GetAllHeaderValues(::System::Net::Http::Headers::HttpHeaders_HeaderBucket* bucket, ::System::Net::Http::Headers::HeaderInfo* headerInfo)
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID, ::System::Net::Http::Headers::HttpHeaders_HeaderBucket*, ::System::Net::Http::Headers::HeaderInfo*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS_GETALLHEADERVALUES_OFFSET))(this, bucket, headerInfo);
		}

		static ::System::Net::Http::Headers::HttpHeaderKind GetKnownHeaderKind(::System::String* name)
		{
			return ((::System::Net::Http::Headers::HttpHeaderKind(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS_GETKNOWNHEADERKIND_OFFSET))(name);
		}
	};
}
