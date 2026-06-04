#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class IRogueTournGameLevel; }
namespace RPG::Client { class IRogueTournGameLevelRoom; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE20_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x12E877B0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE20_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x12E877E0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE20_INVOKE_OFFSET UNITYSDK_OFFSET(0x12E877A0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE20__CTOR_OFFSET UNITYSDK_OFFSET(0x12E876B0)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE20_TypeDefinitionIndex = 46936;

	class InternalGlobals___GEN_DELEGATE20 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE20__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::IRogueTournGameLevelRoom* Invoke(::RPG::Client::IRogueTournGameLevel* a1)
		{
			return ((::RPG::Client::IRogueTournGameLevelRoom*(*)(::PVOID, ::RPG::Client::IRogueTournGameLevel*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE20_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::IRogueTournGameLevel* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::IRogueTournGameLevel*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE20_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::IRogueTournGameLevelRoom* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::RPG::Client::IRogueTournGameLevelRoom*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE20_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
