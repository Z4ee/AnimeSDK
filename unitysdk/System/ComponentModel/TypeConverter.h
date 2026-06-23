#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Attribute; }
namespace System { class Exception; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class ICollection; }
namespace System::Collections { class IDictionary; }
namespace System::ComponentModel { class ITypeDescriptorContext; }
namespace System::ComponentModel { class PropertyDescriptorCollection; }
namespace System::ComponentModel { class TypeConverter_StandardValuesCollection; }
namespace System::Globalization { class CultureInfo; }

#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_CANCONVERTFROM_1_OFFSET UNITYSDK_OFFSET(0x1C6C2870)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_CANCONVERTFROM_OFFSET UNITYSDK_OFFSET(0x1C6C52F0)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_CANCONVERTTO_1_OFFSET UNITYSDK_OFFSET(0x1C6C5330)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_CANCONVERTTO_OFFSET UNITYSDK_OFFSET(0x1C6C5310)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_CONVERTFROMINVARIANTSTRING_1_OFFSET UNITYSDK_OFFSET(0x1C6C5520)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_CONVERTFROMINVARIANTSTRING_OFFSET UNITYSDK_OFFSET(0x1C6C54D0)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_CONVERTFROMSTRING_1_OFFSET UNITYSDK_OFFSET(0x1C6C5580)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_CONVERTFROMSTRING_2_OFFSET UNITYSDK_OFFSET(0x1C6C5500)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_CONVERTFROMSTRING_OFFSET UNITYSDK_OFFSET(0x1C6C5550)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_CONVERTFROM_1_OFFSET UNITYSDK_OFFSET(0x1C6C2CF0)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_CONVERTFROM_OFFSET UNITYSDK_OFFSET(0x1C6C5370)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_CONVERTTOINVARIANTSTRING_1_OFFSET UNITYSDK_OFFSET(0x1C6C5860)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_CONVERTTOINVARIANTSTRING_OFFSET UNITYSDK_OFFSET(0x1C6C5740)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_CONVERTTOSTRING_1_OFFSET UNITYSDK_OFFSET(0x1C6C5970)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_CONVERTTOSTRING_2_OFFSET UNITYSDK_OFFSET(0x1C6C57D0)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_CONVERTTOSTRING_OFFSET UNITYSDK_OFFSET(0x1C6C58F0)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_CONVERTTO_1_OFFSET UNITYSDK_OFFSET(0x1C6C2950)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_CONVERTTO_OFFSET UNITYSDK_OFFSET(0x1C6C55C0)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_CREATEINSTANCE_1_OFFSET UNITYSDK_OFFSET(0x1C6C5A20)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1C6C5A00)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_GETCONVERTFROMEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1C6C53B0)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_GETCONVERTTOEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1C6C55F0)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_GETCREATEINSTANCESUPPORTED_1_OFFSET UNITYSDK_OFFSET(0x1C6C5A50)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_GETCREATEINSTANCESUPPORTED_OFFSET UNITYSDK_OFFSET(0x1C6C5A30)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_GETPROPERTIESSUPPORTED_1_OFFSET UNITYSDK_OFFSET(0x1C6C5BC0)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_GETPROPERTIESSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1C6C5BA0)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_GETPROPERTIES_1_OFFSET UNITYSDK_OFFSET(0x1C6C5A70)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_GETPROPERTIES_2_OFFSET UNITYSDK_OFFSET(0x1C6C5B90)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_GETPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1C6C5A60)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_GETSTANDARDVALUESEXCLUSIVE_1_OFFSET UNITYSDK_OFFSET(0x1C6C5C20)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_GETSTANDARDVALUESEXCLUSIVE_OFFSET UNITYSDK_OFFSET(0x1C6C5C00)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_GETSTANDARDVALUESSUPPORTED_1_OFFSET UNITYSDK_OFFSET(0x1C6C5C50)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_GETSTANDARDVALUESSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1C6C5C30)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_GETSTANDARDVALUES_1_OFFSET UNITYSDK_OFFSET(0x1C6C5BF0)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_GETSTANDARDVALUES_OFFSET UNITYSDK_OFFSET(0x1C6C5BD0)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_GET_USECOMPATIBLETYPECONVERSION_OFFSET UNITYSDK_OFFSET(0x1C6C52E0)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_ISVALID_1_OFFSET UNITYSDK_OFFSET(0x1C6C5C80)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_ISVALID_OFFSET UNITYSDK_OFFSET(0x1C6C5C60)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_SORTPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1C6C5D50)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C6C5D80)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6C2D60)

namespace System::ComponentModel
{
	inline static constexpr unsigned int TypeConverter_TypeDefinitionIndex = 2987;

	class TypeConverter : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_useCompatibleTypeConversion()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TypeConverter_TypeDefinitionIndex)->GetStaticField(0x1240);
		}
		// static const ::System::String* s_UseCompatibleTypeConverterBehavior; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER__CCTOR_OFFSET))();
		}

		static ::System::Boolean get_UseCompatibleTypeConversion()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_GET_USECOMPATIBLETYPECONVERSION_OFFSET))();
		}

		::System::Boolean CanConvertFrom(::System::Type* sourceType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_CANCONVERTFROM_OFFSET))(this, sourceType);
		}

		::System::Boolean CanConvertFrom_1(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* sourceType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_CANCONVERTFROM_1_OFFSET))(this, context, sourceType);
		}

		::System::Boolean CanConvertTo(::System::Type* destinationType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_CANCONVERTTO_OFFSET))(this, destinationType);
		}

		::System::Boolean CanConvertTo_1(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* destinationType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_CANCONVERTTO_1_OFFSET))(this, context, destinationType);
		}

		::System::Object* ConvertFrom(::System::Object* value)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_CONVERTFROM_OFFSET))(this, value);
		}

		::System::Object* ConvertFrom_1(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value)
		{
			return ((::System::Object*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_CONVERTFROM_1_OFFSET))(this, context, culture, value);
		}

		::System::Object* ConvertFromInvariantString(::System::String* text)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_CONVERTFROMINVARIANTSTRING_OFFSET))(this, text);
		}

		::System::Object* ConvertFromInvariantString_1(::System::ComponentModel::ITypeDescriptorContext* context, ::System::String* text)
		{
			return ((::System::Object*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_CONVERTFROMINVARIANTSTRING_1_OFFSET))(this, context, text);
		}

		::System::Object* ConvertFromString(::System::String* text)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_CONVERTFROMSTRING_OFFSET))(this, text);
		}

		::System::Object* ConvertFromString_1(::System::ComponentModel::ITypeDescriptorContext* context, ::System::String* text)
		{
			return ((::System::Object*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_CONVERTFROMSTRING_1_OFFSET))(this, context, text);
		}

		::System::Object* ConvertFromString_2(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::String* text)
		{
			return ((::System::Object*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_CONVERTFROMSTRING_2_OFFSET))(this, context, culture, text);
		}

		::System::Object* ConvertTo(::System::Object* value, ::System::Type* destinationType)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_CONVERTTO_OFFSET))(this, value, destinationType);
		}

		::System::Object* ConvertTo_1(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value, ::System::Type* destinationType)
		{
			return ((::System::Object*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_CONVERTTO_1_OFFSET))(this, context, culture, value, destinationType);
		}

		::System::String* ConvertToInvariantString(::System::Object* value)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_CONVERTTOINVARIANTSTRING_OFFSET))(this, value);
		}

		::System::String* ConvertToInvariantString_1(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Object* value)
		{
			return ((::System::String*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_CONVERTTOINVARIANTSTRING_1_OFFSET))(this, context, value);
		}

		::System::String* ConvertToString(::System::Object* value)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_CONVERTTOSTRING_OFFSET))(this, value);
		}

		::System::String* ConvertToString_1(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Object* value)
		{
			return ((::System::String*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_CONVERTTOSTRING_1_OFFSET))(this, context, value);
		}

		::System::String* ConvertToString_2(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value)
		{
			return ((::System::String*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_CONVERTTOSTRING_2_OFFSET))(this, context, culture, value);
		}

		::System::Object* CreateInstance(::System::Collections::IDictionary* propertyValues)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Collections::IDictionary*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_CREATEINSTANCE_OFFSET))(this, propertyValues);
		}

		::System::Object* CreateInstance_1(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Collections::IDictionary* propertyValues)
		{
			return ((::System::Object*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Collections::IDictionary*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_CREATEINSTANCE_1_OFFSET))(this, context, propertyValues);
		}

		::System::Exception* GetConvertFromException(::System::Object* value)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_GETCONVERTFROMEXCEPTION_OFFSET))(this, value);
		}

		::System::Exception* GetConvertToException(::System::Object* value, ::System::Type* destinationType)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_GETCONVERTTOEXCEPTION_OFFSET))(this, value, destinationType);
		}

		::System::Boolean GetCreateInstanceSupported()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_GETCREATEINSTANCESUPPORTED_OFFSET))(this);
		}

		::System::Boolean GetCreateInstanceSupported_1(::System::ComponentModel::ITypeDescriptorContext* context)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_GETCREATEINSTANCESUPPORTED_1_OFFSET))(this, context);
		}

		::System::ComponentModel::PropertyDescriptorCollection* GetProperties(::System::Object* value)
		{
			return ((::System::ComponentModel::PropertyDescriptorCollection*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_GETPROPERTIES_OFFSET))(this, value);
		}

		::System::ComponentModel::PropertyDescriptorCollection* GetProperties_1(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Object* value)
		{
			return ((::System::ComponentModel::PropertyDescriptorCollection*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_GETPROPERTIES_1_OFFSET))(this, context, value);
		}

		::System::ComponentModel::PropertyDescriptorCollection* GetProperties_2(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Object* value, ::Il2CppArray<::System::Attribute*>* attributes)
		{
			return ((::System::ComponentModel::PropertyDescriptorCollection*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Object*, ::Il2CppArray<::System::Attribute*>*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_GETPROPERTIES_2_OFFSET))(this, context, value, attributes);
		}

		::System::Boolean GetPropertiesSupported()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_GETPROPERTIESSUPPORTED_OFFSET))(this);
		}

		::System::Boolean GetPropertiesSupported_1(::System::ComponentModel::ITypeDescriptorContext* context)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_GETPROPERTIESSUPPORTED_1_OFFSET))(this, context);
		}

		::System::Collections::ICollection* GetStandardValues()
		{
			return ((::System::Collections::ICollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_GETSTANDARDVALUES_OFFSET))(this);
		}

		::System::ComponentModel::TypeConverter_StandardValuesCollection* GetStandardValues_1(::System::ComponentModel::ITypeDescriptorContext* context)
		{
			return ((::System::ComponentModel::TypeConverter_StandardValuesCollection*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_GETSTANDARDVALUES_1_OFFSET))(this, context);
		}

		::System::Boolean GetStandardValuesExclusive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_GETSTANDARDVALUESEXCLUSIVE_OFFSET))(this);
		}

		::System::Boolean GetStandardValuesExclusive_1(::System::ComponentModel::ITypeDescriptorContext* context)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_GETSTANDARDVALUESEXCLUSIVE_1_OFFSET))(this, context);
		}

		::System::Boolean GetStandardValuesSupported()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_GETSTANDARDVALUESSUPPORTED_OFFSET))(this);
		}

		::System::Boolean GetStandardValuesSupported_1(::System::ComponentModel::ITypeDescriptorContext* context)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_GETSTANDARDVALUESSUPPORTED_1_OFFSET))(this, context);
		}

		::System::Boolean IsValid(::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_ISVALID_OFFSET))(this, value);
		}

		::System::Boolean IsValid_1(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_ISVALID_1_OFFSET))(this, context, value);
		}

		::System::ComponentModel::PropertyDescriptorCollection* SortProperties(::System::ComponentModel::PropertyDescriptorCollection* props, ::Il2CppArray<::System::String*>* names)
		{
			return ((::System::ComponentModel::PropertyDescriptorCollection*(*)(::PVOID, ::System::ComponentModel::PropertyDescriptorCollection*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_SORTPROPERTIES_OFFSET))(this, props, names);
		}
	};
}
