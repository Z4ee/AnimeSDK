#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/TypeConverter.h"

namespace System { class Object; }
namespace System { class Type; }
namespace System::ComponentModel { class ITypeDescriptorContext; }
namespace System::Globalization { class CultureInfo; }

#define SYSTEM_COMPONENTMODEL_STRINGCONVERTER_CANCONVERTFROM_OFFSET UNITYSDK_OFFSET(0x1AF35C80)
#define SYSTEM_COMPONENTMODEL_STRINGCONVERTER_CONVERTFROM_OFFSET UNITYSDK_OFFSET(0x1AF35CE0)
#define SYSTEM_COMPONENTMODEL_STRINGCONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF35D60)

namespace System::ComponentModel
{
	inline static constexpr unsigned int StringConverter_TypeDefinitionIndex = 2617;

	class StringConverter : public ::System::ComponentModel::TypeConverter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_STRINGCONVERTER__CTOR_OFFSET))(this);
		}

		::System::Boolean CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext* a1, ::System::Type* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_STRINGCONVERTER_CANCONVERTFROM_OFFSET))(this, a1, a2);
		}

		::System::Object* ConvertFrom(::System::ComponentModel::ITypeDescriptorContext* a1, ::System::Globalization::CultureInfo* a2, ::System::Object* a3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_STRINGCONVERTER_CONVERTFROM_OFFSET))(this, a1, a2, a3);
		}
	};
}
