#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ArgumentException.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_GLOBALIZATION_CULTURENOTFOUNDEXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x17925180)
#define SYSTEM_GLOBALIZATION_CULTURENOTFOUNDEXCEPTION_GET_DEFAULTMESSAGE_OFFSET UNITYSDK_OFFSET(0x17924EA0)
#define SYSTEM_GLOBALIZATION_CULTURENOTFOUNDEXCEPTION_GET_FORMATEDINVALIDCULTUREID_OFFSET UNITYSDK_OFFSET(0x17925340)
#define SYSTEM_GLOBALIZATION_CULTURENOTFOUNDEXCEPTION_GET_INVALIDCULTUREID_OFFSET UNITYSDK_OFFSET(0x17925320)
#define SYSTEM_GLOBALIZATION_CULTURENOTFOUNDEXCEPTION_GET_INVALIDCULTURENAME_OFFSET UNITYSDK_OFFSET(0x17925330)
#define SYSTEM_GLOBALIZATION_CULTURENOTFOUNDEXCEPTION_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x17925450)
#define SYSTEM_GLOBALIZATION_CULTURENOTFOUNDEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17921F70)
#define SYSTEM_GLOBALIZATION_CULTURENOTFOUNDEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x17924EE0)
#define SYSTEM_GLOBALIZATION_CULTURENOTFOUNDEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x17924F60)
#define SYSTEM_GLOBALIZATION_CULTURENOTFOUNDEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x17924E00)

namespace System::Globalization
{
	inline static constexpr unsigned int CultureNotFoundException_TypeDefinitionIndex = 736;

	class CultureNotFoundException : public ::System::ArgumentException
	{
	public:
		::System::String* m_invalidCultureName; // 0x90
		::System::Nullable_1<::System::Int32> m_invalidCultureId; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTURENOTFOUNDEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* paramName, ::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTURENOTFOUNDEXCEPTION__CTOR_1_OFFSET))(this, paramName, message);
		}

		::System::Void _ctor_2(::System::String* paramName, ::System::String* invalidCultureName, ::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTURENOTFOUNDEXCEPTION__CTOR_2_OFFSET))(this, paramName, invalidCultureName, message);
		}

		::System::Void _ctor_3(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTURENOTFOUNDEXCEPTION__CTOR_3_OFFSET))(this, info, context);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTURENOTFOUNDEXCEPTION_GETOBJECTDATA_OFFSET))(this, info, context);
		}

		::System::Nullable_1<::System::Int32> get_InvalidCultureId()
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTURENOTFOUNDEXCEPTION_GET_INVALIDCULTUREID_OFFSET))(this);
		}

		::System::String* get_InvalidCultureName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTURENOTFOUNDEXCEPTION_GET_INVALIDCULTURENAME_OFFSET))(this);
		}

		static ::System::String* get_DefaultMessage()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTURENOTFOUNDEXCEPTION_GET_DEFAULTMESSAGE_OFFSET))();
		}

		::System::String* get_FormatedInvalidCultureId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTURENOTFOUNDEXCEPTION_GET_FORMATEDINVALIDCULTUREID_OFFSET))(this);
		}

		::System::String* get_Message()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTURENOTFOUNDEXCEPTION_GET_MESSAGE_OFFSET))(this);
		}
	};
}
