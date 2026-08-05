#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/TypeConverter.h"

namespace System { class Object; }
namespace System { class Type; }
namespace System::ComponentModel { class ITypeDescriptorContext; }
namespace System::ComponentModel { class TypeConverter_StandardValuesCollection; }
namespace System::Globalization { class CultureInfo; }

#define SYSTEM_COMPONENTMODEL_BOOLEANCONVERTER_CANCONVERTFROM_OFFSET UNITYSDK_OFFSET(0x1E7DE2A0)
#define SYSTEM_COMPONENTMODEL_BOOLEANCONVERTER_CONVERTFROM_OFFSET UNITYSDK_OFFSET(0x1E7DE310)
#define SYSTEM_COMPONENTMODEL_BOOLEANCONVERTER_GETSTANDARDVALUESEXCLUSIVE_OFFSET UNITYSDK_OFFSET(0x1E7DE740)
#define SYSTEM_COMPONENTMODEL_BOOLEANCONVERTER_GETSTANDARDVALUESSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1E7DE750)
#define SYSTEM_COMPONENTMODEL_BOOLEANCONVERTER_GETSTANDARDVALUES_OFFSET UNITYSDK_OFFSET(0x1E7DE530)
#define SYSTEM_COMPONENTMODEL_BOOLEANCONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7DE760)

namespace System::ComponentModel
{
	inline static constexpr unsigned int BooleanConverter_TypeDefinitionIndex = 2825;

	class BooleanConverter : public ::System::ComponentModel::TypeConverter
	{
	public:
		static ::System::ComponentModel::TypeConverter_StandardValuesCollection** StaticGet_values()
		{
			return (::System::ComponentModel::TypeConverter_StandardValuesCollection**)Il2CppClass::FromTypeDefinitionIndex(BooleanConverter_TypeDefinitionIndex)->GetStaticField(0x3150);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BOOLEANCONVERTER__CTOR_OFFSET))(this);
		}

		::System::Boolean CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* sourceType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BOOLEANCONVERTER_CANCONVERTFROM_OFFSET))(this, context, sourceType);
		}

		::System::Object* ConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value)
		{
			return ((::System::Object*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BOOLEANCONVERTER_CONVERTFROM_OFFSET))(this, context, culture, value);
		}

		::System::ComponentModel::TypeConverter_StandardValuesCollection* GetStandardValues(::System::ComponentModel::ITypeDescriptorContext* context)
		{
			return ((::System::ComponentModel::TypeConverter_StandardValuesCollection*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BOOLEANCONVERTER_GETSTANDARDVALUES_OFFSET))(this, context);
		}

		::System::Boolean GetStandardValuesExclusive(::System::ComponentModel::ITypeDescriptorContext* context)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BOOLEANCONVERTER_GETSTANDARDVALUESEXCLUSIVE_OFFSET))(this, context);
		}

		::System::Boolean GetStandardValuesSupported(::System::ComponentModel::ITypeDescriptorContext* context)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BOOLEANCONVERTER_GETSTANDARDVALUESSUPPORTED_OFFSET))(this, context);
		}
	};
}
