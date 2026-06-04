#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/TypeConverter.h"

namespace System { class Object; }
namespace System { class Type; }
namespace System::ComponentModel { class ITypeDescriptorContext; }
namespace System::Globalization { class CultureInfo; }

#define SYSTEM_URITYPECONVERTER_CANCONVERTFROM_OFFSET UNITYSDK_OFFSET(0x1B016A70)
#define SYSTEM_URITYPECONVERTER_CANCONVERTTO_OFFSET UNITYSDK_OFFSET(0x1B016B30)
#define SYSTEM_URITYPECONVERTER_CANCONVERT_OFFSET UNITYSDK_OFFSET(0x1B016A10)
#define SYSTEM_URITYPECONVERTER_CONVERTFROM_OFFSET UNITYSDK_OFFSET(0x1B016BA0)
#define SYSTEM_URITYPECONVERTER_CONVERTTO_OFFSET UNITYSDK_OFFSET(0x1B016D40)
#define SYSTEM_URITYPECONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B016A00)

namespace System
{
	inline static constexpr unsigned int UriTypeConverter_TypeDefinitionIndex = 2481;

	class UriTypeConverter : public ::System::ComponentModel::TypeConverter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URITYPECONVERTER__CTOR_OFFSET))(this);
		}

		::System::Boolean CanConvert(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_URITYPECONVERTER_CANCONVERT_OFFSET))(this, a1);
		}

		::System::Boolean CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext* a1, ::System::Type* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_URITYPECONVERTER_CANCONVERTFROM_OFFSET))(this, a1, a2);
		}

		::System::Boolean CanConvertTo(::System::ComponentModel::ITypeDescriptorContext* a1, ::System::Type* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_URITYPECONVERTER_CANCONVERTTO_OFFSET))(this, a1, a2);
		}

		::System::Object* ConvertFrom(::System::ComponentModel::ITypeDescriptorContext* a1, ::System::Globalization::CultureInfo* a2, ::System::Object* a3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_URITYPECONVERTER_CONVERTFROM_OFFSET))(this, a1, a2, a3);
		}

		::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* a1, ::System::Globalization::CultureInfo* a2, ::System::Object* a3, ::System::Type* a4)
		{
			return ((::System::Object*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_URITYPECONVERTER_CONVERTTO_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
