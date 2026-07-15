#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class IRogueTournMiracle; }
namespace RPG::Client { class IRogueTournMiracleInGame; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE6_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x10BDEAD0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE6_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x10BDEB00)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE6_INVOKE_OFFSET UNITYSDK_OFFSET(0x10BDEAC0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE6__CTOR_OFFSET UNITYSDK_OFFSET(0x10BDE9D0)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE6_TypeDefinitionIndex = 47887;

	class InternalGlobals___GEN_DELEGATE6 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE6__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::IRogueTournMiracleInGame* Invoke(::RPG::Client::IRogueTournMiracle* a1)
		{
			return ((::RPG::Client::IRogueTournMiracleInGame*(*)(::PVOID, ::RPG::Client::IRogueTournMiracle*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE6_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::IRogueTournMiracle* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::IRogueTournMiracle*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE6_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::IRogueTournMiracleInGame* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::RPG::Client::IRogueTournMiracleInGame*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE6_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
