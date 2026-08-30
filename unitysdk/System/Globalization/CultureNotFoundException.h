#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ArgumentException.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_GLOBALIZATION_CULTURENOTFOUNDEXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x18D74CE0)
#define SYSTEM_GLOBALIZATION_CULTURENOTFOUNDEXCEPTION_GET_DEFAULTMESSAGE_OFFSET UNITYSDK_OFFSET(0x18D74A00)
#define SYSTEM_GLOBALIZATION_CULTURENOTFOUNDEXCEPTION_GET_FORMATEDINVALIDCULTUREID_OFFSET UNITYSDK_OFFSET(0x18D74EA0)
#define SYSTEM_GLOBALIZATION_CULTURENOTFOUNDEXCEPTION_GET_INVALIDCULTUREID_OFFSET UNITYSDK_OFFSET(0x18D74E80)
#define SYSTEM_GLOBALIZATION_CULTURENOTFOUNDEXCEPTION_GET_INVALIDCULTURENAME_OFFSET UNITYSDK_OFFSET(0x18D74E90)
#define SYSTEM_GLOBALIZATION_CULTURENOTFOUNDEXCEPTION_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x18D750F0)
#define SYSTEM_GLOBALIZATION_CULTURENOTFOUNDEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18D71960)
#define SYSTEM_GLOBALIZATION_CULTURENOTFOUNDEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x18D74A40)
#define SYSTEM_GLOBALIZATION_CULTURENOTFOUNDEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x18D74AC0)
#define SYSTEM_GLOBALIZATION_CULTURENOTFOUNDEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x18D74960)

namespace System::Globalization
{
	inline static constexpr unsigned int CultureNotFoundException_TypeDefinitionIndex = 738;

	class CultureNotFoundException : public ::System::ArgumentException
	{
	public:
		::System::String* m_invalidCultureName; // 0x90
		::System::Nullable_1<::System::Int32> m_invalidCultureId; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTURENOTFOUNDEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTURENOTFOUNDEXCEPTION__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_2(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTURENOTFOUNDEXCEPTION__CTOR_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_3(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTURENOTFOUNDEXCEPTION__CTOR_3_OFFSET))(this, a1, a2);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTURENOTFOUNDEXCEPTION_GETOBJECTDATA_OFFSET))(this, a1, a2);
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
