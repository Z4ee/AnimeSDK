#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class IRogueTournGameLevelLinear; }
namespace RPG::Client { class IRogueTournGameLevelRoom; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE26_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x11CE97C0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE26_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x11CE9820)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE26_INVOKE_OFFSET UNITYSDK_OFFSET(0x11CE97B0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE26__CTOR_OFFSET UNITYSDK_OFFSET(0x11CE96C0)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE26_TypeDefinitionIndex = 47907;

	class InternalGlobals___GEN_DELEGATE26 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE26__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::IRogueTournGameLevelRoom* Invoke(::RPG::Client::IRogueTournGameLevelLinear* a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::IRogueTournGameLevelRoom*(*)(::PVOID, ::RPG::Client::IRogueTournGameLevelLinear*, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE26_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::IRogueTournGameLevelLinear* a1, ::System::UInt32 a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::IRogueTournGameLevelLinear*, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE26_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::IRogueTournGameLevelRoom* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::RPG::Client::IRogueTournGameLevelRoom*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE26_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
