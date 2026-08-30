#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/BaseNumberConverter.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Globalization { class NumberFormatInfo; }

#define SYSTEM_COMPONENTMODEL_INT32CONVERTER_FROMSTRING_1_OFFSET UNITYSDK_OFFSET(0x1AB0D7D0)
#define SYSTEM_COMPONENTMODEL_INT32CONVERTER_FROMSTRING_OFFSET UNITYSDK_OFFSET(0x1AB0D720)
#define SYSTEM_COMPONENTMODEL_INT32CONVERTER_GET_TARGETTYPE_OFFSET UNITYSDK_OFFSET(0x1AB0D6F0)
#define SYSTEM_COMPONENTMODEL_INT32CONVERTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AB0D810)
#define SYSTEM_COMPONENTMODEL_INT32CONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB0D8A0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int Int32Converter_TypeDefinitionIndex = 2608;

	class Int32Converter : public ::System::ComponentModel::BaseNumberConverter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INT32CONVERTER__CTOR_OFFSET))(this);
		}

		::System::Type* get_TargetType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INT32CONVERTER_GET_TARGETTYPE_OFFSET))(this);
		}

		::System::Object* FromString(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INT32CONVERTER_FROMSTRING_OFFSET))(this, a1, a2);
		}

		::System::Object* FromString_1(::System::String* a1, ::System::Globalization::NumberFormatInfo* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INT32CONVERTER_FROMSTRING_1_OFFSET))(this, a1, a2);
		}

		::System::String* ToString(::System::Object* a1, ::System::Globalization::NumberFormatInfo* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INT32CONVERTER_TOSTRING_OFFSET))(this, a1, a2);
		}
	};
}
