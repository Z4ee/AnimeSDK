#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_0_16E4307DCC419505_417;
namespace RPG::Client { class IAvatarSkinData; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_380E0436_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x12B21860)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_380E0436_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x12B21890)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_380E0436_INVOKE_OFFSET UNITYSDK_OFFSET(0x12B21850)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_380E0436__CTOR_OFFSET UNITYSDK_OFFSET(0x12B21760)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE_B00_380E0436_TypeDefinitionIndex = 50519;

	class InternalGlobals___GEN_DELEGATE_B00_380E0436 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_380E0436__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::IAvatarSkinData* Invoke(::Class_0_16E4307DCC419505_417* a1)
		{
			return ((::RPG::Client::IAvatarSkinData*(*)(::PVOID, ::Class_0_16E4307DCC419505_417*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_380E0436_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Class_0_16E4307DCC419505_417* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Class_0_16E4307DCC419505_417*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_380E0436_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::IAvatarSkinData* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::RPG::Client::IAvatarSkinData*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_380E0436_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
