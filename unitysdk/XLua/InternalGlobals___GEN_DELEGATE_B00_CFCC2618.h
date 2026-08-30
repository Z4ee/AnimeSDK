#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class IRogueMiracle; }
namespace RPG::Client { class IRogueMiracleInGame; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_CFCC2618_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x14B1E930)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_CFCC2618_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x14B1E960)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_CFCC2618_INVOKE_OFFSET UNITYSDK_OFFSET(0x14B1E920)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_CFCC2618__CTOR_OFFSET UNITYSDK_OFFSET(0x14B1E830)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE_B00_CFCC2618_TypeDefinitionIndex = 50476;

	class InternalGlobals___GEN_DELEGATE_B00_CFCC2618 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_CFCC2618__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::IRogueMiracleInGame* Invoke(::RPG::Client::IRogueMiracle* a1)
		{
			return ((::RPG::Client::IRogueMiracleInGame*(*)(::PVOID, ::RPG::Client::IRogueMiracle*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_CFCC2618_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::IRogueMiracle* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::IRogueMiracle*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_CFCC2618_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::IRogueMiracleInGame* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::RPG::Client::IRogueMiracleInGame*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_CFCC2618_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
