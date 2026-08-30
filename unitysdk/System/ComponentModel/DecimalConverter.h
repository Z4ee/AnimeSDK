#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/BaseNumberConverter.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::ComponentModel { class ITypeDescriptorContext; }
namespace System::Globalization { class CultureInfo; }
namespace System::Globalization { class NumberFormatInfo; }

#define SYSTEM_COMPONENTMODEL_DECIMALCONVERTER_CANCONVERTTO_OFFSET UNITYSDK_OFFSET(0x1E91C010)
#define SYSTEM_COMPONENTMODEL_DECIMALCONVERTER_CONVERTTO_OFFSET UNITYSDK_OFFSET(0x1E91C100)
#define SYSTEM_COMPONENTMODEL_DECIMALCONVERTER_FROMSTRING_1_OFFSET UNITYSDK_OFFSET(0x1E91C570)
#define SYSTEM_COMPONENTMODEL_DECIMALCONVERTER_FROMSTRING_OFFSET UNITYSDK_OFFSET(0x1E91C480)
#define SYSTEM_COMPONENTMODEL_DECIMALCONVERTER_GET_ALLOWHEX_OFFSET UNITYSDK_OFFSET(0x1E91BFD0)
#define SYSTEM_COMPONENTMODEL_DECIMALCONVERTER_GET_TARGETTYPE_OFFSET UNITYSDK_OFFSET(0x1E91BFE0)
#define SYSTEM_COMPONENTMODEL_DECIMALCONVERTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E91C5E0)
#define SYSTEM_COMPONENTMODEL_DECIMALCONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E91C690)

namespace System::ComponentModel
{
	inline static constexpr unsigned int DecimalConverter_TypeDefinitionIndex = 2576;

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

		::System::Boolean CanConvertTo(::System::ComponentModel::ITypeDescriptorContext* a1, ::System::Type* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DECIMALCONVERTER_CANCONVERTTO_OFFSET))(this, a1, a2);
		}

		::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* a1, ::System::Globalization::CultureInfo* a2, ::System::Object* a3, ::System::Type* a4)
		{
			return ((::System::Object*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DECIMALCONVERTER_CONVERTTO_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Object* FromString(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DECIMALCONVERTER_FROMSTRING_OFFSET))(this, a1, a2);
		}

		::System::Object* FromString_1(::System::String* a1, ::System::Globalization::NumberFormatInfo* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DECIMALCONVERTER_FROMSTRING_1_OFFSET))(this, a1, a2);
		}

		::System::String* ToString(::System::Object* a1, ::System::Globalization::NumberFormatInfo* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DECIMALCONVERTER_TOSTRING_OFFSET))(this, a1, a2);
		}
	};
}
