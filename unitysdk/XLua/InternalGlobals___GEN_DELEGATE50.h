#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::GameCore { class AttackDamageTypeConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE50_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x11224340)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE50_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x11224380)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE50_INVOKE_OFFSET UNITYSDK_OFFSET(0x11223D80)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE50__CTOR_OFFSET UNITYSDK_OFFSET(0x11213160)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE50_TypeDefinitionIndex = 46376;

	class InternalGlobals___GEN_DELEGATE50 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE50__CTOR_OFFSET))(this, object, method);
		}

		::RPG::GameCore::AttackDamageType Invoke(::RPG::GameCore::AttackDamageTypeConfig* cfg, ::RPG::GameCore::TaskContext* ctx)
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::PVOID, ::RPG::GameCore::AttackDamageTypeConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE50_INVOKE_OFFSET))(this, cfg, ctx);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::GameCore::AttackDamageTypeConfig* cfg, ::RPG::GameCore::TaskContext* ctx, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::GameCore::AttackDamageTypeConfig*, ::RPG::GameCore::TaskContext*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE50_BEGININVOKE_OFFSET))(this, cfg, ctx, callback, object);
		}

		::RPG::GameCore::AttackDamageType EndInvoke(::System::IAsyncResult* result)
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE50_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
