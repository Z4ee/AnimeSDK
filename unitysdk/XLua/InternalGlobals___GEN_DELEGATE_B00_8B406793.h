#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_EA6B9573C4BF1DD5;
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_8B406793_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x11855A90)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_8B406793_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x11855AD0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_8B406793_INVOKE_OFFSET UNITYSDK_OFFSET(0x11855A80)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_8B406793__CTOR_OFFSET UNITYSDK_OFFSET(0x11855990)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE_B00_8B406793_TypeDefinitionIndex = 50514;

	class InternalGlobals___GEN_DELEGATE_B00_8B406793 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_8B406793__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Class_1_EA6B9573C4BF1DD5* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EA6B9573C4BF1DD5*, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_8B406793_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::Class_1_EA6B9573C4BF1DD5* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Class_1_EA6B9573C4BF1DD5*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_8B406793_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_8B406793_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
