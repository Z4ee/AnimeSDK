#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace System { class String; }

#define ZXING_WRITEREXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x188829F0)
#define ZXING_WRITEREXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x18887440)
#define ZXING_WRITEREXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1888DC80)

namespace ZXing
{
	inline static constexpr unsigned int WriterException_TypeDefinitionIndex = 8623;

	class WriterException : public ::System::Exception
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_WRITEREXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ZXING_WRITEREXCEPTION__CTOR_1_OFFSET))(this, message);
		}

		::System::Void _ctor_2(::System::String* message, ::System::Exception* innerExc)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + ZXING_WRITEREXCEPTION__CTOR_2_OFFSET))(this, message, innerExc);
		}
	};
}
