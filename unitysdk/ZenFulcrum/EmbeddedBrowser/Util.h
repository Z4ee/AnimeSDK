#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define ZENFULCRUM_EMBEDDEDBROWSER_UTIL_PTRTOSTRINGUTF8_OFFSET UNITYSDK_OFFSET(0x1A6CE5E0)
#define ZENFULCRUM_EMBEDDEDBROWSER_UTIL_SAFESTARTSWITH_OFFSET UNITYSDK_OFFSET(0x1A6CE540)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Util_TypeDefinitionIndex = 36329;

	class Util : public ::System::Object
	{
	public:
		static ::System::Boolean SafeStartsWith(::System::String* check, ::System::String* starter)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_UTIL_SAFESTARTSWITH_OFFSET))(check, starter);
		}

		static ::System::String* PtrToStringUTF8(::System::IntPtr strIn)
		{
			return ((::System::String*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_UTIL_PTRTOSTRINGUTF8_OFFSET))(strIn);
		}
	};
}
