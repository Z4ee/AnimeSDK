#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_015CBEAEE0FDE159;
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE51_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x112249F0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE51_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x11224A60)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE51_INVOKE_OFFSET UNITYSDK_OFFSET(0x112243B0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE51__CTOR_OFFSET UNITYSDK_OFFSET(0x11213180)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE51_TypeDefinitionIndex = 46377;

	class InternalGlobals___GEN_DELEGATE51 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE51__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Class_1_015CBEAEE0FDE159* pBattleRelicModule, ::RPG::GameCore::TurnBasedAbilityComponent* pTurnBasedAbilityComponent, ::RPG::GameCore::FixPoint fRelicValueRatio)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_015CBEAEE0FDE159*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE51_INVOKE_OFFSET))(this, pBattleRelicModule, pTurnBasedAbilityComponent, fRelicValueRatio);
		}

		::System::IAsyncResult* BeginInvoke(::Class_1_015CBEAEE0FDE159* pBattleRelicModule, ::RPG::GameCore::TurnBasedAbilityComponent* pTurnBasedAbilityComponent, ::RPG::GameCore::FixPoint fRelicValueRatio, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Class_1_015CBEAEE0FDE159*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::FixPoint, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE51_BEGININVOKE_OFFSET))(this, pBattleRelicModule, pTurnBasedAbilityComponent, fRelicValueRatio, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE51_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
