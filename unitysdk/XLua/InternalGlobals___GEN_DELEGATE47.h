#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::GameCore { class AttackDamageTypeConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE47_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xFF598E0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE47_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xFF59920)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE47_INVOKE_OFFSET UNITYSDK_OFFSET(0xFF59320)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE47__CTOR_OFFSET UNITYSDK_OFFSET(0xFF49F30)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE47_TypeDefinitionIndex = 40464;

	class InternalGlobals___GEN_DELEGATE47 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE47__CTOR_OFFSET))(this, object, method);
		}

		::RPG::GameCore::AttackDamageType Invoke(::RPG::GameCore::AttackDamageTypeConfig* cfg, ::RPG::GameCore::TaskContext* ctx)
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::PVOID, ::RPG::GameCore::AttackDamageTypeConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE47_INVOKE_OFFSET))(this, cfg, ctx);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::GameCore::AttackDamageTypeConfig* cfg, ::RPG::GameCore::TaskContext* ctx, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::GameCore::AttackDamageTypeConfig*, ::RPG::GameCore::TaskContext*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE47_BEGININVOKE_OFFSET))(this, cfg, ctx, callback, object);
		}

		::RPG::GameCore::AttackDamageType EndInvoke(::System::IAsyncResult* result)
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE47_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
