#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/BaseNumberConverter.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Globalization { class CultureInfo; }
namespace System::Globalization { class NumberFormatInfo; }

#define SYSTEM_COMPONENTMODEL_INT32CONVERTER_FROMSTRING_1_OFFSET UNITYSDK_OFFSET(0x1E2837D0)
#define SYSTEM_COMPONENTMODEL_INT32CONVERTER_FROMSTRING_2_OFFSET UNITYSDK_OFFSET(0x1E283850)
#define SYSTEM_COMPONENTMODEL_INT32CONVERTER_FROMSTRING_OFFSET UNITYSDK_OFFSET(0x1E283700)
#define SYSTEM_COMPONENTMODEL_INT32CONVERTER_GET_TARGETTYPE_OFFSET UNITYSDK_OFFSET(0x1E2836D0)
#define SYSTEM_COMPONENTMODEL_INT32CONVERTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2838B0)
#define SYSTEM_COMPONENTMODEL_INT32CONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E283970)

namespace System::ComponentModel
{
	inline static constexpr unsigned int Int32Converter_TypeDefinitionIndex = 2918;

	class Int32Converter : public ::System::ComponentModel::BaseNumberConverter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INT32CONVERTER__CTOR_OFFSET))(this);
		}

		::System::Type* get_TargetType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INT32CONVERTER_GET_TARGETTYPE_OFFSET))(this);
		}

		::System::Object* FromString(::System::String* value, ::System::Int32 radix)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INT32CONVERTER_FROMSTRING_OFFSET))(this, value, radix);
		}

		::System::Object* FromString_1(::System::String* value, ::System::Globalization::NumberFormatInfo* formatInfo)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INT32CONVERTER_FROMSTRING_1_OFFSET))(this, value, formatInfo);
		}

		::System::Object* FromString_2(::System::String* value, ::System::Globalization::CultureInfo* culture)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INT32CONVERTER_FROMSTRING_2_OFFSET))(this, value, culture);
		}

		::System::String* ToString(::System::Object* value, ::System::Globalization::NumberFormatInfo* formatInfo)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INT32CONVERTER_TOSTRING_OFFSET))(this, value, formatInfo);
		}
	};
}
