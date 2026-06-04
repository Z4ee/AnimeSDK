#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_NATIVECOOKIE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4F1C70)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_NativeCookie_TypeDefinitionIndex = 36460;

	class BrowserNative_NativeCookie : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::System::String* value; // 0x18
		::System::String* domain; // 0x20
		::System::String* path; // 0x28
		::System::String* creation; // 0x30
		::System::String* lastAccess; // 0x38
		::System::String* expires; // 0x40
		::System::Byte secure; // 0x48
		::System::Byte httpOnly; // 0x49

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_NATIVECOOKIE__CTOR_OFFSET))(this);
		}
	};
}
