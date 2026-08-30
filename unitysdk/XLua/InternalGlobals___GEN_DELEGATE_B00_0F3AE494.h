#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class IRogueTournDifficulty; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_0F3AE494_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x12B20A50)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_0F3AE494_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x12B20A80)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_0F3AE494_INVOKE_OFFSET UNITYSDK_OFFSET(0x12B20A40)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_0F3AE494__CTOR_OFFSET UNITYSDK_OFFSET(0x12B20950)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE_B00_0F3AE494_TypeDefinitionIndex = 50480;

	class InternalGlobals___GEN_DELEGATE_B00_0F3AE494 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_0F3AE494__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::RPG::Client::IRogueTournDifficulty* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IRogueTournDifficulty*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_0F3AE494_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::IRogueTournDifficulty* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::IRogueTournDifficulty*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_0F3AE494_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_0F3AE494_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
