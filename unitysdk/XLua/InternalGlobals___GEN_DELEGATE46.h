#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterSomatoType.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE46_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x10BDD650)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE46_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x10BDD6E0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE46_INVOKE_OFFSET UNITYSDK_OFFSET(0x10BDD640)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE46__CTOR_OFFSET UNITYSDK_OFFSET(0x10BDD5D0)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE46_TypeDefinitionIndex = 47927;

	class InternalGlobals___GEN_DELEGATE46 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE46__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 Invoke(::RPG::GameCore::CharacterSomatoType a1, ::RPG::GameCore::CharacterSomatoType a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::CharacterSomatoType, ::RPG::GameCore::CharacterSomatoType))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE46_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::GameCore::CharacterSomatoType a1, ::RPG::GameCore::CharacterSomatoType a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::GameCore::CharacterSomatoType, ::RPG::GameCore::CharacterSomatoType, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE46_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE46_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
