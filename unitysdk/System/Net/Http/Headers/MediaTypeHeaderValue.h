#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Http/Headers/Token.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Net::Http::Headers { class Lexer; }
namespace System::Net::Http::Headers { class NameValueHeaderValue; }

#define SYSTEM_NET_HTTP_HEADERS_MEDIATYPEHEADERVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0x19F659E0)
#define SYSTEM_NET_HTTP_HEADERS_MEDIATYPEHEADERVALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19F65A70)
#define SYSTEM_NET_HTTP_HEADERS_MEDIATYPEHEADERVALUE_GET_CHARSET_OFFSET UNITYSDK_OFFSET(0x19F65690)
#define SYSTEM_NET_HTTP_HEADERS_MEDIATYPEHEADERVALUE_GET_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x19F65640)
#define SYSTEM_NET_HTTP_HEADERS_MEDIATYPEHEADERVALUE_SET_CHARSET_OFFSET UNITYSDK_OFFSET(0x19F657A0)
#define SYSTEM_NET_HTTP_HEADERS_MEDIATYPEHEADERVALUE_SET_MEDIATYPE_OFFSET UNITYSDK_OFFSET(0x19F65330)
#define SYSTEM_NET_HTTP_HEADERS_MEDIATYPEHEADERVALUE_SYSTEM_ICLONEABLE_CLONE_OFFSET UNITYSDK_OFFSET(0x19F659B0)
#define SYSTEM_NET_HTTP_HEADERS_MEDIATYPEHEADERVALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19F65BC0)
#define SYSTEM_NET_HTTP_HEADERS_MEDIATYPEHEADERVALUE_TRYPARSEMEDIATYPE_OFFSET UNITYSDK_OFFSET(0x19F65800)
#define SYSTEM_NET_HTTP_HEADERS_MEDIATYPEHEADERVALUE_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x19F65C00)
#define SYSTEM_NET_HTTP_HEADERS_MEDIATYPEHEADERVALUE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19F653F0)
#define SYSTEM_NET_HTTP_HEADERS_MEDIATYPEHEADERVALUE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x19F65680)
#define SYSTEM_NET_HTTP_HEADERS_MEDIATYPEHEADERVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x19F65320)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int MediaTypeHeaderValue_TypeDefinitionIndex = 4823;

	class MediaTypeHeaderValue : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>* parameters; // 0x10
		::System::String* media_type; // 0x18

		::System::Void _ctor(::System::String* mediaType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_MEDIATYPEHEADERVALUE__CTOR_OFFSET))(this, mediaType);
		}

		::System::Void _ctor_1(::System::Net::Http::Headers::MediaTypeHeaderValue* source)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Http::Headers::MediaTypeHeaderValue*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_MEDIATYPEHEADERVALUE__CTOR_1_OFFSET))(this, source);
		}

		::System::Void _ctor_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_MEDIATYPEHEADERVALUE__CTOR_2_OFFSET))(this);
		}

		::System::String* get_CharSet()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_MEDIATYPEHEADERVALUE_GET_CHARSET_OFFSET))(this);
		}

		::System::Void set_CharSet(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_MEDIATYPEHEADERVALUE_SET_CHARSET_OFFSET))(this, value);
		}

		::System::Void set_MediaType(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_MEDIATYPEHEADERVALUE_SET_MEDIATYPE_OFFSET))(this, value);
		}

		::System::Collections::Generic::ICollection_1<::System::Net::Http::Headers::NameValueHeaderValue*>* get_Parameters()
		{
			return ((::System::Collections::Generic::ICollection_1<::System::Net::Http::Headers::NameValueHeaderValue*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_MEDIATYPEHEADERVALUE_GET_PARAMETERS_OFFSET))(this);
		}

		::System::Object* System_ICloneable_Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_MEDIATYPEHEADERVALUE_SYSTEM_ICLONEABLE_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_MEDIATYPEHEADERVALUE_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_MEDIATYPEHEADERVALUE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_MEDIATYPEHEADERVALUE_TOSTRING_OFFSET))(this);
		}

		static ::System::Boolean TryParse(::System::String* input, ::System::Net::Http::Headers::MediaTypeHeaderValue*& parsedValue)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Net::Http::Headers::MediaTypeHeaderValue*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_MEDIATYPEHEADERVALUE_TRYPARSE_OFFSET))(input, parsedValue);
		}

		static ::System::Nullable_1<::System::Net::Http::Headers::Token> TryParseMediaType(::System::Net::Http::Headers::Lexer* lexer, ::System::String*& media)
		{
			return ((::System::Nullable_1<::System::Net::Http::Headers::Token>(*)(::System::Net::Http::Headers::Lexer*, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_MEDIATYPEHEADERVALUE_TRYPARSEMEDIATYPE_OFFSET))(lexer, media);
		}
	};
}
