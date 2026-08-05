#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/TypeConverter.h"

namespace System { class Attribute; }
namespace System { class Object; }
namespace System { class Type; }
namespace System::ComponentModel { class ITypeDescriptorContext; }
namespace System::ComponentModel { class PropertyDescriptorCollection; }
namespace System::Globalization { class CultureInfo; }

#define SYSTEM_COMPONENTMODEL_MULTILINESTRINGCONVERTER_CONVERTTO_OFFSET UNITYSDK_OFFSET(0x1D3F1160)
#define SYSTEM_COMPONENTMODEL_MULTILINESTRINGCONVERTER_GETPROPERTIESSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1D3F1250)
#define SYSTEM_COMPONENTMODEL_MULTILINESTRINGCONVERTER_GETPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1D3F1240)
#define SYSTEM_COMPONENTMODEL_MULTILINESTRINGCONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3F1260)

namespace System::ComponentModel
{
	inline static constexpr unsigned int MultilineStringConverter_TypeDefinitionIndex = 2951;

	class MultilineStringConverter : public ::System::ComponentModel::TypeConverter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MULTILINESTRINGCONVERTER__CTOR_OFFSET))(this);
		}

		::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value, ::System::Type* destinationType)
		{
			return ((::System::Object*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MULTILINESTRINGCONVERTER_CONVERTTO_OFFSET))(this, context, culture, value, destinationType);
		}

		::System::ComponentModel::PropertyDescriptorCollection* GetProperties(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Object* value, ::Il2CppArray<::System::Attribute*>* attributes)
		{
			return ((::System::ComponentModel::PropertyDescriptorCollection*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Object*, ::Il2CppArray<::System::Attribute*>*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MULTILINESTRINGCONVERTER_GETPROPERTIES_OFFSET))(this, context, value, attributes);
		}

		::System::Boolean GetPropertiesSupported(::System::ComponentModel::ITypeDescriptorContext* context)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MULTILINESTRINGCONVERTER_GETPROPERTIESSUPPORTED_OFFSET))(this, context);
		}
	};
}
