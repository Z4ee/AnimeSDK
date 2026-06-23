#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/TypeConverter.h"

namespace System { class Object; }
namespace System { class Type; }
namespace System::ComponentModel { class ITypeDescriptorContext; }
namespace System::ComponentModel { class TypeConverter_StandardValuesCollection; }
namespace System::Globalization { class CultureInfo; }

#define SYSTEM_COMPONENTMODEL_TYPELISTCONVERTER_CANCONVERTFROM_OFFSET UNITYSDK_OFFSET(0x1B7507D0)
#define SYSTEM_COMPONENTMODEL_TYPELISTCONVERTER_CANCONVERTTO_OFFSET UNITYSDK_OFFSET(0x1B750840)
#define SYSTEM_COMPONENTMODEL_TYPELISTCONVERTER_CONVERTFROM_OFFSET UNITYSDK_OFFSET(0x1B7508B0)
#define SYSTEM_COMPONENTMODEL_TYPELISTCONVERTER_CONVERTTO_OFFSET UNITYSDK_OFFSET(0x1B7509E0)
#define SYSTEM_COMPONENTMODEL_TYPELISTCONVERTER_GETSTANDARDVALUESEXCLUSIVE_OFFSET UNITYSDK_OFFSET(0x1B750EB0)
#define SYSTEM_COMPONENTMODEL_TYPELISTCONVERTER_GETSTANDARDVALUESSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1B750EC0)
#define SYSTEM_COMPONENTMODEL_TYPELISTCONVERTER_GETSTANDARDVALUES_OFFSET UNITYSDK_OFFSET(0x1B750D90)
#define SYSTEM_COMPONENTMODEL_TYPELISTCONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7507C0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int TypeListConverter_TypeDefinitionIndex = 3009;

	class TypeListConverter : public ::System::ComponentModel::TypeConverter
	{
	public:
		::System::ComponentModel::TypeConverter_StandardValuesCollection* values; // 0x10
		::Il2CppArray<::System::Type*>* types; // 0x18

		::System::Void _ctor(::Il2CppArray<::System::Type*>* types)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPELISTCONVERTER__CTOR_OFFSET))(this, types);
		}

		::System::Boolean CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* sourceType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPELISTCONVERTER_CANCONVERTFROM_OFFSET))(this, context, sourceType);
		}

		::System::Boolean CanConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* destinationType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPELISTCONVERTER_CANCONVERTTO_OFFSET))(this, context, destinationType);
		}

		::System::Object* ConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value)
		{
			return ((::System::Object*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPELISTCONVERTER_CONVERTFROM_OFFSET))(this, context, culture, value);
		}

		::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value, ::System::Type* destinationType)
		{
			return ((::System::Object*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPELISTCONVERTER_CONVERTTO_OFFSET))(this, context, culture, value, destinationType);
		}

		::System::ComponentModel::TypeConverter_StandardValuesCollection* GetStandardValues(::System::ComponentModel::ITypeDescriptorContext* context)
		{
			return ((::System::ComponentModel::TypeConverter_StandardValuesCollection*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPELISTCONVERTER_GETSTANDARDVALUES_OFFSET))(this, context);
		}

		::System::Boolean GetStandardValuesExclusive(::System::ComponentModel::ITypeDescriptorContext* context)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPELISTCONVERTER_GETSTANDARDVALUESEXCLUSIVE_OFFSET))(this, context);
		}

		::System::Boolean GetStandardValuesSupported(::System::ComponentModel::ITypeDescriptorContext* context)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPELISTCONVERTER_GETSTANDARDVALUESSUPPORTED_OFFSET))(this, context);
		}
	};
}
