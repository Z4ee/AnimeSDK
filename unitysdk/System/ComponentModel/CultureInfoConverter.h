#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/TypeConverter.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::ComponentModel { class ITypeDescriptorContext; }
namespace System::ComponentModel { class TypeConverter_StandardValuesCollection; }
namespace System::Globalization { class CultureInfo; }

#define SYSTEM_COMPONENTMODEL_CULTUREINFOCONVERTER_CANCONVERTFROM_OFFSET UNITYSDK_OFFSET(0x18FA6B30)
#define SYSTEM_COMPONENTMODEL_CULTUREINFOCONVERTER_CANCONVERTTO_OFFSET UNITYSDK_OFFSET(0x18FA6BA0)
#define SYSTEM_COMPONENTMODEL_CULTUREINFOCONVERTER_CONVERTFROM_OFFSET UNITYSDK_OFFSET(0x18FA6C10)
#define SYSTEM_COMPONENTMODEL_CULTUREINFOCONVERTER_CONVERTTO_OFFSET UNITYSDK_OFFSET(0x18FA7830)
#define SYSTEM_COMPONENTMODEL_CULTUREINFOCONVERTER_GETCULTURENAME_OFFSET UNITYSDK_OFFSET(0x18FA6B10)
#define SYSTEM_COMPONENTMODEL_CULTUREINFOCONVERTER_GETSTANDARDVALUESEXCLUSIVE_OFFSET UNITYSDK_OFFSET(0x18FA7E90)
#define SYSTEM_COMPONENTMODEL_CULTUREINFOCONVERTER_GETSTANDARDVALUESSUPPORTED_OFFSET UNITYSDK_OFFSET(0x18FA7EA0)
#define SYSTEM_COMPONENTMODEL_CULTUREINFOCONVERTER_GETSTANDARDVALUES_OFFSET UNITYSDK_OFFSET(0x18FA7620)
#define SYSTEM_COMPONENTMODEL_CULTUREINFOCONVERTER_GET_DEFAULTCULTURESTRING_OFFSET UNITYSDK_OFFSET(0x18FA6AD0)
#define SYSTEM_COMPONENTMODEL_CULTUREINFOCONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x18FA7EB0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int CultureInfoConverter_TypeDefinitionIndex = 2846;

	class CultureInfoConverter : public ::System::ComponentModel::TypeConverter
	{
	public:
		::System::ComponentModel::TypeConverter_StandardValuesCollection* values; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CULTUREINFOCONVERTER__CTOR_OFFSET))(this);
		}

		::System::String* get_DefaultCultureString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CULTUREINFOCONVERTER_GET_DEFAULTCULTURESTRING_OFFSET))(this);
		}

		::System::String* GetCultureName(::System::Globalization::CultureInfo* culture)
		{
			return ((::System::String*(*)(::PVOID, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CULTUREINFOCONVERTER_GETCULTURENAME_OFFSET))(this, culture);
		}

		::System::Boolean CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* sourceType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CULTUREINFOCONVERTER_CANCONVERTFROM_OFFSET))(this, context, sourceType);
		}

		::System::Boolean CanConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* destinationType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CULTUREINFOCONVERTER_CANCONVERTTO_OFFSET))(this, context, destinationType);
		}

		::System::Object* ConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value)
		{
			return ((::System::Object*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CULTUREINFOCONVERTER_CONVERTFROM_OFFSET))(this, context, culture, value);
		}

		::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value, ::System::Type* destinationType)
		{
			return ((::System::Object*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CULTUREINFOCONVERTER_CONVERTTO_OFFSET))(this, context, culture, value, destinationType);
		}

		::System::ComponentModel::TypeConverter_StandardValuesCollection* GetStandardValues(::System::ComponentModel::ITypeDescriptorContext* context)
		{
			return ((::System::ComponentModel::TypeConverter_StandardValuesCollection*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CULTUREINFOCONVERTER_GETSTANDARDVALUES_OFFSET))(this, context);
		}

		::System::Boolean GetStandardValuesExclusive(::System::ComponentModel::ITypeDescriptorContext* context)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CULTUREINFOCONVERTER_GETSTANDARDVALUESEXCLUSIVE_OFFSET))(this, context);
		}

		::System::Boolean GetStandardValuesSupported(::System::ComponentModel::ITypeDescriptorContext* context)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CULTUREINFOCONVERTER_GETSTANDARDVALUESSUPPORTED_OFFSET))(this, context);
		}
	};
}
