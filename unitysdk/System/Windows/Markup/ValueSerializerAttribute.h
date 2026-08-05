#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_WINDOWS_MARKUP_VALUESERIALIZERATTRIBUTE_GET_VALUESERIALIZERTYPENAME_OFFSET UNITYSDK_OFFSET(0x1E983F20)
#define SYSTEM_WINDOWS_MARKUP_VALUESERIALIZERATTRIBUTE_GET_VALUESERIALIZERTYPE_OFFSET UNITYSDK_OFFSET(0x1E983E70)
#define SYSTEM_WINDOWS_MARKUP_VALUESERIALIZERATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E983E60)
#define SYSTEM_WINDOWS_MARKUP_VALUESERIALIZERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E983E50)

namespace System::Windows::Markup
{
	inline static constexpr unsigned int ValueSerializerAttribute_TypeDefinitionIndex = 2706;

	class ValueSerializerAttribute : public ::System::Attribute
	{
	public:
		::System::String* _valueSerializerTypeName; // 0x10
		::System::Type* _valueSerializerType; // 0x18

		::System::Void _ctor(::System::Type* valueSerializerType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_WINDOWS_MARKUP_VALUESERIALIZERATTRIBUTE__CTOR_OFFSET))(this, valueSerializerType);
		}

		::System::Void _ctor_1(::System::String* valueSerializerTypeName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_WINDOWS_MARKUP_VALUESERIALIZERATTRIBUTE__CTOR_1_OFFSET))(this, valueSerializerTypeName);
		}

		::System::Type* get_ValueSerializerType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_WINDOWS_MARKUP_VALUESERIALIZERATTRIBUTE_GET_VALUESERIALIZERTYPE_OFFSET))(this);
		}

		::System::String* get_ValueSerializerTypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_WINDOWS_MARKUP_VALUESERIALIZERATTRIBUTE_GET_VALUESERIALIZERTYPENAME_OFFSET))(this);
		}
	};
}
