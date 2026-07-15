#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class IRogueTournGameLevel; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE21_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x11CE9120)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE21_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x11CE9150)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE21_INVOKE_OFFSET UNITYSDK_OFFSET(0x11CE9110)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE21__CTOR_OFFSET UNITYSDK_OFFSET(0x11CE9020)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE21_TypeDefinitionIndex = 47902;

	class InternalGlobals___GEN_DELEGATE21 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE21__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 Invoke(::RPG::Client::IRogueTournGameLevel* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::IRogueTournGameLevel*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE21_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::IRogueTournGameLevel* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::IRogueTournGameLevel*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE21_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE21_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
