#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/TypeConverter.h"

namespace System { class Object; }
namespace System { class Type; }
namespace System::Collections { class IComparer; }
namespace System::ComponentModel { class ITypeDescriptorContext; }
namespace System::ComponentModel { class TypeConverter_StandardValuesCollection; }
namespace System::Globalization { class CultureInfo; }

#define SYSTEM_COMPONENTMODEL_ENUMCONVERTER_CANCONVERTFROM_OFFSET UNITYSDK_OFFSET(0x1CEC46D0)
#define SYSTEM_COMPONENTMODEL_ENUMCONVERTER_CANCONVERTTO_OFFSET UNITYSDK_OFFSET(0x1CEC4760)
#define SYSTEM_COMPONENTMODEL_ENUMCONVERTER_CONVERTFROM_OFFSET UNITYSDK_OFFSET(0x1CEC4850)
#define SYSTEM_COMPONENTMODEL_ENUMCONVERTER_CONVERTTO_OFFSET UNITYSDK_OFFSET(0x1CEC4C70)
#define SYSTEM_COMPONENTMODEL_ENUMCONVERTER_GETSTANDARDVALUESEXCLUSIVE_OFFSET UNITYSDK_OFFSET(0x1CEC6190)
#define SYSTEM_COMPONENTMODEL_ENUMCONVERTER_GETSTANDARDVALUESSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1CEC61F0)
#define SYSTEM_COMPONENTMODEL_ENUMCONVERTER_GETSTANDARDVALUES_OFFSET UNITYSDK_OFFSET(0x1CEC5DB0)
#define SYSTEM_COMPONENTMODEL_ENUMCONVERTER_GET_COMPARER_OFFSET UNITYSDK_OFFSET(0x1CEC47F0)
#define SYSTEM_COMPONENTMODEL_ENUMCONVERTER_GET_ENUMTYPE_OFFSET UNITYSDK_OFFSET(0x1CEC46A0)
#define SYSTEM_COMPONENTMODEL_ENUMCONVERTER_GET_VALUES_OFFSET UNITYSDK_OFFSET(0x1CEC46B0)
#define SYSTEM_COMPONENTMODEL_ENUMCONVERTER_ISVALID_OFFSET UNITYSDK_OFFSET(0x1CEC6200)
#define SYSTEM_COMPONENTMODEL_ENUMCONVERTER_SET_VALUES_OFFSET UNITYSDK_OFFSET(0x1CEC46C0)
#define SYSTEM_COMPONENTMODEL_ENUMCONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEC4690)

namespace System::ComponentModel
{
	inline static constexpr unsigned int EnumConverter_TypeDefinitionIndex = 2876;

	class EnumConverter : public ::System::ComponentModel::TypeConverter
	{
	public:
		::System::ComponentModel::TypeConverter_StandardValuesCollection* values; // 0x10
		::System::Type* type; // 0x18

		::System::Void _ctor(::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ENUMCONVERTER__CTOR_OFFSET))(this, type);
		}

		::System::Type* get_EnumType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ENUMCONVERTER_GET_ENUMTYPE_OFFSET))(this);
		}

		::System::ComponentModel::TypeConverter_StandardValuesCollection* get_Values()
		{
			return ((::System::ComponentModel::TypeConverter_StandardValuesCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ENUMCONVERTER_GET_VALUES_OFFSET))(this);
		}

		::System::Void set_Values(::System::ComponentModel::TypeConverter_StandardValuesCollection* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::TypeConverter_StandardValuesCollection*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ENUMCONVERTER_SET_VALUES_OFFSET))(this, value);
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
