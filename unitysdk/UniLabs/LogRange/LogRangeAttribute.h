#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define UNILABS_LOGRANGE_LOGRANGEATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C4990E0)
#define UNILABS_LOGRANGE_LOGRANGEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4990D0)

namespace UniLabs::LogRange
{
	inline static constexpr unsigned int LogRangeAttribute_TypeDefinitionIndex = 85830;

	class LogRangeAttribute : public ::System::Attribute
	{
	public:
		::System::String* MaxGetter; // 0x10
		::System::String* MinGetter; // 0x18
		::System::String* CenterGetter; // 0x20
		::System::Single Center; // 0x28
		::System::Single Max; // 0x2C
		::System::Single Min; // 0x30

		::System::Void _ctor(::System::Single min, ::System::Single center, ::System::Single max)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNILABS_LOGRANGE_LOGRANGEATTRIBUTE__CTOR_OFFSET))(this, min, center, max);
		}

		::System::Void _ctor_1(::System::String* minGetter, ::System::String* centerGetter, ::System::String* maxGetter)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNILABS_LOGRANGE_LOGRANGEATTRIBUTE__CTOR_1_OFFSET))(this, minGetter, centerGetter, maxGetter);
		}
	};
}
