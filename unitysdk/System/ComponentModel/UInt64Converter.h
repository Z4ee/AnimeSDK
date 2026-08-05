#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/BaseNumberConverter.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Globalization { class CultureInfo; }
namespace System::Globalization { class NumberFormatInfo; }

#define SYSTEM_COMPONENTMODEL_UINT64CONVERTER_FROMSTRING_1_OFFSET UNITYSDK_OFFSET(0x1C7002C0)
#define SYSTEM_COMPONENTMODEL_UINT64CONVERTER_FROMSTRING_2_OFFSET UNITYSDK_OFFSET(0x1C700350)
#define SYSTEM_COMPONENTMODEL_UINT64CONVERTER_FROMSTRING_OFFSET UNITYSDK_OFFSET(0x1C7001F0)
#define SYSTEM_COMPONENTMODEL_UINT64CONVERTER_GET_TARGETTYPE_OFFSET UNITYSDK_OFFSET(0x1C7001C0)
#define SYSTEM_COMPONENTMODEL_UINT64CONVERTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C7003B0)
#define SYSTEM_COMPONENTMODEL_UINT64CONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C700470)

namespace System::ComponentModel
{
	inline static constexpr unsigned int UInt64Converter_TypeDefinitionIndex = 3012;

	class UInt64Converter : public ::System::ComponentModel::BaseNumberConverter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_UINT64CONVERTER__CTOR_OFFSET))(this);
		}

		::System::Type* get_TargetType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_UINT64CONVERTER_GET_TARGETTYPE_OFFSET))(this);
		}

		::System::Object* FromString(::System::String* value, ::System::Int32 radix)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_UINT64CONVERTER_FROMSTRING_OFFSET))(this, value, radix);
		}

		::System::Object* FromString_1(::System::String* value, ::System::Globalization::NumberFormatInfo* formatInfo)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_UINT64CONVERTER_FROMSTRING_1_OFFSET))(this, value, formatInfo);
		}

		::System::Object* FromString_2(::System::String* value, ::System::Globalization::CultureInfo* culture)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_UINT64CONVERTER_FROMSTRING_2_OFFSET))(this, value, culture);
		}

		::System::String* ToString(::System::Object* value, ::System::Globalization::NumberFormatInfo* formatInfo)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_UINT64CONVERTER_TOSTRING_OFFSET))(this, value, formatInfo);
		}
	};
}
