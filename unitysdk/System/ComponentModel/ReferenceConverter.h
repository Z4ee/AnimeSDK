#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/TypeConverter.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::ComponentModel { class ITypeDescriptorContext; }
namespace System::ComponentModel { class TypeConverter_StandardValuesCollection; }
namespace System::Globalization { class CultureInfo; }

#define SYSTEM_COMPONENTMODEL_REFERENCECONVERTER_CANCONVERTFROM_OFFSET UNITYSDK_OFFSET(0x1D468B20)
#define SYSTEM_COMPONENTMODEL_REFERENCECONVERTER_CONVERTFROM_OFFSET UNITYSDK_OFFSET(0x1D468B90)
#define SYSTEM_COMPONENTMODEL_REFERENCECONVERTER_CONVERTTO_OFFSET UNITYSDK_OFFSET(0x1D468F00)
#define SYSTEM_COMPONENTMODEL_REFERENCECONVERTER_GETSTANDARDVALUESEXCLUSIVE_OFFSET UNITYSDK_OFFSET(0x1D469960)
#define SYSTEM_COMPONENTMODEL_REFERENCECONVERTER_GETSTANDARDVALUESSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1D469970)
#define SYSTEM_COMPONENTMODEL_REFERENCECONVERTER_GETSTANDARDVALUES_OFFSET UNITYSDK_OFFSET(0x1D469180)
#define SYSTEM_COMPONENTMODEL_REFERENCECONVERTER_ISVALUEALLOWED_OFFSET UNITYSDK_OFFSET(0x1D469980)
#define SYSTEM_COMPONENTMODEL_REFERENCECONVERTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D469990)
#define SYSTEM_COMPONENTMODEL_REFERENCECONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D466870)

namespace System::ComponentModel
{
	inline static constexpr unsigned int ReferenceConverter_TypeDefinitionIndex = 2968;

	class ReferenceConverter : public ::System::ComponentModel::TypeConverter
	{
	public:
		static ::System::String** StaticGet_none()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ReferenceConverter_TypeDefinitionIndex)->GetStaticField(0x39F0);
		}
		::System::Type* type; // 0x10

		::System::Void _ctor(::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFERENCECONVERTER__CTOR_OFFSET))(this, type);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFERENCECONVERTER__CCTOR_OFFSET))();
		}

		::System::Boolean CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* sourceType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFERENCECONVERTER_CANCONVERTFROM_OFFSET))(this, context, sourceType);
		}

		::System::Object* ConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value)
		{
			return ((::System::Object*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFERENCECONVERTER_CONVERTFROM_OFFSET))(this, context, culture, value);
		}

		::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value, ::System::Type* destinationType)
		{
			return ((::System::Object*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFERENCECONVERTER_CONVERTTO_OFFSET))(this, context, culture, value, destinationType);
		}

		::System::ComponentModel::TypeConverter_StandardValuesCollection* GetStandardValues(::System::ComponentModel::ITypeDescriptorContext* context)
		{
			return ((::System::ComponentModel::TypeConverter_StandardValuesCollection*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFERENCECONVERTER_GETSTANDARDVALUES_OFFSET))(this, context);
		}

		::System::Boolean GetStandardValuesExclusive(::System::ComponentModel::ITypeDescriptorContext* context)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFERENCECONVERTER_GETSTANDARDVALUESEXCLUSIVE_OFFSET))(this, context);
		}

		::System::Boolean GetStandardValuesSupported(::System::ComponentModel::ITypeDescriptorContext* context)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFERENCECONVERTER_GETSTANDARDVALUESSUPPORTED_OFFSET))(this, context);
		}

		::System::Boolean IsValueAllowed(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFERENCECONVERTER_ISVALUEALLOWED_OFFSET))(this, context, value);
		}
	};
}
