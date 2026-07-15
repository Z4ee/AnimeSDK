#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/UseAbilityOption.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_0_16E4307DCC419505_382;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE47_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x10BDD810)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE47_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x10BDD840)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE47_INVOKE_OFFSET UNITYSDK_OFFSET(0x10BDD800)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE47__CTOR_OFFSET UNITYSDK_OFFSET(0x10BDD710)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE47_TypeDefinitionIndex = 47928;

	class InternalGlobals___GEN_DELEGATE47 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE47__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::UseAbilityOption Invoke(::Class_0_16E4307DCC419505_382* a1)
		{
			return ((::RPG::GameCore::UseAbilityOption(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE47_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Class_0_16E4307DCC419505_382* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Class_0_16E4307DCC419505_382*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE47_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::UseAbilityOption EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::RPG::GameCore::UseAbilityOption(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE47_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
