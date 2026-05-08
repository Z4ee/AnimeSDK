#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/BaseNumberConverter.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::ComponentModel { class ITypeDescriptorContext; }
namespace System::Globalization { class CultureInfo; }
namespace System::Globalization { class NumberFormatInfo; }

#define SYSTEM_COMPONENTMODEL_DECIMALCONVERTER_CANCONVERTTO_OFFSET UNITYSDK_OFFSET(0x1A315230)
#define SYSTEM_COMPONENTMODEL_DECIMALCONVERTER_CONVERTTO_OFFSET UNITYSDK_OFFSET(0x1A3152C0)
#define SYSTEM_COMPONENTMODEL_DECIMALCONVERTER_FROMSTRING_1_OFFSET UNITYSDK_OFFSET(0x1A315680)
#define SYSTEM_COMPONENTMODEL_DECIMALCONVERTER_FROMSTRING_2_OFFSET UNITYSDK_OFFSET(0x1A315730)
#define SYSTEM_COMPONENTMODEL_DECIMALCONVERTER_FROMSTRING_OFFSET UNITYSDK_OFFSET(0x1A315620)
#define SYSTEM_COMPONENTMODEL_DECIMALCONVERTER_GET_ALLOWHEX_OFFSET UNITYSDK_OFFSET(0x1A3151F0)
#define SYSTEM_COMPONENTMODEL_DECIMALCONVERTER_GET_TARGETTYPE_OFFSET UNITYSDK_OFFSET(0x1A315200)
#define SYSTEM_COMPONENTMODEL_DECIMALCONVERTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A3157C0)
#define SYSTEM_COMPONENTMODEL_DECIMALCONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3158A0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int DecimalConverter_TypeDefinitionIndex = 2857;

	class DecimalConverter : public ::System::ComponentModel::BaseNumberConverter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DECIMALCONVERTER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_AllowHex()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DECIMALCONVERTER_GET_ALLOWHEX_OFFSET))(this);
		}

		::System::Type* get_TargetType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DECIMALCONVERTER_GET_TARGETTYPE_OFFSET))(this);
		}

		::System::Boolean CanConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* destinationType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DECIMALCONVERTER_CANCONVERTTO_OFFSET))(this, context, destinationType);
		}

		::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value, ::System::Type* destinationType)
		{
			return ((::System::Object*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DECIMALCONVERTER_CONVERTTO_OFFSET))(this, context, culture, value, destinationType);
		}

		::System::Object* FromString(::System::String* value, ::System::Int32 radix)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DECIMALCONVERTER_FROMSTRING_OFFSET))(this, value, radix);
		}

		::System::Object* FromString_1(::System::String* value, ::System::Globalization::NumberFormatInfo* formatInfo)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DECIMALCONVERTER_FROMSTRING_1_OFFSET))(this, value, formatInfo);
		}

		::System::Object* FromString_2(::System::String* value, ::System::Globalization::CultureInfo* culture)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DECIMALCONVERTER_FROMSTRING_2_OFFSET))(this, value, culture);
		}

		::System::String* ToString(::System::Object* value, ::System::Globalization::NumberFormatInfo* formatInfo)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DECIMALCONVERTER_TOSTRING_OFFSET))(this, value, formatInfo);
		}
	};
}
