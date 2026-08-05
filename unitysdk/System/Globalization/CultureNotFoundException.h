#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ArgumentException.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_GLOBALIZATION_CULTURENOTFOUNDEXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1D6847D0)
#define SYSTEM_GLOBALIZATION_CULTURENOTFOUNDEXCEPTION_GET_DEFAULTMESSAGE_OFFSET UNITYSDK_OFFSET(0x1D6840D0)
#define SYSTEM_GLOBALIZATION_CULTURENOTFOUNDEXCEPTION_GET_FORMATEDINVALIDCULTUREID_OFFSET UNITYSDK_OFFSET(0x1D684990)
#define SYSTEM_GLOBALIZATION_CULTURENOTFOUNDEXCEPTION_GET_INVALIDCULTUREID_OFFSET UNITYSDK_OFFSET(0x1D684970)
#define SYSTEM_GLOBALIZATION_CULTURENOTFOUNDEXCEPTION_GET_INVALIDCULTURENAME_OFFSET UNITYSDK_OFFSET(0x1D684980)
#define SYSTEM_GLOBALIZATION_CULTURENOTFOUNDEXCEPTION_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x1D684AB0)
#define SYSTEM_GLOBALIZATION_CULTURENOTFOUNDEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D684110)
#define SYSTEM_GLOBALIZATION_CULTURENOTFOUNDEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1D6841A0)
#define SYSTEM_GLOBALIZATION_CULTURENOTFOUNDEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1D684240)
#define SYSTEM_GLOBALIZATION_CULTURENOTFOUNDEXCEPTION__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1D6842D0)
#define SYSTEM_GLOBALIZATION_CULTURENOTFOUNDEXCEPTION__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1D684390)
#define SYSTEM_GLOBALIZATION_CULTURENOTFOUNDEXCEPTION__CTOR_6_OFFSET UNITYSDK_OFFSET(0x1D684440)
#define SYSTEM_GLOBALIZATION_CULTURENOTFOUNDEXCEPTION__CTOR_7_OFFSET UNITYSDK_OFFSET(0x1D6844F0)
#define SYSTEM_GLOBALIZATION_CULTURENOTFOUNDEXCEPTION__CTOR_8_OFFSET UNITYSDK_OFFSET(0x1D684590)
#define SYSTEM_GLOBALIZATION_CULTURENOTFOUNDEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D684010)

namespace System::Globalization
{
	inline static constexpr unsigned int CultureNotFoundException_TypeDefinitionIndex = 709;

	class CultureNotFoundException : public ::System::ArgumentException
	{
	public:
		::System::String* m_invalidCultureName; // 0x90
		::System::Nullable_1<::System::Int32> m_invalidCultureId; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTURENOTFOUNDEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTURENOTFOUNDEXCEPTION__CTOR_1_OFFSET))(this, message);
		}

		::System::Void _ctor_2(::System::String* paramName, ::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTURENOTFOUNDEXCEPTION__CTOR_2_OFFSET))(this, paramName, message);
		}

		::System::Void _ctor_3(::System::String* message, ::System::Exception* innerException)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTURENOTFOUNDEXCEPTION__CTOR_3_OFFSET))(this, message, innerException);
		}

		::System::Void _ctor_4(::System::String* paramName, ::System::Int32 invalidCultureId, ::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTURENOTFOUNDEXCEPTION__CTOR_4_OFFSET))(this, paramName, invalidCultureId, message);
		}

		::System::Void _ctor_5(::System::String* message, ::System::Int32 invalidCultureId, ::System::Exception* innerException)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTURENOTFOUNDEXCEPTION__CTOR_5_OFFSET))(this, message, invalidCultureId, innerException);
		}

		::System::Void _ctor_6(::System::String* paramName, ::System::String* invalidCultureName, ::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTURENOTFOUNDEXCEPTION__CTOR_6_OFFSET))(this, paramName, invalidCultureName, message);
		}

		::System::Void _ctor_7(::System::String* message, ::System::String* invalidCultureName, ::System::Exception* innerException)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTURENOTFOUNDEXCEPTION__CTOR_7_OFFSET))(this, message, invalidCultureName, innerException);
		}

		::System::Void _ctor_8(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTURENOTFOUNDEXCEPTION__CTOR_8_OFFSET))(this, info, context);
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
