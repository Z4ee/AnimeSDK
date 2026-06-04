#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterSomatoType.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE45_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x12E89980)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE45_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x12E89A10)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE45_INVOKE_OFFSET UNITYSDK_OFFSET(0x12E89970)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE45__CTOR_OFFSET UNITYSDK_OFFSET(0x12E89900)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE45_TypeDefinitionIndex = 46961;

	class InternalGlobals___GEN_DELEGATE45 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE45__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 Invoke(::RPG::GameCore::CharacterSomatoType a1, ::RPG::GameCore::CharacterSomatoType a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::CharacterSomatoType, ::RPG::GameCore::CharacterSomatoType))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE45_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::GameCore::CharacterSomatoType a1, ::RPG::GameCore::CharacterSomatoType a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::GameCore::CharacterSomatoType, ::RPG::GameCore::CharacterSomatoType, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE45_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE45_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
