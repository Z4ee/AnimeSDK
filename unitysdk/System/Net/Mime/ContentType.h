#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Specialized { class StringDictionary; }
namespace System::Net { class TrackingStringDictionary; }
namespace System::Net::Mime { class HeaderCollection; }
namespace System::Text { class StringBuilder; }

#define SYSTEM_NET_MIME_CONTENTTYPE_ENCODETOBUFFER_OFFSET UNITYSDK_OFFSET(0x1DEC5870)
#define SYSTEM_NET_MIME_CONTENTTYPE_ENCODE_OFFSET UNITYSDK_OFFSET(0x1DEC5260)
#define SYSTEM_NET_MIME_CONTENTTYPE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEC5A40)
#define SYSTEM_NET_MIME_CONTENTTYPE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEC5AE0)
#define SYSTEM_NET_MIME_CONTENTTYPE_GET_BOUNDARY_OFFSET UNITYSDK_OFFSET(0x1DEC45B0)
#define SYSTEM_NET_MIME_CONTENTTYPE_GET_CHARSET_OFFSET UNITYSDK_OFFSET(0x1DEC4AB0)
#define SYSTEM_NET_MIME_CONTENTTYPE_GET_ISCHANGED_OFFSET UNITYSDK_OFFSET(0x1DEC5240)
#define SYSTEM_NET_MIME_CONTENTTYPE_GET_MEDIATYPE_OFFSET UNITYSDK_OFFSET(0x1DEC4C00)
#define SYSTEM_NET_MIME_CONTENTTYPE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1DEC1960)
#define SYSTEM_NET_MIME_CONTENTTYPE_GET_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x1DEC4700)
#define SYSTEM_NET_MIME_CONTENTTYPE_PARSEVALUE_OFFSET UNITYSDK_OFFSET(0x1DEC3A70)
#define SYSTEM_NET_MIME_CONTENTTYPE_PERSISTIFNEEDED_OFFSET UNITYSDK_OFFSET(0x1DEC5090)
#define SYSTEM_NET_MIME_CONTENTTYPE_SET_BOUNDARY_OFFSET UNITYSDK_OFFSET(0x1DEC4800)
#define SYSTEM_NET_MIME_CONTENTTYPE_SET_CHARSET_OFFSET UNITYSDK_OFFSET(0x1DEC26C0)
#define SYSTEM_NET_MIME_CONTENTTYPE_SET_MEDIATYPE_OFFSET UNITYSDK_OFFSET(0x1DEC4C40)
#define SYSTEM_NET_MIME_CONTENTTYPE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1DEC1AD0)
#define SYSTEM_NET_MIME_CONTENTTYPE_SET_OFFSET UNITYSDK_OFFSET(0x1DEC4EB0)
#define SYSTEM_NET_MIME_CONTENTTYPE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEC5030)
#define SYSTEM_NET_MIME_CONTENTTYPE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEC5BF0)
#define SYSTEM_NET_MIME_CONTENTTYPE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEC22E0)
#define SYSTEM_NET_MIME_CONTENTTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEC3A00)

namespace System::Net::Mime
{
	inline static constexpr unsigned int ContentType_TypeDefinitionIndex = 3611;

	class ContentType : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_Default()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ContentType_TypeDefinitionIndex)->GetStaticField(0x2800);
		}
		::System::Net::TrackingStringDictionary* parameters; // 0x10
		::System::String* mediaType; // 0x18
		::System::String* type; // 0x20
		::System::String* subType; // 0x28
		::System::Boolean isPersisted; // 0x30
		::System::Boolean isChanged; // 0x31

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_CONTENTTYPE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* contentType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_CONTENTTYPE__CTOR_1_OFFSET))(this, contentType);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_CONTENTTYPE__CCTOR_OFFSET))();
		}

		::System::String* get_Boundary()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_CONTENTTYPE_GET_BOUNDARY_OFFSET))(this);
		}

		::System::Void set_Boundary(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_CONTENTTYPE_SET_BOUNDARY_OFFSET))(this, value);
		}

		::System::String* get_CharSet()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_CONTENTTYPE_GET_CHARSET_OFFSET))(this);
		}

		::System::Void set_CharSet(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_CONTENTTYPE_SET_CHARSET_OFFSET))(this, value);
		}

		::System::String* get_MediaType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_CONTENTTYPE_GET_MEDIATYPE_OFFSET))(this);
		}

		::System::Void set_MediaType(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_CONTENTTYPE_SET_MEDIATYPE_OFFSET))(this, value);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_CONTENTTYPE_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_CONTENTTYPE_SET_NAME_OFFSET))(this, value);
		}

		::System::Collections::Specialized::StringDictionary* get_Parameters()
		{
			return ((::System::Collections::Specialized::StringDictionary*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_CONTENTTYPE_GET_PARAMETERS_OFFSET))(this);
		}

		::System::Void Set(::System::String* contentType, ::System::Net::Mime::HeaderCollection* headers)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Net::Mime::HeaderCollection*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_CONTENTTYPE_SET_OFFSET))(this, contentType, headers);
		}

		::System::Void PersistIfNeeded(::System::Net::Mime::HeaderCollection* headers, ::System::Boolean forcePersist)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Mime::HeaderCollection*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_CONTENTTYPE_PERSISTIFNEEDED_OFFSET))(this, headers, forcePersist);
		}

		::System::Boolean get_IsChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_CONTENTTYPE_GET_ISCHANGED_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_CONTENTTYPE_TOSTRING_OFFSET))(this);
		}

		::System::String* Encode(::System::Boolean allowUnicode)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_CONTENTTYPE_ENCODE_OFFSET))(this, allowUnicode);
		}

		static ::System::Void EncodeToBuffer(::System::String* value, ::System::Text::StringBuilder* builder, ::System::Boolean allowUnicode)
		{
			return ((::System::Void(*)(::System::String*, ::System::Text::StringBuilder*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_CONTENTTYPE_ENCODETOBUFFER_OFFSET))(value, builder, allowUnicode);
		}

		::System::Boolean Equals(::System::Object* rparam)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_CONTENTTYPE_EQUALS_OFFSET))(this, rparam);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_CONTENTTYPE_GETHASHCODE_OFFSET))(this);
		}

		::System::Void ParseValue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_CONTENTTYPE_PARSEVALUE_OFFSET))(this);
		}
	};
}
