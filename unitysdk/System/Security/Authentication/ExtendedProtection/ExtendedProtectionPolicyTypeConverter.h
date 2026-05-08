#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/TypeConverter.h"

namespace System { class Object; }
namespace System { class Type; }
namespace System::ComponentModel { class ITypeDescriptorContext; }
namespace System::Globalization { class CultureInfo; }

#define SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_EXTENDEDPROTECTIONPOLICYTYPECONVERTER_CANCONVERTTO_OFFSET UNITYSDK_OFFSET(0x1B1F39F0)
#define SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_EXTENDEDPROTECTIONPOLICYTYPECONVERTER_CONVERTTO_OFFSET UNITYSDK_OFFSET(0x1B1F3A40)
#define SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_EXTENDEDPROTECTIONPOLICYTYPECONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1F3A90)

namespace System::Security::Authentication::ExtendedProtection
{
	inline static constexpr unsigned int ExtendedProtectionPolicyTypeConverter_TypeDefinitionIndex = 3157;

	class ExtendedProtectionPolicyTypeConverter : public ::System::ComponentModel::TypeConverter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_EXTENDEDPROTECTIONPOLICYTYPECONVERTER__CTOR_OFFSET))(this);
		}

		::System::Boolean CanConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* destinationType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_EXTENDEDPROTECTIONPOLICYTYPECONVERTER_CANCONVERTTO_OFFSET))(this, context, destinationType);
		}

		::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value, ::System::Type* destinationType)
		{
			return ((::System::Object*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_AUTHENTICATION_EXTENDEDPROTECTION_EXTENDEDPROTECTIONPOLICYTYPECONVERTER_CONVERTTO_OFFSET))(this, context, culture, value, destinationType);
		}
	};
}
