#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/TypeConverter.h"

namespace System { class Object; }
namespace System { class Type; }
namespace System::ComponentModel { class ITypeDescriptorContext; }
namespace System::Globalization { class CultureInfo; }

#define SYSTEM_COMPONENTMODEL_TIMESPANCONVERTER_CANCONVERTFROM_OFFSET UNITYSDK_OFFSET(0x19159A60)
#define SYSTEM_COMPONENTMODEL_TIMESPANCONVERTER_CANCONVERTTO_OFFSET UNITYSDK_OFFSET(0x19159AC0)
#define SYSTEM_COMPONENTMODEL_TIMESPANCONVERTER_CONVERTFROM_OFFSET UNITYSDK_OFFSET(0x19159B20)
#define SYSTEM_COMPONENTMODEL_TIMESPANCONVERTER_CONVERTTO_OFFSET UNITYSDK_OFFSET(0x19159D40)
#define SYSTEM_COMPONENTMODEL_TIMESPANCONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1915A020)

namespace System::ComponentModel
{
	inline static constexpr unsigned int TimeSpanConverter_TypeDefinitionIndex = 2622;

	class TimeSpanConverter : public ::System::ComponentModel::TypeConverter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TIMESPANCONVERTER__CTOR_OFFSET))(this);
		}

		::System::Boolean CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext* a1, ::System::Type* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TIMESPANCONVERTER_CANCONVERTFROM_OFFSET))(this, a1, a2);
		}

		::System::Boolean CanConvertTo(::System::ComponentModel::ITypeDescriptorContext* a1, ::System::Type* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TIMESPANCONVERTER_CANCONVERTTO_OFFSET))(this, a1, a2);
		}

		::System::Object* ConvertFrom(::System::ComponentModel::ITypeDescriptorContext* a1, ::System::Globalization::CultureInfo* a2, ::System::Object* a3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TIMESPANCONVERTER_CONVERTFROM_OFFSET))(this, a1, a2, a3);
		}

		::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* a1, ::System::Globalization::CultureInfo* a2, ::System::Object* a3, ::System::Type* a4)
		{
			return ((::System::Object*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TIMESPANCONVERTER_CONVERTTO_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
