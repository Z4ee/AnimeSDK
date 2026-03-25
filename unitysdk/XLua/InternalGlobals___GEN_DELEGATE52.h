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

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE52_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xFF5BE00)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE52_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xFF5BE80)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE52_INVOKE_OFFSET UNITYSDK_OFFSET(0xFF5B7F0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE52__CTOR_OFFSET UNITYSDK_OFFSET(0xFF49FD0)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE52_TypeDefinitionIndex = 40469;

	class InternalGlobals___GEN_DELEGATE52 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE52__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::System::Collections::Generic::List_1<::Struct_2_A98C406BD653F8E9>* globalWeaknessDatas, ::RPG::GameCore::AttackDamageType weakness, ::RPG::GameCore::MonsterRank rank)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_A98C406BD653F8E9>*, ::RPG::GameCore::AttackDamageType, ::RPG::GameCore::MonsterRank))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE52_INVOKE_OFFSET))(this, globalWeaknessDatas, weakness, rank);
		}

		::System::IAsyncResult* BeginInvoke(::System::Collections::Generic::List_1<::Struct_2_A98C406BD653F8E9>* globalWeaknessDatas, ::RPG::GameCore::AttackDamageType weakness, ::RPG::GameCore::MonsterRank rank, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_A98C406BD653F8E9>*, ::RPG::GameCore::AttackDamageType, ::RPG::GameCore::MonsterRank, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE52_BEGININVOKE_OFFSET))(this, globalWeaknessDatas, weakness, rank, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE52_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
