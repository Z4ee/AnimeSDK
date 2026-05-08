#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/TypeConverter.h"

namespace System { class Object; }
namespace System { class Type; }
namespace System::ComponentModel { class ITypeDescriptorContext; }
namespace System::ComponentModel { class TypeConverter_StandardValuesCollection; }
namespace System::Globalization { class CultureInfo; }

#define SYSTEM_DATA_COLUMNTYPECONVERTER_CANCONVERTFROM_OFFSET UNITYSDK_OFFSET(0x1B9F7C00)
#define SYSTEM_DATA_COLUMNTYPECONVERTER_CANCONVERTTO_OFFSET UNITYSDK_OFFSET(0x1B9F75E0)
#define SYSTEM_DATA_COLUMNTYPECONVERTER_CONVERTFROM_OFFSET UNITYSDK_OFFSET(0x1B9F7C70)
#define SYSTEM_DATA_COLUMNTYPECONVERTER_CONVERTTO_OFFSET UNITYSDK_OFFSET(0x1B9F7650)
#define SYSTEM_DATA_COLUMNTYPECONVERTER_GETSTANDARDVALUESEXCLUSIVE_OFFSET UNITYSDK_OFFSET(0x1B9F8120)
#define SYSTEM_DATA_COLUMNTYPECONVERTER_GETSTANDARDVALUESSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1B9F8130)
#define SYSTEM_DATA_COLUMNTYPECONVERTER_GETSTANDARDVALUES_OFFSET UNITYSDK_OFFSET(0x1B9F7F80)
#define SYSTEM_DATA_COLUMNTYPECONVERTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B9F8140)
#define SYSTEM_DATA_COLUMNTYPECONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9F75D0)

namespace System::Data
{
	inline static constexpr unsigned int ColumnTypeConverter_TypeDefinitionIndex = 36938;

	class ColumnTypeConverter : public ::System::ComponentModel::TypeConverter
	{
	public:
		static ::Il2CppArray<::System::Type*>** StaticGet_s_types()
		{
			return (::Il2CppArray<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(ColumnTypeConverter_TypeDefinitionIndex)->GetStaticField(0x27440);
		}
		::System::ComponentModel::TypeConverter_StandardValuesCollection* _values; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COLUMNTYPECONVERTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATA_COLUMNTYPECONVERTER__CCTOR_OFFSET))();
		}

		::System::Boolean CanConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* destinationType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COLUMNTYPECONVERTER_CANCONVERTTO_OFFSET))(this, context, destinationType);
		}

		::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value, ::System::Type* destinationType)
		{
			return ((::System::Object*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COLUMNTYPECONVERTER_CONVERTTO_OFFSET))(this, context, culture, value, destinationType);
		}

		::System::Boolean CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* sourceType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COLUMNTYPECONVERTER_CANCONVERTFROM_OFFSET))(this, context, sourceType);
		}

		::System::Object* ConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value)
		{
			return ((::System::Object*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COLUMNTYPECONVERTER_CONVERTFROM_OFFSET))(this, context, culture, value);
		}

		::System::ComponentModel::TypeConverter_StandardValuesCollection* GetStandardValues(::System::ComponentModel::ITypeDescriptorContext* context)
		{
			return ((::System::ComponentModel::TypeConverter_StandardValuesCollection*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COLUMNTYPECONVERTER_GETSTANDARDVALUES_OFFSET))(this, context);
		}

		::System::Boolean GetStandardValuesExclusive(::System::ComponentModel::ITypeDescriptorContext* context)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COLUMNTYPECONVERTER_GETSTANDARDVALUESEXCLUSIVE_OFFSET))(this, context);
		}

		::System::Boolean GetStandardValuesSupported(::System::ComponentModel::ITypeDescriptorContext* context)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COLUMNTYPECONVERTER_GETSTANDARDVALUESSUPPORTED_OFFSET))(this, context);
		}
	};
}
