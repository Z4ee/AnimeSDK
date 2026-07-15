#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/TypeConverter.h"

namespace System { class Object; }
namespace System { class Type; }
namespace System::Collections { class IComparer; }
namespace System::ComponentModel { class ITypeDescriptorContext; }
namespace System::ComponentModel { class TypeConverter_StandardValuesCollection; }
namespace System::Globalization { class CultureInfo; }

#define SYSTEM_COMPONENTMODEL_ENUMCONVERTER_CANCONVERTFROM_OFFSET UNITYSDK_OFFSET(0x1914AA20)
#define SYSTEM_COMPONENTMODEL_ENUMCONVERTER_CANCONVERTTO_OFFSET UNITYSDK_OFFSET(0x1914AAF0)
#define SYSTEM_COMPONENTMODEL_ENUMCONVERTER_CONVERTFROM_OFFSET UNITYSDK_OFFSET(0x1914AC20)
#define SYSTEM_COMPONENTMODEL_ENUMCONVERTER_CONVERTTO_OFFSET UNITYSDK_OFFSET(0x1914B140)
#define SYSTEM_COMPONENTMODEL_ENUMCONVERTER_GETSTANDARDVALUESEXCLUSIVE_OFFSET UNITYSDK_OFFSET(0x1914CE40)
#define SYSTEM_COMPONENTMODEL_ENUMCONVERTER_GETSTANDARDVALUESSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1914CEF0)
#define SYSTEM_COMPONENTMODEL_ENUMCONVERTER_GETSTANDARDVALUES_OFFSET UNITYSDK_OFFSET(0x1914C550)
#define SYSTEM_COMPONENTMODEL_ENUMCONVERTER_GET_COMPARER_OFFSET UNITYSDK_OFFSET(0x1914ABC0)
#define SYSTEM_COMPONENTMODEL_ENUMCONVERTER_ISVALID_OFFSET UNITYSDK_OFFSET(0x1914CF00)
#define SYSTEM_COMPONENTMODEL_ENUMCONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1914AA00)

namespace System::ComponentModel
{
	inline static constexpr unsigned int EnumConverter_TypeDefinitionIndex = 2584;

	class EnumConverter : public ::System::ComponentModel::TypeConverter
	{
	public:
		::System::ComponentModel::TypeConverter_StandardValuesCollection* values; // 0x10
		::System::Type* type; // 0x18

		::System::Void _ctor(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ENUMCONVERTER__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext* a1, ::System::Type* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ENUMCONVERTER_CANCONVERTFROM_OFFSET))(this, a1, a2);
		}

		::System::Boolean CanConvertTo(::System::ComponentModel::ITypeDescriptorContext* a1, ::System::Type* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ENUMCONVERTER_CANCONVERTTO_OFFSET))(this, a1, a2);
		}

		::System::Collections::IComparer* get_Comparer()
		{
			return ((::System::Collections::IComparer*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ENUMCONVERTER_GET_COMPARER_OFFSET))(this);
		}

		::System::Object* ConvertFrom(::System::ComponentModel::ITypeDescriptorContext* a1, ::System::Globalization::CultureInfo* a2, ::System::Object* a3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ENUMCONVERTER_CONVERTFROM_OFFSET))(this, a1, a2, a3);
		}

		::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* a1, ::System::Globalization::CultureInfo* a2, ::System::Object* a3, ::System::Type* a4)
		{
			return ((::System::Object*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ENUMCONVERTER_CONVERTTO_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::ComponentModel::TypeConverter_StandardValuesCollection* GetStandardValues(::System::ComponentModel::ITypeDescriptorContext* a1)
		{
			return ((::System::ComponentModel::TypeConverter_StandardValuesCollection*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ENUMCONVERTER_GETSTANDARDVALUES_OFFSET))(this, a1);
		}

		::System::Boolean GetStandardValuesExclusive(::System::ComponentModel::ITypeDescriptorContext* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ENUMCONVERTER_GETSTANDARDVALUESEXCLUSIVE_OFFSET))(this, a1);
		}

		::System::Boolean GetStandardValuesSupported(::System::ComponentModel::ITypeDescriptorContext* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ENUMCONVERTER_GETSTANDARDVALUESSUPPORTED_OFFSET))(this, a1);
		}

		::System::Boolean IsValid(::System::ComponentModel::ITypeDescriptorContext* a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ENUMCONVERTER_ISVALID_OFFSET))(this, a1, a2);
		}
	};
}
