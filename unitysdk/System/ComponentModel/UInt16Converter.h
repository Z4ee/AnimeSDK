#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/BaseNumberConverter.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Globalization { class NumberFormatInfo; }

#define SYSTEM_COMPONENTMODEL_UINT16CONVERTER_FROMSTRING_1_OFFSET UNITYSDK_OFFSET(0x1AF3FA80)
#define SYSTEM_COMPONENTMODEL_UINT16CONVERTER_FROMSTRING_OFFSET UNITYSDK_OFFSET(0x1AF3FA50)
#define SYSTEM_COMPONENTMODEL_UINT16CONVERTER_GET_TARGETTYPE_OFFSET UNITYSDK_OFFSET(0x1AF3FA20)
#define SYSTEM_COMPONENTMODEL_UINT16CONVERTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AF3FAC0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int UInt16Converter_TypeDefinitionIndex = 2636;

	class UInt16Converter : public ::System::ComponentModel::BaseNumberConverter
	{
	public:
		::System::Type* get_TargetType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_UINT16CONVERTER_GET_TARGETTYPE_OFFSET))(this);
		}

		::System::Object* FromString(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_UINT16CONVERTER_FROMSTRING_OFFSET))(this, a1, a2);
		}

		::System::Object* FromString_1(::System::String* a1, ::System::Globalization::NumberFormatInfo* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_UINT16CONVERTER_FROMSTRING_1_OFFSET))(this, a1, a2);
		}

		::System::String* ToString(::System::Object* a1, ::System::Globalization::NumberFormatInfo* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_UINT16CONVERTER_TOSTRING_OFFSET))(this, a1, a2);
		}
	};
}
