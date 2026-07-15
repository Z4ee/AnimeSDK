#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/TypeConverter.h"

namespace System { class Exception; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::ComponentModel { class ITypeDescriptorContext; }
namespace System::Globalization { class CultureInfo; }
namespace System::Globalization { class NumberFormatInfo; }

#define SYSTEM_COMPONENTMODEL_BASENUMBERCONVERTER_CANCONVERTFROM_OFFSET UNITYSDK_OFFSET(0x1A862960)
#define SYSTEM_COMPONENTMODEL_BASENUMBERCONVERTER_CANCONVERTTO_OFFSET UNITYSDK_OFFSET(0x1A863480)
#define SYSTEM_COMPONENTMODEL_BASENUMBERCONVERTER_CONVERTFROM_OFFSET UNITYSDK_OFFSET(0x1A8629C0)
#define SYSTEM_COMPONENTMODEL_BASENUMBERCONVERTER_CONVERTTO_OFFSET UNITYSDK_OFFSET(0x1A863030)
#define SYSTEM_COMPONENTMODEL_BASENUMBERCONVERTER_FROMSTRINGERROR_OFFSET UNITYSDK_OFFSET(0x1A8626B0)
#define SYSTEM_COMPONENTMODEL_BASENUMBERCONVERTER_GET_ALLOWHEX_OFFSET UNITYSDK_OFFSET(0x1A8626A0)
#define SYSTEM_COMPONENTMODEL_BASENUMBERCONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A863540)

namespace System::ComponentModel
{
	inline static constexpr unsigned int BaseNumberConverter_TypeDefinitionIndex = 2644;

	class BaseNumberConverter : public ::System::ComponentModel::TypeConverter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BASENUMBERCONVERTER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_AllowHex()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BASENUMBERCONVERTER_GET_ALLOWHEX_OFFSET))(this);
		}

		::System::Exception* FromStringError(::System::String* a1, ::System::Exception* a2)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BASENUMBERCONVERTER_FROMSTRINGERROR_OFFSET))(this, a1, a2);
		}

		::System::Boolean CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext* a1, ::System::Type* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BASENUMBERCONVERTER_CANCONVERTFROM_OFFSET))(this, a1, a2);
		}

		::System::Object* ConvertFrom(::System::ComponentModel::ITypeDescriptorContext* a1, ::System::Globalization::CultureInfo* a2, ::System::Object* a3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BASENUMBERCONVERTER_CONVERTFROM_OFFSET))(this, a1, a2, a3);
		}

		::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* a1, ::System::Globalization::CultureInfo* a2, ::System::Object* a3, ::System::Type* a4)
		{
			return ((::System::Object*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BASENUMBERCONVERTER_CONVERTTO_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean CanConvertTo(::System::ComponentModel::ITypeDescriptorContext* a1, ::System::Type* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BASENUMBERCONVERTER_CANCONVERTTO_OFFSET))(this, a1, a2);
		}
	};
}
