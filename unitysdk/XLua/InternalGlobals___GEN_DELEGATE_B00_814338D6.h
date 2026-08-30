#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/MonsterRank.h"
#include "unitysdk/Struct_2_A98C406BD653F8E9.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_814338D6_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x11855680)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_814338D6_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x11855700)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_814338D6_INVOKE_OFFSET UNITYSDK_OFFSET(0x11855660)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_814338D6__CTOR_OFFSET UNITYSDK_OFFSET(0x11855570)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE_B00_814338D6_TypeDefinitionIndex = 50530;

	class InternalGlobals___GEN_DELEGATE_B00_814338D6 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_814338D6__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::System::Collections::Generic::List_1<::Struct_2_A98C406BD653F8E9>* a1, ::RPG::GameCore::AttackDamageType a2, ::RPG::GameCore::MonsterRank a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_A98C406BD653F8E9>*, ::RPG::GameCore::AttackDamageType, ::RPG::GameCore::MonsterRank))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_814338D6_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::System::Collections::Generic::List_1<::Struct_2_A98C406BD653F8E9>* a1, ::RPG::GameCore::AttackDamageType a2, ::RPG::GameCore::MonsterRank a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_A98C406BD653F8E9>*, ::RPG::GameCore::AttackDamageType, ::RPG::GameCore::MonsterRank, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_814338D6_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_814338D6_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
