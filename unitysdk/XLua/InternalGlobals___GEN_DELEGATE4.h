#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class IRogueMiracle; }
namespace RPG::Client { class IRogueMiracleWithCategory; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE4_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x12E89350)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE4_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x12E89380)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE4_INVOKE_OFFSET UNITYSDK_OFFSET(0x12E89340)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE4__CTOR_OFFSET UNITYSDK_OFFSET(0x12E89250)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE4_TypeDefinitionIndex = 46920;

	class InternalGlobals___GEN_DELEGATE4 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE4__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::IRogueMiracleWithCategory* Invoke(::RPG::Client::IRogueMiracle* a1)
		{
			return ((::RPG::Client::IRogueMiracleWithCategory*(*)(::PVOID, ::RPG::Client::IRogueMiracle*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE4_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::IRogueMiracle* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::IRogueMiracle*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE4_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::IRogueMiracleWithCategory* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::RPG::Client::IRogueMiracleWithCategory*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE4_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
