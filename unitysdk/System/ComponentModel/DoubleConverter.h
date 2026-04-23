#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/BaseNumberConverter.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Globalization { class NumberFormatInfo; }

#define SYSTEM_COMPONENTMODEL_DOUBLECONVERTER_FROMSTRING_1_OFFSET UNITYSDK_OFFSET(0x1A0C0DE0)
#define SYSTEM_COMPONENTMODEL_DOUBLECONVERTER_FROMSTRING_OFFSET UNITYSDK_OFFSET(0x1A0C0D20)
#define SYSTEM_COMPONENTMODEL_DOUBLECONVERTER_GET_ALLOWHEX_OFFSET UNITYSDK_OFFSET(0x1A0C0CE0)
#define SYSTEM_COMPONENTMODEL_DOUBLECONVERTER_GET_TARGETTYPE_OFFSET UNITYSDK_OFFSET(0x1A0C0CF0)
#define SYSTEM_COMPONENTMODEL_DOUBLECONVERTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A0C0E20)
#define SYSTEM_COMPONENTMODEL_DOUBLECONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0C0EC0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int DoubleConverter_TypeDefinitionIndex = 2576;

	class DoubleConverter : public ::System::ComponentModel::BaseNumberConverter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DOUBLECONVERTER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_AllowHex()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DOUBLECONVERTER_GET_ALLOWHEX_OFFSET))(this);
		}

		::System::Type* get_TargetType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DOUBLECONVERTER_GET_TARGETTYPE_OFFSET))(this);
		}

		::System::Object* FromString(::System::String* value, ::System::Int32 radix)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DOUBLECONVERTER_FROMSTRING_OFFSET))(this, value, radix);
		}

		::System::Object* FromString_1(::System::String* value, ::System::Globalization::NumberFormatInfo* formatInfo)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DOUBLECONVERTER_FROMSTRING_1_OFFSET))(this, value, formatInfo);
		}

		::System::String* ToString(::System::Object* value, ::System::Globalization::NumberFormatInfo* formatInfo)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DOUBLECONVERTER_TOSTRING_OFFSET))(this, value, formatInfo);
		}
	};
}
