#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace System { class String; }

#define ZENFULCRUM_EMBEDDEDBROWSER_JSEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6A1F70)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int JSException_TypeDefinitionIndex = 36330;

	class JSException : public ::System::Exception
	{
	public:
		::System::Void _ctor(::System::String* what)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSEXCEPTION__CTOR_OFFSET))(this, what);
		}
	};
}
