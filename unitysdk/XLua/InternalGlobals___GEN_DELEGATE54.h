#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_0_16E4307DCC419505_358;
namespace RPG::Client { class IAvatarSkinData; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE54_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x12E8A730)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE54_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x12E8A760)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE54_INVOKE_OFFSET UNITYSDK_OFFSET(0x12E8A720)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE54__CTOR_OFFSET UNITYSDK_OFFSET(0x12E8A630)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE54_TypeDefinitionIndex = 46970;

	class InternalGlobals___GEN_DELEGATE54 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE54__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::IAvatarSkinData* Invoke(::Class_0_16E4307DCC419505_358* a1)
		{
			return ((::RPG::Client::IAvatarSkinData*(*)(::PVOID, ::Class_0_16E4307DCC419505_358*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE54_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Class_0_16E4307DCC419505_358* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Class_0_16E4307DCC419505_358*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE54_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::IAvatarSkinData* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::RPG::Client::IAvatarSkinData*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE54_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
