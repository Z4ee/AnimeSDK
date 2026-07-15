#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_0_16E4307DCC419505_382;
namespace RPG::Client { class IAvatarSkinData; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE55_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x10BDE400)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE55_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x10BDE430)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE55_INVOKE_OFFSET UNITYSDK_OFFSET(0x10BDE3F0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE55__CTOR_OFFSET UNITYSDK_OFFSET(0x10BDE300)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE55_TypeDefinitionIndex = 47936;

	class InternalGlobals___GEN_DELEGATE55 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE55__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::IAvatarSkinData* Invoke(::Class_0_16E4307DCC419505_382* a1)
		{
			return ((::RPG::Client::IAvatarSkinData*(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE55_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Class_0_16E4307DCC419505_382* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Class_0_16E4307DCC419505_382*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE55_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::IAvatarSkinData* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::RPG::Client::IAvatarSkinData*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE55_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
