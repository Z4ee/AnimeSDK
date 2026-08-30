#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/UseAbilityOption.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_0_16E4307DCC419505_417;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_58A4AF13_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x14B1C7E0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_58A4AF13_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x14B1C810)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_58A4AF13_INVOKE_OFFSET UNITYSDK_OFFSET(0x14B1C7D0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_58A4AF13__CTOR_OFFSET UNITYSDK_OFFSET(0x14B1C6E0)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE_B00_58A4AF13_TypeDefinitionIndex = 50518;

	class InternalGlobals___GEN_DELEGATE_B00_58A4AF13 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_58A4AF13__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::UseAbilityOption Invoke(::Class_0_16E4307DCC419505_417* a1)
		{
			return ((::RPG::GameCore::UseAbilityOption(*)(::PVOID, ::Class_0_16E4307DCC419505_417*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_58A4AF13_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Class_0_16E4307DCC419505_417* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Class_0_16E4307DCC419505_417*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_58A4AF13_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::UseAbilityOption EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::RPG::GameCore::UseAbilityOption(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_58A4AF13_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
