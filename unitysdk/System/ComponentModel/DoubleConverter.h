#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/BaseNumberConverter.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Globalization { class NumberFormatInfo; }

#define SYSTEM_COMPONENTMODEL_DOUBLECONVERTER_FROMSTRING_1_OFFSET UNITYSDK_OFFSET(0x1AF2A260)
#define SYSTEM_COMPONENTMODEL_DOUBLECONVERTER_FROMSTRING_OFFSET UNITYSDK_OFFSET(0x1AF2A1A0)
#define SYSTEM_COMPONENTMODEL_DOUBLECONVERTER_GET_ALLOWHEX_OFFSET UNITYSDK_OFFSET(0x1AF2A160)
#define SYSTEM_COMPONENTMODEL_DOUBLECONVERTER_GET_TARGETTYPE_OFFSET UNITYSDK_OFFSET(0x1AF2A170)
#define SYSTEM_COMPONENTMODEL_DOUBLECONVERTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AF2A2A0)
#define SYSTEM_COMPONENTMODEL_DOUBLECONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF2A340)

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

		::System::Object* FromString(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DOUBLECONVERTER_FROMSTRING_OFFSET))(this, a1, a2);
		}

		::System::Object* FromString_1(::System::String* a1, ::System::Globalization::NumberFormatInfo* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DOUBLECONVERTER_FROMSTRING_1_OFFSET))(this, a1, a2);
		}

		::System::String* ToString(::System::Object* a1, ::System::Globalization::NumberFormatInfo* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DOUBLECONVERTER_TOSTRING_OFFSET))(this, a1, a2);
		}
	};
}
