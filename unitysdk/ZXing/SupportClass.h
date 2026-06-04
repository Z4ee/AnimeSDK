#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define ZXING_SUPPORTCLASS_TOBINARYSTRING_OFFSET UNITYSDK_OFFSET(0x1B53C590)

namespace ZXing
{
	inline static constexpr unsigned int SupportClass_TypeDefinitionIndex = 6422;

	class SupportClass : public ::System::Object
	{
	public:
		static ::System::String* ToBinaryString(::System::Int32 a1)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + ZXING_SUPPORTCLASS_TOBINARYSTRING_OFFSET))(a1);
		}
	};
}
