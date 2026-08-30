#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Security::Util { class Tokenizer_StringMaker; }

#define SYSTEM_SHAREDSTATICS_GETSHAREDSTRINGMAKER_OFFSET UNITYSDK_OFFSET(0x166D4F60)
#define SYSTEM_SHAREDSTATICS_RELEASESHAREDSTRINGMAKER_OFFSET UNITYSDK_OFFSET(0x166D5540)
#define SYSTEM_SHAREDSTATICS__CCTOR_OFFSET UNITYSDK_OFFSET(0x166DE6A0)
#define SYSTEM_SHAREDSTATICS__CTOR_OFFSET UNITYSDK_OFFSET(0x166DE690)

namespace System
{
	inline static constexpr unsigned int SharedStatics_TypeDefinitionIndex = 327;

	class SharedStatics : public ::System::Object
	{
	public:
		static ::System::SharedStatics** StaticGet__sharedStatics()
		{
			return (::System::SharedStatics**)Il2CppClass::FromTypeDefinitionIndex(SharedStatics_TypeDefinitionIndex)->GetStaticField(0x10490);
		}
		::System::Security::Util::Tokenizer_StringMaker* _maker; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SHAREDSTATICS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_SHAREDSTATICS__CCTOR_OFFSET))();
		}

		static ::System::Security::Util::Tokenizer_StringMaker* GetSharedStringMaker()
		{
			return ((::System::Security::Util::Tokenizer_StringMaker*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SHAREDSTATICS_GETSHAREDSTRINGMAKER_OFFSET))();
		}

		static ::System::Void ReleaseSharedStringMaker(::System::Security::Util::Tokenizer_StringMaker*& a1)
		{
			return ((::System::Void(*)(::System::Security::Util::Tokenizer_StringMaker*&))((::PBYTE)hIl2Cpp + SYSTEM_SHAREDSTATICS_RELEASESHAREDSTRINGMAKER_OFFSET))(a1);
		}
	};
}
