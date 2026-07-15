#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client::LittleGame { class LittleGameRuntimeButton; }
namespace RPG::GameCore { class PropButtonConfig; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE64_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x10BDF040)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE64_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x10BDF070)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE64_INVOKE_OFFSET UNITYSDK_OFFSET(0x10BDF030)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE64__CTOR_OFFSET UNITYSDK_OFFSET(0x10BDEF40)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE64_TypeDefinitionIndex = 47945;

	class InternalGlobals___GEN_DELEGATE64 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE64__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::LittleGame::LittleGameRuntimeButton* Invoke(::RPG::GameCore::PropButtonConfig* a1)
		{
			return ((::RPG::Client::LittleGame::LittleGameRuntimeButton*(*)(::PVOID, ::RPG::GameCore::PropButtonConfig*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE64_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::GameCore::PropButtonConfig* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::GameCore::PropButtonConfig*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE64_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::LittleGame::LittleGameRuntimeButton* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::RPG::Client::LittleGame::LittleGameRuntimeButton*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE64_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
