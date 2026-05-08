#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Specialized { class StringDictionary; }
namespace System::Net { class TrackingValidationObjectDictionary; }
namespace System::Net { class TrackingValidationObjectDictionary_ValidateAndParseValue; }
namespace System::Net::Mime { class HeaderCollection; }
namespace System::Text { class StringBuilder; }

#define SYSTEM_NET_MIME_CONTENTDISPOSITION_ENCODETOBUFFER_OFFSET UNITYSDK_OFFSET(0x18FB9EA0)
#define SYSTEM_NET_MIME_CONTENTDISPOSITION_ENCODE_OFFSET UNITYSDK_OFFSET(0x18FB98E0)
#define SYSTEM_NET_MIME_CONTENTDISPOSITION_EQUALS_OFFSET UNITYSDK_OFFSET(0x18FBA760)
#define SYSTEM_NET_MIME_CONTENTDISPOSITION_GETDATEPARAMETER_OFFSET UNITYSDK_OFFSET(0x18FB82C0)
#define SYSTEM_NET_MIME_CONTENTDISPOSITION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18FBA800)
#define SYSTEM_NET_MIME_CONTENTDISPOSITION_GET_CREATIONDATE_OFFSET UNITYSDK_OFFSET(0x18FB8AE0)
#define SYSTEM_NET_MIME_CONTENTDISPOSITION_GET_DISPOSITIONTYPE_OFFSET UNITYSDK_OFFSET(0x18FB85D0)
#define SYSTEM_NET_MIME_CONTENTDISPOSITION_GET_FILENAME_OFFSET UNITYSDK_OFFSET(0x18FB86B0)
#define SYSTEM_NET_MIME_CONTENTDISPOSITION_GET_INLINE_OFFSET UNITYSDK_OFFSET(0x18FB8EC0)
#define SYSTEM_NET_MIME_CONTENTDISPOSITION_GET_ISCHANGED_OFFSET UNITYSDK_OFFSET(0x18FB98C0)
#define SYSTEM_NET_MIME_CONTENTDISPOSITION_GET_MODIFICATIONDATE_OFFSET UNITYSDK_OFFSET(0x18FB8CD0)
#define SYSTEM_NET_MIME_CONTENTDISPOSITION_GET_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x18FB84A0)
#define SYSTEM_NET_MIME_CONTENTDISPOSITION_GET_READDATE_OFFSET UNITYSDK_OFFSET(0x18FB8F80)
#define SYSTEM_NET_MIME_CONTENTDISPOSITION_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x18FB9170)
#define SYSTEM_NET_MIME_CONTENTDISPOSITION_PARSEVALUE_OFFSET UNITYSDK_OFFSET(0x18FB7A00)
#define SYSTEM_NET_MIME_CONTENTDISPOSITION_PERSISTIFNEEDED_OFFSET UNITYSDK_OFFSET(0x18FB9710)
#define SYSTEM_NET_MIME_CONTENTDISPOSITION_SET_CREATIONDATE_OFFSET UNITYSDK_OFFSET(0x18FB8B20)
#define SYSTEM_NET_MIME_CONTENTDISPOSITION_SET_DISPOSITIONTYPE_OFFSET UNITYSDK_OFFSET(0x18FB85E0)
#define SYSTEM_NET_MIME_CONTENTDISPOSITION_SET_FILENAME_OFFSET UNITYSDK_OFFSET(0x18FB8820)
#define SYSTEM_NET_MIME_CONTENTDISPOSITION_SET_INLINE_OFFSET UNITYSDK_OFFSET(0x18FB8F30)
#define SYSTEM_NET_MIME_CONTENTDISPOSITION_SET_MODIFICATIONDATE_OFFSET UNITYSDK_OFFSET(0x18FB8D10)
#define SYSTEM_NET_MIME_CONTENTDISPOSITION_SET_OFFSET UNITYSDK_OFFSET(0x18FB9530)
#define SYSTEM_NET_MIME_CONTENTDISPOSITION_SET_READDATE_OFFSET UNITYSDK_OFFSET(0x18FB8FC0)
#define SYSTEM_NET_MIME_CONTENTDISPOSITION_SET_SIZE_OFFSET UNITYSDK_OFFSET(0x18FB9370)
#define SYSTEM_NET_MIME_CONTENTDISPOSITION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18FB96B0)
#define SYSTEM_NET_MIME_CONTENTDISPOSITION__CCTOR_OFFSET UNITYSDK_OFFSET(0x18FB7520)
#define SYSTEM_NET_MIME_CONTENTDISPOSITION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18FB7980)
#define SYSTEM_NET_MIME_CONTENTDISPOSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x18FB7940)

namespace System::Net::Mime
{
	inline static constexpr unsigned int ContentDisposition_TypeDefinitionIndex = 3610;

	class ContentDisposition : public ::System::Object
	{
	public:
		static ::System::Net::TrackingValidationObjectDictionary_ValidateAndParseValue** StaticGet_longParser()
		{
			return (::System::Net::TrackingValidationObjectDictionary_ValidateAndParseValue**)Il2CppClass::FromTypeDefinitionIndex(ContentDisposition_TypeDefinitionIndex)->GetStaticField(0x2C50);
		}
		static ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::Net::TrackingValidationObjectDictionary_ValidateAndParseValue*>** StaticGet_validators()
		{
			return (::System::Collections::Generic::IDictionary_2<::System::String*, ::System::Net::TrackingValidationObjectDictionary_ValidateAndParseValue*>**)Il2CppClass::FromTypeDefinitionIndex(ContentDisposition_TypeDefinitionIndex)->GetStaticField(0x2C58);
		}
		static ::System::Net::TrackingValidationObjectDictionary_ValidateAndParseValue** StaticGet_dateParser()
		{
			return (::System::Net::TrackingValidationObjectDictionary_ValidateAndParseValue**)Il2CppClass::FromTypeDefinitionIndex(ContentDisposition_TypeDefinitionIndex)->GetStaticField(0x2C60);
		}
		// static const ::System::String* creationDate; // 0x0
		// static const ::System::String* readDate; // 0x0
		// static const ::System::String* modificationDate; // 0x0
		// static const ::System::String* size; // 0x0
		// static const ::System::String* fileName; // 0x0
		::System::Net::TrackingValidationObjectDictionary* parameters; // 0x10
		::System::String* dispositionType; // 0x18
		::System::String* disposition; // 0x20
		::System::Boolean isChanged; // 0x28
		::System::Boolean isPersisted; // 0x29

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_CONTENTDISPOSITION__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_CONTENTDISPOSITION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* disposition)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_CONTENTDISPOSITION__CTOR_1_OFFSET))(this, disposition);
		}

		::System::DateTime GetDateParameter(::System::String* parameterName)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_CONTENTDISPOSITION_GETDATEPARAMETER_OFFSET))(this, parameterName);
		}

		::System::String* get_DispositionType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_CONTENTDISPOSITION_GET_DISPOSITIONTYPE_OFFSET))(this);
		}

		::System::Void set_DispositionType(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_CONTENTDISPOSITION_SET_DISPOSITIONTYPE_OFFSET))(this, value);
		}

		::System::Collections::Specialized::StringDictionary* get_Parameters()
		{
			return ((::System::Collections::Specialized::StringDictionary*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_CONTENTDISPOSITION_GET_PARAMETERS_OFFSET))(this);
		}

		::System::String* get_FileName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_CONTENTDISPOSITION_GET_FILENAME_OFFSET))(this);
		}

		::System::Void set_FileName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_CONTENTDISPOSITION_SET_FILENAME_OFFSET))(this, value);
		}

		::System::DateTime get_CreationDate()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_CONTENTDISPOSITION_GET_CREATIONDATE_OFFSET))(this);
		}

		::System::Void set_CreationDate(::System::DateTime value)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_CONTENTDISPOSITION_SET_CREATIONDATE_OFFSET))(this, value);
		}

		::System::DateTime get_ModificationDate()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_CONTENTDISPOSITION_GET_MODIFICATIONDATE_OFFSET))(this);
		}

		::System::Void set_ModificationDate(::System::DateTime value)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_CONTENTDISPOSITION_SET_MODIFICATIONDATE_OFFSET))(this, value);
		}

		::System::Boolean get_Inline()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_CONTENTDISPOSITION_GET_INLINE_OFFSET))(this);
		}

		::System::Void set_Inline(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_CONTENTDISPOSITION_SET_INLINE_OFFSET))(this, value);
		}

		::System::DateTime get_ReadDate()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_CONTENTDISPOSITION_GET_READDATE_OFFSET))(this);
		}

		::System::Void set_ReadDate(::System::DateTime value)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_CONTENTDISPOSITION_SET_READDATE_OFFSET))(this, value);
		}

		::System::Int64 get_Size()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_CONTENTDISPOSITION_GET_SIZE_OFFSET))(this);
		}

		::System::Void set_Size(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_CONTENTDISPOSITION_SET_SIZE_OFFSET))(this, value);
		}

		::System::Void Set(::System::String* contentDisposition, ::System::Net::Mime::HeaderCollection* headers)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Net::Mime::HeaderCollection*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_CONTENTDISPOSITION_SET_OFFSET))(this, contentDisposition, headers);
		}

		::System::Void PersistIfNeeded(::System::Net::Mime::HeaderCollection* headers, ::System::Boolean forcePersist)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Mime::HeaderCollection*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_CONTENTDISPOSITION_PERSISTIFNEEDED_OFFSET))(this, headers, forcePersist);
		}

		::System::Boolean get_IsChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_CONTENTDISPOSITION_GET_ISCHANGED_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_CONTENTDISPOSITION_TOSTRING_OFFSET))(this);
		}

		::System::String* Encode(::System::Boolean allowUnicode)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_CONTENTDISPOSITION_ENCODE_OFFSET))(this, allowUnicode);
		}

		static ::System::Void EncodeToBuffer(::System::String* value, ::System::Text::StringBuilder* builder, ::System::Boolean allowUnicode)
		{
			return ((::System::Void(*)(::System::String*, ::System::Text::StringBuilder*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_CONTENTDISPOSITION_ENCODETOBUFFER_OFFSET))(value, builder, allowUnicode);
		}

		::System::Boolean Equals(::System::Object* rparam)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_CONTENTDISPOSITION_EQUALS_OFFSET))(this, rparam);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_CONTENTDISPOSITION_GETHASHCODE_OFFSET))(this);
		}

		::System::Void ParseValue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_CONTENTDISPOSITION_PARSEVALUE_OFFSET))(this);
		}
	};
}
