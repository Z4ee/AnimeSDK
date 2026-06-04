#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/TypeConverter.h"

namespace System { class Object; }
namespace System { class Type; }
namespace System::ComponentModel { class ITypeDescriptorContext; }
namespace System::ComponentModel { class TypeConverter_StandardValuesCollection; }
namespace System::Globalization { class CultureInfo; }

#define SYSTEM_COMPONENTMODEL_BOOLEANCONVERTER_CANCONVERTFROM_OFFSET UNITYSDK_OFFSET(0x1AF263C0)
#define SYSTEM_COMPONENTMODEL_BOOLEANCONVERTER_CONVERTFROM_OFFSET UNITYSDK_OFFSET(0x1AF26420)
#define SYSTEM_COMPONENTMODEL_BOOLEANCONVERTER_GETSTANDARDVALUESEXCLUSIVE_OFFSET UNITYSDK_OFFSET(0x1AF26820)
#define SYSTEM_COMPONENTMODEL_BOOLEANCONVERTER_GETSTANDARDVALUESSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1AF26830)
#define SYSTEM_COMPONENTMODEL_BOOLEANCONVERTER_GETSTANDARDVALUES_OFFSET UNITYSDK_OFFSET(0x1AF26670)
#define SYSTEM_COMPONENTMODEL_BOOLEANCONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF26840)

namespace System::ComponentModel
{
	inline static constexpr unsigned int BooleanConverter_TypeDefinitionIndex = 2553;

	class BooleanConverter : public ::System::ComponentModel::TypeConverter
	{
	public:
		static ::System::ComponentModel::TypeConverter_StandardValuesCollection** StaticGet_values()
		{
			return (::System::ComponentModel::TypeConverter_StandardValuesCollection**)Il2CppClass::FromTypeDefinitionIndex(BooleanConverter_TypeDefinitionIndex)->GetStaticField(0x1BC60);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BOOLEANCONVERTER__CTOR_OFFSET))(this);
		}

		::System::Boolean CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext* a1, ::System::Type* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BOOLEANCONVERTER_CANCONVERTFROM_OFFSET))(this, a1, a2);
		}

		::System::Object* ConvertFrom(::System::ComponentModel::ITypeDescriptorContext* a1, ::System::Globalization::CultureInfo* a2, ::System::Object* a3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BOOLEANCONVERTER_CONVERTFROM_OFFSET))(this, a1, a2, a3);
		}

		::System::ComponentModel::TypeConverter_StandardValuesCollection* GetStandardValues(::System::ComponentModel::ITypeDescriptorContext* a1)
		{
			return ((::System::ComponentModel::TypeConverter_StandardValuesCollection*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BOOLEANCONVERTER_GETSTANDARDVALUES_OFFSET))(this, a1);
		}

		::System::Boolean GetStandardValuesExclusive(::System::ComponentModel::ITypeDescriptorContext* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BOOLEANCONVERTER_GETSTANDARDVALUESEXCLUSIVE_OFFSET))(this, a1);
		}

		::System::Boolean GetStandardValuesSupported(::System::ComponentModel::ITypeDescriptorContext* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BOOLEANCONVERTER_GETSTANDARDVALUESSUPPORTED_OFFSET))(this, a1);
		}
	};
}
