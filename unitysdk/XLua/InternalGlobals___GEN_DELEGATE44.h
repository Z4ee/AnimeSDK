#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveState.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE44_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x10BDD450)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE44_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x10BDD4A0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE44_INVOKE_OFFSET UNITYSDK_OFFSET(0x10BDD440)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE44__CTOR_OFFSET UNITYSDK_OFFSET(0x10BDD3D0)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE44_TypeDefinitionIndex = 47925;

	class InternalGlobals___GEN_DELEGATE44 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE44__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::RPG::GameCore::AliveState a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AliveState))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE44_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::GameCore::AliveState a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::GameCore::AliveState, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE44_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE44_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
