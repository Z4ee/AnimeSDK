#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/TypeConverter.h"

namespace System { class Attribute; }
namespace System { class Object; }
namespace System { class Type; }
namespace System::Collections { class IDictionary; }
namespace System::ComponentModel { class ITypeDescriptorContext; }
namespace System::ComponentModel { class PropertyDescriptorCollection; }
namespace System::ComponentModel { class TypeConverter_StandardValuesCollection; }
namespace System::Globalization { class CultureInfo; }

#define SYSTEM_COMPONENTMODEL_NULLABLECONVERTER_CANCONVERTFROM_OFFSET UNITYSDK_OFFSET(0x1C6F94A0)
#define SYSTEM_COMPONENTMODEL_NULLABLECONVERTER_CANCONVERTTO_OFFSET UNITYSDK_OFFSET(0x1C6F95D0)
#define SYSTEM_COMPONENTMODEL_NULLABLECONVERTER_CONVERTFROM_OFFSET UNITYSDK_OFFSET(0x1C6F9510)
#define SYSTEM_COMPONENTMODEL_NULLABLECONVERTER_CONVERTTO_OFFSET UNITYSDK_OFFSET(0x1C6F9680)
#define SYSTEM_COMPONENTMODEL_NULLABLECONVERTER_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1C6F9970)
#define SYSTEM_COMPONENTMODEL_NULLABLECONVERTER_GETCREATEINSTANCESUPPORTED_OFFSET UNITYSDK_OFFSET(0x1C6F9990)
#define SYSTEM_COMPONENTMODEL_NULLABLECONVERTER_GETPROPERTIESSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1C6F99E0)
#define SYSTEM_COMPONENTMODEL_NULLABLECONVERTER_GETPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1C6F99B0)
#define SYSTEM_COMPONENTMODEL_NULLABLECONVERTER_GETSTANDARDVALUESEXCLUSIVE_OFFSET UNITYSDK_OFFSET(0x1C6F9E70)
#define SYSTEM_COMPONENTMODEL_NULLABLECONVERTER_GETSTANDARDVALUESSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1C6F9E50)
#define SYSTEM_COMPONENTMODEL_NULLABLECONVERTER_GETSTANDARDVALUES_OFFSET UNITYSDK_OFFSET(0x1C6F9A00)
#define SYSTEM_COMPONENTMODEL_NULLABLECONVERTER_GET_NULLABLETYPE_OFFSET UNITYSDK_OFFSET(0x1C6F9F90)
#define SYSTEM_COMPONENTMODEL_NULLABLECONVERTER_GET_UNDERLYINGTYPECONVERTER_OFFSET UNITYSDK_OFFSET(0x1C6F9FB0)
#define SYSTEM_COMPONENTMODEL_NULLABLECONVERTER_GET_UNDERLYINGTYPE_OFFSET UNITYSDK_OFFSET(0x1C6F9FA0)
#define SYSTEM_COMPONENTMODEL_NULLABLECONVERTER_ISVALID_OFFSET UNITYSDK_OFFSET(0x1C6F9E90)
#define SYSTEM_COMPONENTMODEL_NULLABLECONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6F93F0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int NullableConverter_TypeDefinitionIndex = 2954;

	class NullableConverter : public ::System::ComponentModel::TypeConverter
	{
	public:
		::System::Type* nullableType; // 0x10
		::System::ComponentModel::TypeConverter* simpleTypeConverter; // 0x18
		::System::Type* simpleType; // 0x20

		::System::Void _ctor(::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NULLABLECONVERTER__CTOR_OFFSET))(this, type);
		}

		::System::Boolean CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* sourceType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NULLABLECONVERTER_CANCONVERTFROM_OFFSET))(this, context, sourceType);
		}

		::System::Object* ConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value)
		{
			return ((::System::Object*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NULLABLECONVERTER_CONVERTFROM_OFFSET))(this, context, culture, value);
		}

		::System::Boolean CanConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* destinationType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NULLABLECONVERTER_CANCONVERTTO_OFFSET))(this, context, destinationType);
		}

		::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value, ::System::Type* destinationType)
		{
			return ((::System::Object*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NULLABLECONVERTER_CONVERTTO_OFFSET))(this, context, culture, value, destinationType);
		}

		::System::Object* CreateInstance(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Collections::IDictionary* propertyValues)
		{
			return ((::System::Object*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Collections::IDictionary*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NULLABLECONVERTER_CREATEINSTANCE_OFFSET))(this, context, propertyValues);
		}

		::System::Boolean GetCreateInstanceSupported(::System::ComponentModel::ITypeDescriptorContext* context)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NULLABLECONVERTER_GETCREATEINSTANCESUPPORTED_OFFSET))(this, context);
		}

		::System::ComponentModel::PropertyDescriptorCollection* GetProperties(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Object* value, ::Il2CppArray<::System::Attribute*>* attributes)
		{
			return ((::System::ComponentModel::PropertyDescriptorCollection*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Object*, ::Il2CppArray<::System::Attribute*>*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NULLABLECONVERTER_GETPROPERTIES_OFFSET))(this, context, value, attributes);
		}

		::System::Boolean GetPropertiesSupported(::System::ComponentModel::ITypeDescriptorContext* context)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NULLABLECONVERTER_GETPROPERTIESSUPPORTED_OFFSET))(this, context);
		}

		::System::ComponentModel::TypeConverter_StandardValuesCollection* GetStandardValues(::System::ComponentModel::ITypeDescriptorContext* context)
		{
			return ((::System::ComponentModel::TypeConverter_StandardValuesCollection*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NULLABLECONVERTER_GETSTANDARDVALUES_OFFSET))(this, context);
		}

		::System::Boolean GetStandardValuesExclusive(::System::ComponentModel::ITypeDescriptorContext* context)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NULLABLECONVERTER_GETSTANDARDVALUESEXCLUSIVE_OFFSET))(this, context);
		}

		::System::Boolean GetStandardValuesSupported(::System::ComponentModel::ITypeDescriptorContext* context)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NULLABLECONVERTER_GETSTANDARDVALUESSUPPORTED_OFFSET))(this, context);
		}

		::System::Boolean IsValid(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NULLABLECONVERTER_ISVALID_OFFSET))(this, context, value);
		}

		::System::Type* get_NullableType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NULLABLECONVERTER_GET_NULLABLETYPE_OFFSET))(this);
		}

		::System::Type* get_UnderlyingType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NULLABLECONVERTER_GET_UNDERLYINGTYPE_OFFSET))(this);
		}

		::System::ComponentModel::TypeConverter* get_UnderlyingTypeConverter()
		{
			return ((::System::ComponentModel::TypeConverter*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NULLABLECONVERTER_GET_UNDERLYINGTYPECONVERTER_OFFSET))(this);
		}
	};
}
