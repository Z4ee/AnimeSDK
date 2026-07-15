#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveState.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE42_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x10BDD250)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE42_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x10BDD2A0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE42_INVOKE_OFFSET UNITYSDK_OFFSET(0x10BDD240)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE42__CTOR_OFFSET UNITYSDK_OFFSET(0x10BDD1D0)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE42_TypeDefinitionIndex = 47923;

	class InternalGlobals___GEN_DELEGATE42 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE42__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::RPG::GameCore::AliveState a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AliveState))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE42_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::GameCore::AliveState a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::GameCore::AliveState, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE42_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE42_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
