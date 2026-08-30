#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_EA6B9573C4BF1DD5;
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_1514163C_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x14B1B630)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_1514163C_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x14B1B6A0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_1514163C_INVOKE_OFFSET UNITYSDK_OFFSET(0x14B1B610)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_1514163C__CTOR_OFFSET UNITYSDK_OFFSET(0x14B1B520)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE_B00_1514163C_TypeDefinitionIndex = 50513;

	class InternalGlobals___GEN_DELEGATE_B00_1514163C : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_1514163C__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Class_1_EA6B9573C4BF1DD5* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EA6B9573C4BF1DD5*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_1514163C_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::Class_1_EA6B9573C4BF1DD5* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2, ::RPG::GameCore::FixPoint a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Class_1_EA6B9573C4BF1DD5*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::FixPoint, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_1514163C_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_1514163C_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
