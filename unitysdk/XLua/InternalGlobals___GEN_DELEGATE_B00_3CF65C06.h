#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class IRogueTournMiracle; }
namespace RPG::Client { class IRogueTournMiracleInGame; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_3CF65C06_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x12B21C70)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_3CF65C06_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x12B21CA0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_3CF65C06_INVOKE_OFFSET UNITYSDK_OFFSET(0x12B21C60)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_3CF65C06__CTOR_OFFSET UNITYSDK_OFFSET(0x12B21B70)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE_B00_3CF65C06_TypeDefinitionIndex = 50497;

	class InternalGlobals___GEN_DELEGATE_B00_3CF65C06 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_3CF65C06__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::IRogueTournMiracleInGame* Invoke(::RPG::Client::IRogueTournMiracle* a1)
		{
			return ((::RPG::Client::IRogueTournMiracleInGame*(*)(::PVOID, ::RPG::Client::IRogueTournMiracle*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_3CF65C06_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::IRogueTournMiracle* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::IRogueTournMiracle*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_3CF65C06_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::IRogueTournMiracleInGame* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::RPG::Client::IRogueTournMiracleInGame*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_3CF65C06_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
