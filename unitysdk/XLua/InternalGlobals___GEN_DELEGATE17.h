#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class IRogueTournDifficulty; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE17_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x11CE8A80)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE17_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x11CE8AB0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE17_INVOKE_OFFSET UNITYSDK_OFFSET(0x11CE8A70)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE17__CTOR_OFFSET UNITYSDK_OFFSET(0x11CE8980)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE17_TypeDefinitionIndex = 47898;

	class InternalGlobals___GEN_DELEGATE17 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE17__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::RPG::Client::IRogueTournDifficulty* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IRogueTournDifficulty*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE17_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::IRogueTournDifficulty* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::IRogueTournDifficulty*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE17_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE17_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
