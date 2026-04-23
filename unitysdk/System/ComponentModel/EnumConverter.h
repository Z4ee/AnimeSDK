#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/TypeConverter.h"

namespace System { class Object; }
namespace System { class Type; }
namespace System::Collections { class IComparer; }
namespace System::ComponentModel { class ITypeDescriptorContext; }
namespace System::ComponentModel { class TypeConverter_StandardValuesCollection; }
namespace System::Globalization { class CultureInfo; }

#define SYSTEM_COMPONENTMODEL_ENUMCONVERTER_CANCONVERTFROM_OFFSET UNITYSDK_OFFSET(0x1A0C1160)
#define SYSTEM_COMPONENTMODEL_ENUMCONVERTER_CANCONVERTTO_OFFSET UNITYSDK_OFFSET(0x1A0C1240)
#define SYSTEM_COMPONENTMODEL_ENUMCONVERTER_CONVERTFROM_OFFSET UNITYSDK_OFFSET(0x1A0C1380)
#define SYSTEM_COMPONENTMODEL_ENUMCONVERTER_CONVERTTO_OFFSET UNITYSDK_OFFSET(0x1A0C1910)
#define SYSTEM_COMPONENTMODEL_ENUMCONVERTER_GETSTANDARDVALUESEXCLUSIVE_OFFSET UNITYSDK_OFFSET(0x1A0C3120)
#define SYSTEM_COMPONENTMODEL_ENUMCONVERTER_GETSTANDARDVALUESSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1A0C3180)
#define SYSTEM_COMPONENTMODEL_ENUMCONVERTER_GETSTANDARDVALUES_OFFSET UNITYSDK_OFFSET(0x1A0C2C10)
#define SYSTEM_COMPONENTMODEL_ENUMCONVERTER_GET_COMPARER_OFFSET UNITYSDK_OFFSET(0x1A0C1320)
#define SYSTEM_COMPONENTMODEL_ENUMCONVERTER_ISVALID_OFFSET UNITYSDK_OFFSET(0x1A0C3190)
#define SYSTEM_COMPONENTMODEL_ENUMCONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0C1140)

namespace System::ComponentModel
{
	inline static constexpr unsigned int EnumConverter_TypeDefinitionIndex = 2580;

	class EnumConverter : public ::System::ComponentModel::TypeConverter
	{
	public:
		::System::ComponentModel::TypeConverter_StandardValuesCollection* values; // 0x10
		::System::Type* type; // 0x18

		::System::Void _ctor(::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ENUMCONVERTER__CTOR_OFFSET))(this, type);
		}

		::System::Boolean CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* sourceType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ENUMCONVERTER_CANCONVERTFROM_OFFSET))(this, context, sourceType);
		}

		::System::Boolean CanConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* destinationType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ENUMCONVERTER_CANCONVERTTO_OFFSET))(this, context, destinationType);
		}

		::System::Collections::IComparer* get_Comparer()
		{
			return ((::System::Collections::IComparer*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ENUMCONVERTER_GET_COMPARER_OFFSET))(this);
		}

		::System::Object* ConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value)
		{
			return ((::System::Object*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ENUMCONVERTER_CONVERTFROM_OFFSET))(this, context, culture, value);
		}

		::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value, ::System::Type* destinationType)
		{
			return ((::System::Object*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ENUMCONVERTER_CONVERTTO_OFFSET))(this, context, culture, value, destinationType);
		}

		::System::ComponentModel::TypeConverter_StandardValuesCollection* GetStandardValues(::System::ComponentModel::ITypeDescriptorContext* context)
		{
			return ((::System::ComponentModel::TypeConverter_StandardValuesCollection*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ENUMCONVERTER_GETSTANDARDVALUES_OFFSET))(this, context);
		}

		::System::Boolean GetStandardValuesExclusive(::System::ComponentModel::ITypeDescriptorContext* context)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ENUMCONVERTER_GETSTANDARDVALUESEXCLUSIVE_OFFSET))(this, context);
		}

		::System::Boolean GetStandardValuesSupported(::System::ComponentModel::ITypeDescriptorContext* context)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ENUMCONVERTER_GETSTANDARDVALUESSUPPORTED_OFFSET))(this, context);
		}

		::System::Boolean IsValid(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ENUMCONVERTER_ISVALID_OFFSET))(this, context, value);
		}
	};
}
