#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/UseAbilityOption.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_0_16E4307DCC419505_338;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE43_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xFF585B0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE43_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xFF585E0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE43_INVOKE_OFFSET UNITYSDK_OFFSET(0xFF58050)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE43__CTOR_OFFSET UNITYSDK_OFFSET(0xFF49EB0)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE43_TypeDefinitionIndex = 40460;

	class InternalGlobals___GEN_DELEGATE43 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE43__CTOR_OFFSET))(this, object, method);
		}

		::RPG::GameCore::UseAbilityOption Invoke(::Class_0_16E4307DCC419505_338* pAbility)
		{
			return ((::RPG::GameCore::UseAbilityOption(*)(::PVOID, ::Class_0_16E4307DCC419505_338*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE43_INVOKE_OFFSET))(this, pAbility);
		}

		::System::IAsyncResult* BeginInvoke(::Class_0_16E4307DCC419505_338* pAbility, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Class_0_16E4307DCC419505_338*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE43_BEGININVOKE_OFFSET))(this, pAbility, callback, object);
		}

		::RPG::GameCore::UseAbilityOption EndInvoke(::System::IAsyncResult* result)
		{
			return ((::RPG::GameCore::UseAbilityOption(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE43_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
