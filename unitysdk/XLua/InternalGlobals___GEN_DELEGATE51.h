#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::GameCore { class AttackDamageTypeConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE51_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x10BDDE40)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE51_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x10BDDE80)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE51_INVOKE_OFFSET UNITYSDK_OFFSET(0x10BDDE30)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE51__CTOR_OFFSET UNITYSDK_OFFSET(0x10BDDD40)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE51_TypeDefinitionIndex = 47932;

	class InternalGlobals___GEN_DELEGATE51 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE51__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::AttackDamageType Invoke(::RPG::GameCore::AttackDamageTypeConfig* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::PVOID, ::RPG::GameCore::AttackDamageTypeConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE51_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::GameCore::AttackDamageTypeConfig* a1, ::RPG::GameCore::TaskContext* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::GameCore::AttackDamageTypeConfig*, ::RPG::GameCore::TaskContext*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE51_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::GameCore::AttackDamageType EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE51_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
